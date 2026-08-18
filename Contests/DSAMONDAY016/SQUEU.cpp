// SQUEU

#include <iostream>
#include <vector>
using namespace std;

bool isValid(int k, int N, int M, int C, const vector<int>& R) {
    int current_servers = 1;
    int current_cap = C;
    
    for (int i=k; i<N; ++i) {
        if (R[i] > C) {
            return false;
        }
        
        if (current_cap >= R[i]) {
            current_cap -= R[i];
        } else {
            current_servers++;
            current_cap = C - R[i];
            if (current_servers > M) {
                return false;
            }
        }
    }
    return true;
}

int main() {
	// your code goes here
	int N, M, C;
	if (!(cin>>N>>M>>C)) return 0;
	
	vector<int> R(N);
	for (int i=0; i<N; ++i) {
	    cin>>R[i];
	}
	
	int low = 0, high = N, ans = N;
	while (low <= high) {
	    int mid = low + (high - low) / 2;
	    if (isValid(mid, N, M, C, R)) {
	        ans = mid;
	        high = mid - 1;
	        
	    } else {
	        low = mid + 1;
	    }
	}
	
	cout<<ans<<endl;

}
