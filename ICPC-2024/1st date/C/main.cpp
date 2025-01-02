#include <bits/stdc++.h>
#define REP(i, a, b)for(int i=a;i<b;i++)
using namespace std;
typedef long long int lli;
void _solve() {
    lli W, H, L, w, h, l;
    cin >> W >> H >> L;
    cin >> w >> h >> l;

    vector<lli> boxes;
    boxes.push_back((L / l) * (W / w) * (H / h));
    boxes.push_back((L / l) * (W / h) * (H / w));
    boxes.push_back((L / w) * (W / l) * (H / h));
    boxes.push_back((L / w) * (W / h) * (H / l));
    boxes.push_back((L / h) * (W / l) * (H / w));
    boxes.push_back((L / h) * (W / w) * (H / l));
    lli maxChocolate = boxes[0];
    REP(i, 0, boxes.size()) {
        if(boxes[i] > maxChocolate) {
            maxChocolate = boxes[i];
        }
    }
    cout << maxChocolate;


}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    _solve();
    return 0;
}
