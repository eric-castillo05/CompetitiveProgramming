#include <bits/stdc++.h>
#define REP(i,a,b)for(int i =a; i <= b; i++)

using namespace std;

void _solve() {
    int a, b, k;
    cin >> a >> b >> k;
    REP(x, 1, k) {
        cout << (a * x) + b << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    _solve();
    return 0;
}
