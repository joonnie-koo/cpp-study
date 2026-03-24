#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int dp[12] = {0, 1, 2, 4, 7};
    for(int i = 4; i < 12; i++){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }
    int n, input; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> input;
        cout << dp[input] << '\n';
    }
    return 0;
}
