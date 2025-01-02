#include <bits/stdc++.h>
#define REP(i, a, b) \
for(long int i = a; i < b; ++i)

using namespace std;

typedef long int li;

const char ln = '\n';

void _solve(){
    int n, m, p;
    cin >> n >> m >> p;
    bool flag = true;
    int cont = 1;
    const int aux = n;
    REP(i, 0, 1){
        if((n - m) >= 0){
            n -= m;
            cout << n << ln;
        } else if((n - m) < 0) {
            n = aux;
            cont++;
        }
    }
    REP(i, 0, 1){
        if((n - p) >= 0){
            n -= p;
            cout << n << ln;
        } else if((n - p) < 0) {
            n = aux;
            cont++;
        }
    }
    cout << ln << ln;
    cout << cont*2;


}
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   _solve();

    return 0;
}
