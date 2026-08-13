// CHOCGM

#include <iostream>
using namespace std;

void solve() {
    int N;
    cin >> N;

    long long total = 0;
    long long oddCount = 0;

    for (int i = 0; i < N; i++) {
        long long x;
        cin >> x;

        total += x;

        if (x % 2 == 1) {
            oddCount++;
        }
    }

    long long aliceChocolates;

    if (total % 2 == 0) {
        aliceChocolates = total - oddCount / 2;
    } else {
        aliceChocolates = (oddCount - 1) / 2;
    }

    cout << aliceChocolates << '\n';
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