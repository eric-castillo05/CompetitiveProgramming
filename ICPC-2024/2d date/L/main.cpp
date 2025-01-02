#include <bits/stdc++.h>
#define REP(i,a,b)for(int i=a;i<=b;i++)
using namespace std;

void _solve() {
    int N, auxN, auxNN, aux;
    int value;
    cin >> N;
    vector<int> VI(N);
    vector<int> first_line(N);
    vector<int> second_line(N);
    REP(i, 0, N - 1) {
        cin >> first_line[i];
    }
    REP(i, 0, N - 1) {
        cin >> second_line[i];
    }
    VI[0] = 1;
    REP(i,1,VI.size()-1) {
        value = (VI[i-1] * 2);
        VI[i] = value;
    }
    if(N==2) {
        cout << 1;
    }
    else {
        cout << VI[N-2];
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    _solve();
    return 0;
}