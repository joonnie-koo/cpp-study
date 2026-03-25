#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main (int argc, char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    double input[n];
    double dp[n];
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }
    dp[0] = input[0];
    for (int i = 1; i < n; i++){
        dp[i] = max(dp[i-1] * input[i], input[i]);
    }
    double max = 0;
    for(int i = 0; i < n; i++){
        if(dp[i] > max){
            max = dp[i];
        }
    }
    cout << fixed << setprecision(3) << max << '\n';
    return 0;
}
