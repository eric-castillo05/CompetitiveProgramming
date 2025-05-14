#include <bits/stdc++.h>
#define REP(i, a, b) for(int i = a; i < b; ++i)
using namespace std;
typedef long long int lli;
const char ln = '\n';
void _solve(){
    lli k;
    cin >> k;
    vector<lli> inventory(k);
    REP(i, 0, k){
        cin >> inventory[i];
    }

    lli n;
    cin >> n;
    vector<vector<lli>> orderRequirements(n, vector<lli>(k));
    REP(i, 0, n){
        REP(j, 0, k){
            cin >> orderRequirements[i][j];
        }
    }
    lli day = 1;
    lli failOrder = 0;
    bool failed = false;

    while(!failed){
        REP(i, 0, n){
            bool fulfill = true;
            REP(j, 0, k){
                if(inventory[j] < orderRequirements[i][j]){
                    fulfill = false;
                    break;
                }
            }
            if(!fulfill){
                failed = true;
                failOrder = i + 1;
                break;
            }
            REP(j, 0, k){
                inventory[j] -= orderRequirements[i][j];
            }
        }
        if(!failed){
            day++;
        }
    }

    cout << day << " " << failOrder << ln;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    _solve();
    return 0;
}