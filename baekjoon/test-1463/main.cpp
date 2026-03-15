#include <iostream>
#include <algorithm>
using namespace std;

static int dp[1000001];

int findfastest(int i){
    if(i == 1) return 0;
    if(dp[i] > 0) return dp[i];
    dp[i] = findfastest(i-1) + 1;
    if(i % 2 == 0) {
        dp[i] = min(dp[i], findfastest(i / 2) + 1);
    }
    if(i % 3 == 0) {
        dp[i] = min(dp[i], findfastest(i / 3) + 1);
    }
    return dp[i];
}

int main (int argc, char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int input;
    cin >> input;
    cout << findfastest(input) << '\n';
    return 0;
}