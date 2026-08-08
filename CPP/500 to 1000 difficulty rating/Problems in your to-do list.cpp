// Problems in your to-do list

#include <iostream>
using namespace std;

int main() {
	// your code goes her
    
	
	int T;
	cin>>T;
	while (T--) {
	    int N;
	    cin>>N;
	    int remove_count = 0;
	    int D[N];
	 
	    for (int i=0; i<N; i++) {
	        cin>>D[i];
	    }
	    
	    for (int i=0; i<N; i++) {
	        if (D[i]>=1000) {
	            remove_count++;
	        }
	    }
	    
	    cout<<remove_count<<"\n";
	}
	
	return 0;

}
