// Car Trip 

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while (T--) {
	    int X;
	    cin>>X;
	    if (X<=300) {
	        cout<<300*10<<endl;
	    }
	    else {
	        cout<<X*10<<endl;
	    }
	}

}
