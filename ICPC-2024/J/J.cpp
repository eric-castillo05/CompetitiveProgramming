#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    string M;
    cin >> N >> M;

    int deerCookies = 0, humanCookies = 0;

    for (char c : M) {
        if (c == '1') deerCookies++;
        else humanCookies++;
    }


    if (deerCookies < humanCookies) {
        cout << 0 << endl;
        return 0;
    }

    vector<vector<int>> dp(deerCookies + 1, vector<int>(humanCookies + 1, 0));

    dp[0][0] = 1;

    for (int i = 0; i <= deerCookies; ++i) {
        for (int j = 0; j <= humanCookies; ++j) {
            if (i > 0) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
            }
            if (j > 0 && i >= j) {
                dp[i][j] = (dp[i][j] + dp[i][j - 1]) % MOD;
            }
        }
    }
    cout << dp[deerCookies][humanCookies] << endl;
return 0;
}
