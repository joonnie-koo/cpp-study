#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<pair<int, int>> input(N);
    for (int i = 0; i < N; i++) {
        cin >> input[i].first >> input[i].second;
    }
    sort(input.begin(), input.end());
    int t = 0;
    for (int i = 0; i < N; i++) {
        if (t < input[i].first) {
            t = input[i].first;
        }
        t += input[i].second;
    }

    cout << t << "\n";

    return 0;
}