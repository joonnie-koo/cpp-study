#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main (int argc, char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> a(9);
    int sum = 0;
    for(int i = 0; i < 9; i++){
        cin >> a[i];
        sum += a[i];
    }
    sort(a.begin(), a.end());
    int *p = &a[0], *q = &a.back();
    while(sum - *p - *q != 100){
        if(sum - *p - *q > 100){
            p++;
        } else {
            q--;
        }
    }
    for(int i = 0; i < 9; i++){
            if (&a[i] != p && &a[i] != q){
                cout << a[i] << "\n";
            }
        }
    return 0;
}