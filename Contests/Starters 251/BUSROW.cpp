// BUSROW


#include <iostream>
using namespace std;

void solve() {
    int N, M, X;
    cin>>N>>M>>X;
    
    int row = (X-1) / M + 1;
    
    int main_row = min(row, N - row + 1);
    
    cout<<main_row<<"\n";
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while (T--) {
	    solve();
	}

}
