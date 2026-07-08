// Donation Rewards

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while (T--) {
	    int X;
	    cin>>X;
	    if (X<=3) {
	        cout<<"BRONZE"<<endl;
	    }
	    else if (X>3 && X<=6) {
	        cout<<"SILVER"<<endl;
	    }
	    else {
	        cout<<"GOLD"<<endl;
	    }
	}

}
