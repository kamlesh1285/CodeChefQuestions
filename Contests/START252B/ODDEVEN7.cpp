// ODDEVEN7
#include <iostream>
using namespace std;

void solve() {
    int N;
    cin>>N;
    
    int odd_count = 0;
    int even_count = 0;
    
    for (int i=0; i<N; i++) {
        int val;
        cin>>val;
        if (val % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    int ans = min(odd_count, even_count) * 2;
    if (odd_count != even_count) {
        ans += 1;
    }
    
    cout<<ans<<"\n";
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while (T--) {
	    solve();
	}
	return 0;

}
