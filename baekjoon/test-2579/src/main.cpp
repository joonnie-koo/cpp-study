#include <iostream>
#include <algorithm>
#include <vector>
#define endl '\n'

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> inputs(n + 1, 0);
    vector<int> dp(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> inputs[i];
    }
    dp[1] = inputs[1];
    if (n >= 2) {
        dp[2] = inputs[1] + inputs[2];
    }
    if (n >= 3) {
        dp[3] = max(inputs[1] + inputs[3], inputs[2] + inputs[3]);
    } 
    for (int i = 4; i <= n; i++) {
        dp[i] = max(dp[i - 2], dp[i - 3] + inputs[i - 1]) + inputs[i];
    }
    cout << dp[n] << endl;
    return 0;
}