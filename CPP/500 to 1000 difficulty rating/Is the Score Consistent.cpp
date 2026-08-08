// Is the Score Consistent

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while (T--) {
	    int A, B, C, D;
	    cin>>A>>B;
	    cin>>C>>D;
	    if (C>=A && D>=B) {
	        cout<<"POSSIBLE"<<endl;
	    }
	    else {
	        cout<<"IMPOSSIBLE"<<endl;
	    }
	}

}
