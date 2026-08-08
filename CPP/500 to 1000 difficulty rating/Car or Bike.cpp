// Car or Bike

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while (T--) {
	    int X, Y;
	    cin>>X>>Y;
	    
	    if (X>Y) {
	        cout<<"CAR"<<endl;
	    }
	    else if (Y>X) {
	        cout<<"BIKE"<<endl;
	        
	    }
	    else {
	        cout<<"SAME"<<endl;
	    }
	}

}
