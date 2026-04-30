#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main (int argc, char* argv[]) {
    vector<int> dp(45);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    for(int i = 3; i < 45; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    int n;
    cin >> n;
    cout << dp[n] << endl;
    return 0;
}
