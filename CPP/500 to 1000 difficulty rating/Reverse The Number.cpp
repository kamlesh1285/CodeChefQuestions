// Reverse The Number

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while (T--) {
	    int N, reverseN=0, remaindeR;
	    cin>>N;
	    while (N != 0) {
	        remaindeR = N % 10;
	        reverseN = reverseN*10 + remaindeR;
	        N /= 10;
	    }
	    cout<<reverseN<<"\n";
	}

}
