#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int n;
    cin >> n;
    int max_kill = 0;
    int kill = 0;
    int now = 0;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        if(input > now){
            kill = 0;
            now = input;
        }
        else{
            kill++;
        }
        if(max_kill < kill){
            max_kill = kill;
        }
    }
    cout << max_kill << '\n';
}