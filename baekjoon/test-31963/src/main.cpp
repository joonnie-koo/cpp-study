#include <iostream>
#include <vector>
#include <algorithm> 

#define endl '\n'

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n); 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<long long> num_double(n, 0); 
    long long answer = 0;
    for (int i = 1; i < n; i++) {
        int num = 0;
        long long before = a[i - 1];
        long long now = a[i];
        if (before > now) {
            while (before > now) {
             now *= 2;
                num++;
            }
        } else if (before < now) {
            while (before * 2 <= now) {
                before *= 2;
                num--;
            }
        }
        num_double[i] = max(0LL, num_double[i - 1] + num);
        answer += num_double[i];
    }

    cout << answer << endl;
    return 0;
}