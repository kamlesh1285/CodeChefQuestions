// Bull or Bear

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while (T--) {
	    int X, Y;
	    cin>>X>>Y;
	    if (Y>X) {
	        cout<<"PROFIT"<<endl;
	    }
	    else if (Y == X) {
	        cout<<"NEUTRAL"<<endl;
	  
	    }
	    else {
	        cout<<"LOSS"<<endl;
	    }
	}

}
