// BINSPLT

#include <iostream>
using namespace std;

void solve() {
    int N;
    cin >> N;

    string S;
    cin >> S;

    vector<pair<char, int>> runs;

    for (char ch : S) {
        if (runs.empty() || runs.back().first != ch) {
            runs.push_back({ch, 1});
        } else {
            runs.back().second++;
        }
    }

    if (runs.size() < 3) {
        cout << S << '\n';
        return;
    }

    int best = -1;

    
    for (int i = 0; i + 1 < (int)runs.size(); i++) {
        if (runs[i].first != '0') {
            continue;
        }

        if (best == -1 ||
            runs[i].second > runs[best].second ||
            (runs[i].second == runs[best].second &&
             runs[i + 1].second < runs[best + 1].second)) {
            best = i;
        }
    }

    string answer;

    answer.append(runs[best].second, runs[best].first);
    answer.append(runs[best + 1].second, runs[best + 1].first);

    cout << answer << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}