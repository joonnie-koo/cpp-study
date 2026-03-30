#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int n;
    cin >> n;
    int input[n + 1] = {0};
    int dp[n + 1] = {0};
    for(int i = 0; i < n; i++){
        cin >> input[i];
    }
    for(int i = 0; i < n; i++){
        if(input[i+1] + input[i+3] < input[i+2]){
            dp[i] = 
        }
    }
}
