// Chef and Candies

#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin>>T;
    while (T--) {
        int N, X;
        cin>>N>>X;
        int need = max(0, N - X);
        int packets = (need + 3) / 4;   

        cout << packets << endl;
    
    }
}
