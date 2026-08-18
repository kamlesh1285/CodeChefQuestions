// CATMS

#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int N;
	if (!(cin>>N)) return 0;
	
	vector<int> A(N);
	for (int i=0; i<N; i++) {
	    cin>>A[i];
	}
	
	if (N == 0) {
	    cout<<0<<"\n";
	    return 0;
	}
	
	int count = 1;
	int min_speed = A[0];
	
	for (int i=1; i<N; i++) {
	    if (A[i] <= min_speed) {
	        count++;
	        min_speed = A[i];
	    }
	}
	
	cout<<count<<"\n";

}
