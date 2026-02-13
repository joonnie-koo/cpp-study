#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char* argv[]) {
    int n;
    cin >> n;
    int answer = 0;
    bool status;
    vector<bool> v(n);
    for(int i = 0; i < n; ++i){
        int input;
        cin >> input;
        if(input % 2 == 0){
            v[i] = 0;
        }
        else{
            v[i] = 1;
        }
    }
    status = 0;

    for(int i = 0; i < n; ++i){
        if(v[i] != status){
            ++answer;
            status = v[i];
        }
    }
    cout << answer + 1 << '\n';
}