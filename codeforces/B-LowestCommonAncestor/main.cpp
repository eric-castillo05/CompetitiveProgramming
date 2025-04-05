#include <bits/stdc++.h>
#define REP(i,a,b)\
    for(int i = a; i < b; ++i)

using namespace std;

const char ln = '\n';

void _solve() {
    int n;
    cin >> n;
    vector<string> s(n);
    for (string &x :  s) cin >> x;
    smatch match;
    // regex r(s[0]);
    string ans = "";
    // REP(i, 0, n) {
    //     regex r(s[i]);
    //     // cout << s[i] << " ";
    //     REP(j, i+1, n) {
    //         if (regex_search(s[j], match, r)) {
    //             if (ans == "") {
    //                 ans = s[i];
    //             }
    //             // cout << "yes" << ln;
    //         }
    //     }
    //
    // }
    REP(i, 0, n-1) {
        regex r("-"+s[i]);
        if (regex_search(s[i+1], match, r)) {
            if (ans == "") {
                ans = s[i];
            }
        }
    }
    if (ans != "") {
        cout << ans << ln;
    } else {
        cout << "Not found" << ln;
    }
}

int main(){
    _solve();
  return 0;
 }