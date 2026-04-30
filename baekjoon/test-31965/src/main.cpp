#include <bits/stdc++.h>

#define endl '\n'

using namespace std;
long long int tiredness(int start_index, int end_index, int target_index, vector<int> &a){
    long long int answer = 0;
    for(int *i = a.data() + start_index; i < a.data() + end_index; i++){
        answer += abs(a[target_index] - *i);
    }
    return answer;
}

int main (int argc, char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin >> n >> q;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int num_cases = 0; num_cases < q; num_cases++){
        vector<long long> p;
        pair<int,int> input;
        cin >> input.first >> input.second;
        auto i = lower_bound(a.data(), a.data() + n , input.first);
        int first_index = i - a.data();
        i = upper_bound(a.data(), a.data() + n, input.first);
        int end_index = i - a.data();
        int mid_index = (first_index + end_index) /2;
        cout << max(tiredness(first_index, end_index, end_index,a),tiredness(first_index, end_index, first_index,a)) - tiredness(mid_index, end_index, mid_index,a) << endl;
    }
}