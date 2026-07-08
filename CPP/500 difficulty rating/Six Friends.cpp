// Six Friends

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while (T--) {
	    int X, Y;
	    cin>>X>>Y;
	    if ((X*3)>(Y*2)) {
	        cout<<Y*2<<endl;
	    }
	    else {
	        cout<<X*3<<endl;
	    }
	}

}
