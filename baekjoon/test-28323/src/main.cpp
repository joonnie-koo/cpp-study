#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;

    int first;
    cin >> first;
    
    int answer = 1;
    int status = first % 2;

    for(int i = 1; i < n; ++i) {
        int input;
        cin >> input;
        if(input % 2 != status) {
            answer++;
            status = input % 2;
        }
    }
    cout << answer << '\n';
    return 0;
}
