// GROFR

#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes 
	int N;
	cin>>N;
	string S;
	cin>>S;
	
	int occupied_seat = 0;
	
	for (int i=0; i<N; i++) {
	    if (S[i] == '1' && (i == 0 || S[i-1] == '0')) {
	        occupied_seat++;
	    }
	    
	    
	}
	cout<<occupied_seat<<"\n";
	

}
