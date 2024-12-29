#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;

    vector<int> pages(N), pleasure(N), fame(N);

    for (int i = 0; i < N; ++i) {
        cin >> pages[i];
    }

    for (int i = 0; i < N; ++i) {
        cin >> pleasure[i];
    }

    for (int i = 0; i < N; ++i) {
        cin >> fame[i];
    }

    int max_working_time = 480;
    int max_total_time = 780;

    int max_pleasure = 0, max_fame = 0;

    for (int i = 0; i < N; ++i) {
        int reading_time = pages[i] * 3;
        if (reading_time <= max_working_time) {
            max_pleasure = max(max_pleasure, pleasure[i]);
            max_fame = max(max_fame, fame[i]);
        }
        else if (reading_time <= max_total_time) {
            max_pleasure = max(max_pleasure, pleasure[i]);
            max_fame = max(max_fame, fame[i]);
        }
    }

    if (max_pleasure > max_fame) {
        cout << "PLEASURE" << endl;
    } else if (max_fame > max_pleasure) {
        cout << "FAME" << endl;
    } else {
        cout << "EITHER" << endl;
    }

    return 0;
}
