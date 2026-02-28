#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    pair<int,int> fibonachi[41] = {{1,0},{0,1}};
    for(int i = 2; i < 41; i++){
        fibonachi[i].first = fibonachi[i-1].first + fibonachi[i-2].first;
        fibonachi[i].second = fibonachi[i-1].second + fibonachi[i-2].second;
    }

    int n; cin >> n;

    for(int i = 0; i < n; i++){
        int input; cin >> input;
        cout << fibonachi[input].first << " " << fibonachi[input].second << '\n';
    }
}