// SKIPONE

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int N;
    long long K;
    cin>>N>>K;
    
    vector<long long> A(N);
    for (int i=0; i<N; i++) {
        cin>>A[i];
    }
    
    long long current_sum = 0;
    long long  max_element = 0;
    int max_items = 0;
    
    for (int i=0; i<N; i++) {
        current_sum += A[i];
        max_element = max(max_element, A[i]);
        
        long long required_cost = current_sum - max_element;
        
        if (required_cost <= K) {
            max_items = i + 1;
        } else {
            break;
        }
    }
    
    cout<<max_items<<"\n";
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while (T--) {
	    solve();
	}
	
    
}
