#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    static int fibonacci[1001];
    fibonacci[1] = 1; 
    fibonacci[2] = 2;
    int n;
    cin >> n;
    for(int i = 3; i <= n; i++) {
        fibonacci[i] = (fibonacci[i-1] + fibonacci[i-2]) % 10007;
    }
    cout << fibonacci[n] << endl;
    return 0;
}