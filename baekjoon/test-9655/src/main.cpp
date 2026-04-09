#include <iostream>
#define endl '\n'

using namespace std;

int main (int argc, char* argv[]) {
    int n;
    cin >> n;
    if(n % 2 != 0) {
        cout << "SK" << endl;
    }
    else{
        cout << "CY" << endl;
    }
    return 0;
}
