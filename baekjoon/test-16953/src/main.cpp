#include <iostream>
#include <string>

using namespace std;

int main (int argc, char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin >> a >> b;
    int answer = 0;
    while(b > a){
        if(to_string(b).back() == '1'){
            b /= 10;
            answer++;
        }
        else if(b % 2 == 0){
            b /= 2;
            answer++;
        }
        else{
            answer = -1;
            break;
        }
    }
    answer++;
    if(b != a){
        answer = -1;
    }
    cout << answer << endl;
}
