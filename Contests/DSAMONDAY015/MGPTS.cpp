// MGPTS

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const long long INF = 1e18;

int main() {
	// your code goes here
	
	int N, M;
	if (!(cin>>N>>M)) return 0;
	
	vector<vector<long long>> grid(N, vector<long long>(M));
	for (int i=0; i<N; ++i) {
	    for (int j=0; j<M; ++j) {
	        cin>>grid[i][j];
	    }
	}
	
	vector<vector<long long>> dp(N, vector<long long>(M, INF));
	
	if (grid[0][0] == -1) {
	    dp[0][0] = 0;
	} else {
	    dp[0][0] = grid[0][0];
	}
	
	long long min_teleport_cost = INF;
	
	for (int i=0; i<N; ++i) {
	    for (int j=0; j<M; ++j) {
	        if (i==0 && j==0) {
	            if (grid[i][j] == -1) min_teleport_cost = min(min_teleport_cost, dp[i][j]);
	            continue;
	        }
	        
	        long long from_top = (i>0) ? dp[i-1][j] : INF;
	        long long from_left = (j>0) ? dp[i][j-1] : INF;
	        long long best_prev = min(from_top, from_left);
	        
	        if (best_prev != INF) {
	            if (grid[i][j] == -1) {
	                dp[i][j] = best_prev;
	                min_teleport_cost = min(min_teleport_cost, dp[i][j]);
	            } else {
	                dp[i][j] = best_prev + grid[i][j];
	            }
	        }
	    }
	}
	
	for (int i=0; i<N; ++i) {
	    for (int j=0; j<M; ++j) {
	        if (grid[i][j] == -1 && min_teleport_cost != INF) {
	            dp[i][j] = min(dp[i][j], min_teleport_cost);
	        }
	        
	        if (dp[i][j] != INF) {
	            if (i+1 < N) {
	                long long cost_next = (grid[1+1][j] == -1) ? 0 : grid[i+1][j];
	                dp[i+1][j] = min(dp[i+1][j], dp[i][j] + cost_next);
	            }
	            
	            if (j+11 < M) {
	                long long cost_next = (grid[i][j+1] == -1) ? 0 : grid[i][j+1];
	                dp[i][j+1] = min(dp[i][j+1], dp[i][j] + cost_next);
	            }
	        }
	    }
	}
	
	cout<<dp[N-1][M-1]<<"\n";
	
	return 0;
	

}
