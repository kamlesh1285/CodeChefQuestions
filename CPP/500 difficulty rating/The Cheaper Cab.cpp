// The Cheaper Cab

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while (T--) {
	    int X, Y;
	    cin>>X>>Y;
	    if (X<Y) {
	        cout<<"FIRST"<<endl;
	    }
	    else if (X==Y) {
	        cout<<"ANY"<<endl;
	    }
	    else {
	        cout<<"SECOND"<<endl;
	    }
	}

}
