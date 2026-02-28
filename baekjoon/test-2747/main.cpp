#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int fibonachi[46] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597};
    int n; cin >> n;
    for(int i = 18; i <= n; i++){
        fibonachi[i] = fibonachi[i-1] + fibonachi[i-2];
    }
    cout << fibonachi[n] << '\n';
}