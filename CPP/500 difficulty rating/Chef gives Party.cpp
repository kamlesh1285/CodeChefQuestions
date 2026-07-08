// Chef gives Party

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while (T--) {
	    int N, X, K;
	    cin>>N>>X>>K;
	    if (K>=(X*N)) {
	        cout<<"YES"<<endl;
	    }
	    else {
	        cout<<"NO"<<endl;
	    }
	}

}
