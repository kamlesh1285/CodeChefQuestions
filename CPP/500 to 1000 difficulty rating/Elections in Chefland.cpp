// Elections in Chefland

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while (T--) {
	    int N, X;
	    cin>>N>>X;
	    int A[N];
	    int count = 0;
	    
	    
	    for (int i=0; i<N; i++) {
	        cin>>A[i];
	    }
	    for (int i=0; i<N; i++) {
	        if (A[i] >= X) {
	            count++;
	        }
	    }
	    
	    cout<<count<<"\n";
	}

}
