#include <bits/stdc++.h>
#define REP(i,a,b)for(int i=a;i<=b;i++)
using namespace std;

void _solve() {
    int N, aux;
    int value = 0;
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
    REP(i,0,first_line.size()-1) {
        REP(j,0,second_line.size()-1) {
            if(first_line[i] == second_line[j]) {
                aux = second_line[j];
                second_line[i] = second_line[j];
                second_line[j] = aux;
                value++;
                break;
            }
        }
    }
    cout << value;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    _solve();
    return 0;
}