#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main (int argc, char* argv[]) {
    int n;
    cin >> n;
    int input[n];
    int dp[n];
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }
    for (int i = 0; i < n; i++){
        dp[0] = input[0];
        dp[i] = max(dp[i-1] + input[i], input[i]);
    }
    int max = -1001;
    for(int i = 0; i < n; i++){
        if(dp[i] > max){
            max = dp[i];
        }
    }
    cout << max << '\n';
}
