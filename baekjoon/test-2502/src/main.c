#include <stdio.h>

struct Pair {
    int num_x;
    int num_y;
};

int main (int argc, char* argv[]) {
    int x = 0, y = 0;
    struct Pair dp[31];
    dp[0].num_x = 1; dp[0].num_y = 0;
    dp[1].num_y = 1; dp[1].num_x = 0;
    int n;
    int num;
    scanf("%d %d", &n, &num);
    for (int i = 2; i < n; i++){
        dp[i].num_x = dp[i-1].num_x + dp[i-2].num_x;
        dp[i].num_y = dp[i-1].num_y + dp[i-2].num_y;
    }
    int cnt = 0;
    while((num -= dp[n-1].num_x)){
        cnt++;
        if (num % dp[n-1].num_y == 0){
            x = cnt;
            y = num / dp[n-1].num_y;
            break;
        }
    }
    printf("%d", x);
    printf("\n");
    printf("%d", y);
    return 0;
}