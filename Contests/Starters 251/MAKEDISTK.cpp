// MAKEDISTK

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canMakeDistinct(const vector<long long>& a, long long k, long long operations) {
    long long previous = LLONG_MIN / 4;
    long long requiredIncrements = 0;

    for (long long value : a) {
        long long finalValue = max(value, previous + 1);

        
        if (finalValue - value > operations) {
            return false;
        }

        requiredIncrements += finalValue - value;

        
        if (requiredIncrements > k * operations) {
            return false;
        }

        previous = finalValue;
    }

    return true;
}

void solve() {
    int n;
    long long k;
    cin >> n >> k;

    vector<long long> a(n);

    for (long long& value : a) {
        cin >> value;
    }

    sort(a.begin(), a.end());

    
    if (k == 0) {
        bool distinct = true;

        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                distinct = false;
                break;
            }
        }

        cout << (distinct ? 0 : -1) << '\n';
        return;
    }

    long long low = 0;
    long long high = 1LL * n * n;

    while (low < high) {
        long long mid = low + (high - low) / 2;

        if (canMakeDistinct(a, k, mid)) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }

    cout << low << '\n';
}

int main() {
    

    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
