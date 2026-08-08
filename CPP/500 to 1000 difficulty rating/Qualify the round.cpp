// Qualify the round


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while (T--) {
	    int X, A, B;
	    cin>>X>>A>>B;
	    
	    if ((A + (2*B)) >= X) {
	        cout<<"Qualify"<<"\n";
	    }
	    else {
	        cout<<"NotQualify"<<"\n";
	    }
	}

}
