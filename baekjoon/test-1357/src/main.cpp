#include <iostream>
#include <algorithm>

using namespace std;

int rev(string a){
    reverse(a.begin(), a.end());
    return stoi(a);
}

int main (int argc, char* argv[]) {
    string a,b;
    cin >> a >> b;
    cout << rev(to_string(rev(a) + rev(b))) << '\n';
}
