// RGTWR

#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	long long R, G;
	if(!(cin>>R>>G)) return 0;
	
	long long MOD = 1000000007;
	long long  H = 0;
	while ((H + 1) * (H + 2) / 2 <= R + G) {
	    H++;
	}
	
	if (H == 0) {
	    cout<<1<<"\n";
	    return 0;
	}
	
	vector<long long> dp(R + 1, 0);
	dp[0] = 1; 
	
	long long total_used = 0;
	
	for (int h = 1;  h <= H; h++) {
	    total_used += h;
	    
	    for (int r=R; r >= h; r--) {
	        dp[r] = (dp[r] + dp[r-h]) % MOD;
	    }
	    
	}
	
	long long ans = 0;
	for (int r=0; r<=R; r++) {
	    long long g = total_used - r;
	    
	    if (g >= 0 && g<= G) {
	        ans = (ans + dp[r]) % MOD;
	    }
	}
	
	cout<<ans<<"\n";

}
