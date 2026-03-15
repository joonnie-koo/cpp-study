#include <iostream>

using namespace std;

int main(int argc, int* argv[]) {
    int n;
    cin >> n;
    long long fibonachi[91] = {0,1};
    for (int i = 2; i <= n; i++) {
        fibonachi[i] = fibonachi[i - 1] + fibonachi[i - 2];
    }
    cout << fibonachi[n] << endl;
    return 0;
}