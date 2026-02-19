#include <iostream>
#include <vector>

using namespace std;

vector<bool> is_prime (30000000, true);
vector<int> prime;

int main (int argc, char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if(n % 2 != 0){
        if(n == 1){
            cout << 2 << " " << 3 << '\n'; 
            return 0;
        }
        else{
            cout << -1 << '\n';
        }
    }
    else{
        is_prime[0] = is_prime[1] = false;
        for(int i = 2; i * i <= 30000000; i++){
            if(is_prime[i]){
                for(int j = i * i; j < 30000000; j += i){
                    is_prime[j] = false;
                }
            }
        }
        for(int i = 2; i + n <= 30000000; i++){
            if(is_prime[i]){
                prime.push_back(i);
            }
        }
        for(int i = 0;)
        cout << -1 << '\n';
        return 0;
    }
}