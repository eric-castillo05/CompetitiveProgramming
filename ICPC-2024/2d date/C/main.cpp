#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int countDivisors(int N, int T) {
    int cnt = 0;
    for (int i = 1; i * i <= T; ++i) {
        if (T % i == 0) {
            if (i <= N) cnt++;
            if (i != T / i && T / i <= N) cnt++;
        }
    }
    return cnt;
}

void _solve() {
    int Q;
    int N, T;
    cin >> Q;
    while (Q--) {
        cin >> N >> T;
        int res = 0;
        if (T == 1) {
            res = N;
        } else {
            T--;
            res = countDivisors(N, T);
        }
        cout << res << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    _solve();
    return 0;
}