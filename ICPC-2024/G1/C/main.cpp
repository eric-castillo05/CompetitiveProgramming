#include <bits/stdc++.h>
#define REP(i, a, b) \
for(long int i = a; i < b; ++i)

using namespace std;

typedef long int li;

const char ln = '\n';

void _solve(){
    li n, m;

    cin >> n;

    vector<li>nums(n);
    REP(i, 0, n){
        cin >> nums[i];
    }
    cin >> m;

    char c;
    li p, k;
    REP(i, 0, m){
        li sum = 0;
        cin >> c >> p >> k;
        if(c == 'P'){
            REP(i, p, k){
                sum += nums[i];
            }
            cout << sum << ln;
        } else if(c == 'C'){
            nums[p] = k;
        }

    }


}
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   _solve();

    return 0;
}
