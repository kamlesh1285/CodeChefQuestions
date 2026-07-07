// Tom and Jerry Chase

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
    cin>>T;
    while (T--) {
        int X, Y;
        cin>>X>>Y;
        if (Y>X) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

}
