#include <iostream>
#define endl '\n'

using namespace std;

long long int coincidence(int first, int second){
    long long int  a = 1;
    for(int i = 0; i < second; i++){
        a *= (first - i);
        a /= (i + 1);
    }
    return a;
}

long long int get(pair<int,int> p1, pair<int,int> p2){
    int a = p2.first - p1.first;
    int b = p2.second - p1.second;
    return coincidence(a + b, a);
}

int main (int argc, char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin >> n >> m >> k;
    pair<int,int> axis;
    if(k == 0){
        axis.first = 0;
        axis.second = 0;
    }
    else{
        axis.first = (k-1) / m;
        axis.second =(k-1) % m;
    }
    long long int a = get({0,0},axis);
    long long int b = get(axis,{n-1,m-1});
    cout << a*b << endl;
    return 0;
}