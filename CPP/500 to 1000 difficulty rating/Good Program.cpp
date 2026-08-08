// Good Program

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while (T--) {
	    int N;
	    cin>>N;
	    if (N % 4 == 0) {
	        cout<<"Good"<<"\n";
	    }
	    else {
	        cout<<"Not Good"<<"\n";
	    }
	}

}
