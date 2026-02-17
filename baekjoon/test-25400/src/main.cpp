#include <iostream>
#include <queue>

using namespace std;

int main (int argc, char* argv[]) {
    int n;
    cin >> n;
    int track = 1;
    int answer = 0;
    queue<int> q;
    for(int i = 0; i < n; ++i){
        int input;
        cin >> input;
        q.push(input);
    }
    while(!q.empty()){
        while(!q.empty() && q.front() != track){
            q.pop();
            ++answer;
        }
        ++track;
        if(!q.empty()){
            q.pop();
        }
    }
    cout << answer << '\n';
}