// Second Max of Three Numbers

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while (T--) {
	    int N[3];
	    for (int i=0; i<3; i++) {
	        cin>>N[i];
	    }
	    sort(N, N + 3);
	    cout<<N[1]<<endl;
	}

}
