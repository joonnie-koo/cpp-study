#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (int argc, char* argv[]) {
    int n;
    cin >> n;
    vector<int> a(n);
    int answer = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    for(int i = 0; i < n; i++){
        answer += a[i] * (n - i);
    }
    cout << answer << '\n';
}
