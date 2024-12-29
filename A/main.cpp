#include <bits/stdc++.h>
#define REP(i, a, b) for(int i = a; i < b; i++)
using namespace std;

string convert(const string& s) {
    string sorted_s = s;
    sort(sorted_s.begin(), sorted_s.end());
    return sorted_s;
}

bool compare(const string& a, const string& b) {
    string sorted_a = convert(a);
    string sorted_b = convert(b);
    if (sorted_a == sorted_b) {
        return a < b;
    }
    return sorted_a < sorted_b;
}

void solve() {
    int n;
    cin >> n;
    vector<string> words(n);
    REP(i, 0, n) {
        cin >> words[i];
    }
    sort(words.begin(), words.end(), compare);

    int q;
    cin >> q;
    REP(i, 0, q) {
        string query;
        cin >> query;
        auto it = upper_bound(words.begin(), words.end(), query, compare);
        cout << (it - words.begin()) << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
