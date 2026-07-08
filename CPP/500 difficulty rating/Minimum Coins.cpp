// Minimum Coins

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while (T--) {
	    int X;
	    cin>>X;
	    if (X % 10 == 0) {
	        cout<<0<<endl;
	    }
	    else {
	        cout<<X%10<<endl;
	    }
	}

}
