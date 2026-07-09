// Mahasena

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	
	
	int even_count = 0;
	int odd_count = 0;
	
	for (int i=0; i<N; i++) {
	    int weapon;
	    cin>>weapon;
	    
	    if (weapon%2 == 0) {
	        even_count++;
	    }
	    else {
	        odd_count++;
	    }
	}
	
	if (even_count > odd_count) {
	    cout<<"READY FOR BATTLE"<<endl;
	}
	else {
	    cout<<"NOT READY"<<endl;
	}

}
