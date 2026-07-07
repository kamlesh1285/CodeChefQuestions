// Messi vs Ronaldo

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int A, B, X, Y;
	cin>>A>>B>>X>>Y;
	if ((A*2+B) > (X*2+Y)) {
	    cout<<"Messi"<<endl;
	}
	else if ((A*2+B) == (X*2+Y)) {
	    cout<<"Equal"<<endl;
	}
	else {
	    cout<<"Ronaldo"<<endl;
	}
	    
}
