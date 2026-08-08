// Monopoly


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while (T--) {
	    int P, Q, R, S;
	    cin>>P>>Q>>R>>S;
	    if (P > (Q+R+S)) {
	        cout<<"YES\n";
	    }
	    else if (Q > (P+R+S)) {
	        cout<<"YES\n";
	    }
	    else if (R > (P+Q+S)) {
	        cout<<"YES\n";
	    }
	    else if (S > (P+Q+R)) {
	        cout<<"YES\n";
	    }
	    else {
	        cout<<"NO\n";
	    }
	    
	  
	}

}
