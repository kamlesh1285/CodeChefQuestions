// Sasta Shark Tank

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while (T--) {
	    int A, B;
	    cin>>A>>B;
	    if ((2*A) == B) {
	        cout<<"ANY"<<"\n";
	    }
	    else if ((2*A) > B) {
	        cout<<"FIRST"<<"\n";
	    }
	    else {
	        cout<<"SECOND"<<"\n";
	    }
	}
	

}
