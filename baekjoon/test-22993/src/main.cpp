#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (int argc, char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<long long int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin() + 1, v.end());
    for(int i = 1; i < n; i++){
        if(v[0] > v[i]){
            v[0] += v[i];
        }
        else{
            cout << "No" << '\n';
            return 0;
        }
    }
    cout << "Yes" << '\n';
    return 0;
}