#include <bits/stdc++.h>
#define REP(i,a,b)for(int i=a;i<b;i++)
using namespace std;
typedef vector<unsigned long int> vui;
bool isZero(vui& towers) {
    REP(i, 0, towers.size()) {
        if(towers[i] <= 0) {
            return true;
        }
    }
    return false;
}
int findMin(vui& towers) {
    int min = towers[0];
    REP(i, 0, towers.size()) {
        if(towers[i] < min) {
            min = towers[i];
        }
    }
    return min;
}
void _solve() {
    int n;
    cin >> n;
    vui towers(n);
    REP(i, 0, n) {
        cin >> towers[i];
    }
    bool flag = true;
    int i = 0;
    while(flag) {
        int m = findMin(towers) - 1;
        REP(i, 0, n) {
            towers[i]--;
        }
        flag = isZero(towers);
        i++;
    }
    if(i % 2 == 0) {
        cout << "Bobius";
    } else {
        cout << "Alicius";
    }


}
int main(){
    ios_base::sync_with_stdio(false);
    _solve();
    return 0;
}