#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main (int argc, char* argv[]) {
    vector<pair<int,int>> dp;
    int n;
    cin >> n;
    dp.resize(n+1);
    dp[0] = {1, 0};
    for(int i = 1; i <= n; i++) {
        dp[i].first = dp[i-1].second;
        dp[i].second = dp[i-1].first + dp[i-1].second;
    }
    cout << dp[n].first << " " << dp[n].second << endl;
    return 0;
}