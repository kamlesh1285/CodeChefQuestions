// Spice Level

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while (T--) {
	    int X;
	    cin>>X;
	    if (X<4) {
	        cout<<"MILD"<<endl;
	    }
	    else if (X>=4 && X<7) {
	        cout<<"MEDIUM"<<endl;
	    }
	    else {
	        cout<<"HOT"<<endl;
	    }
	}

}
