// MUL123

#include <iostream>
using namespace std;


void solve() {
    int N;
    cin >> N;
    
    if (N % 3 == 0) {
        cout << 0 << "\n";
    } else if (N % 3 == 2) {
        cout << 1 << "\n";
    } else { 
        int next_mult_5 = ((N / 5) + 1) * 5;
        if (next_mult_5 % 3 == 0) {
            cout << 1 << "\n";
        } else {
            cout << 2 << "\n";
        }
    }
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while (T--) {
	    solve();
	    
	}

}
