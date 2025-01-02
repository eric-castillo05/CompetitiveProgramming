#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void findPairs(const vector<int>& arr, int start, vector<pair<int, int>>& pairs) {
    if (start >= arr.size()) {
        return;
    }
    for (int i = start + 1; i < arr.size(); ++i) {
        pairs.emplace_back(arr[start], arr[i]);
    }
    findPairs(arr, start + 1, pairs);
}

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    vector<pair<int, int>> pairs;
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    int total_gcd;
    bool ans = true;

    findPairs(arr, 0, pairs);
    int aux = gcd(arr[0], arr[1]);
    for (const auto& p : pairs) {
        if (gcd(p.first, p.second) != aux) {
            ans = false;
        }
    }

    if (ans == false) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    return 0;
}
