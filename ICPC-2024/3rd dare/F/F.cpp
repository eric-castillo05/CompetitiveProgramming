#include <bits/stdc++.h>

using namespace std;

void _solve() {
    int n;
    cin >> n;
    if (n == 0) {
        cout << 1 << endl;
        cout << 0;
    }

    int f1 = 1, f2 = 1;
    for (int i = 2; i <= n; ++i) {
        int aux = f1 + f2;
        f1 = f2;
        f2 = aux;
    }

    cout << f2 << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    _solve();
    return 0;
}
