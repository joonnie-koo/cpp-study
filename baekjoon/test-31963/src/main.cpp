#include <iostream>
#include <vector>
#define endl '\n'

using namespace std;

int main (int argc, char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    int answer = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<long long> num_double(n);
    for (int i = 0; i < n; i++){
        while(a[i] > 0){
            
        }
    }
    for(int i = 1; i < n; i++){
        while(num_double[i] < num_double[i-1]){
            num_double[i]++;
            answer++;
        }
    }
    cout << answer << endl;
    return 0;
}