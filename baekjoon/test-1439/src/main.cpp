#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    string input;
    cin >> input;
    int answer = 0;
    char status = input[0];
    for(int i = 1; i < input.size(); i++) {
        if (input[i] != status) {
            answer++;
            while(i < input.size() && status != input[i]){
                ++i;
            } 
        }
    }
    cout << answer << endl;
    return 0;
}