#include <iostream>
using namespace std;
void _solve() {
    long long int n, k;
    cin >> n >> k;
    cout << (k - (n -1)) / n;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    _solve();
    return 0;
}
