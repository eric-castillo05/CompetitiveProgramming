// 9:24
// 9:37 first try
// 9:41 send - AC
// 17 min to solve

#include <bits/stdc++.h>
#define REP(i, a, b) \
	for(int i = a; i < b; ++i)

using namespace std;

const char ln = '\n';

int binary_search(int& N, vector<int>& P){
	int l = 0, r = P.size()-1;
	while(l <= r){
		int mid = l + (r - l) / 2;
		if(P.at(mid) == N){
			return mid + 1;
		} else if (P.at(mid) < N){
			l = mid + 1;
		} else {
			r = mid - 1;
		}
	}
	return 0;
}

void _solve(){
	int M, N;
	cin >> M;
	vector<int> P(M);
	REP(i, 0, M){
		cin >> P[i];
	}
	cin >> N;
	vector<int> L(N);
	REP(i, 0, N){
		cin >> L[i];
	}
	REP(i, 0, N){
		cout << binary_search(L[i], P) << " ";
	}


}

int main(){
	_solve();
	return 0;
}
