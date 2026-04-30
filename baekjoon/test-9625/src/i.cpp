#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,q;
    cin >> n >> q;
    vector<int> dummy(n);
    for(int i = 0; i < n; i++){
        cin >> dummy[i];
    }
    for(int num_cases = 0; num_cases < q; num_cases++){
        pair<int, int> arrow;
        cin >> arrow.first >> arrow.second;
        vector<int> dummy_copy(dummy.begin(),dummy.begin() + arrow.first);
        sort(dummy_copy.begin(), dummy_copy.end(),greater<int>());
        int num_dummys = 0;
        for(int i = 0; arrow.second > 0 || i == arrow.first - 1; i++){
            arrow.second -= dummy_copy[i];
            num_dummys++;
        }
        if(arrow.second <= 0){
            cout << num_dummys << '\n';
        }
        else{
            cout << "-1" << '\n';
        }
    }
    return 0;
}