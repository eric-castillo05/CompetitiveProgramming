#include <bits/stdc++.h>
#define REP(i,a,b)\
	for(int i =a;i<b;++i)

using namespace std;

const char ln = '\n';

void _solve(){
	int t;
	cin >> t;
	string ans = "";
	vector<string> s(t);
	for (string &x :  s) cin >> x;
	// REP(i, 0, s.size()) {
	// 	REP(j, 0, s[0].length()) {
	// 		cout << s[i][j] << " ";
	// 	}
	// 	cout << ln;
	// }
	// cout << ln;
	REP(i, 0, s[0].length()) {
		REP(j, 0, s.size()) {
			// cout << s[j][i] << " ";
			if (s[j][i] != '.') {
				ans += s[j][i];
				break;
			} if (j == s.size()-1 && s[j][i] == '.') {
				ans += '.';
			}
		}
		// cout << ln;
	}
	cout <<  ans << ln;
}

int main(){
	_solve();
	return 0;
}
