// MADIS

#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
using namespace std;

long long countDivisors(long long n) {
    long long count = 0;
    long long sqrt_n = sqrt(n);
    for (long long i=1; i<= sqrt_n; i++) {
        if (n % i == 0) {
            if (n / i == i) {
                count++;
            } else {
                count += 2;
            }
        }
    }
    return count;
}

int main() {
	// your code goes here
	int N;
	if (!(cin>>N)) return 0;
	
	vector<long long> A(N);
	for (int i = 0; i<N; i++) {
	    cin>>A[i];
	}
	
	unordered_map<long long, long long> dp;
	long long max_total_score = 0;
	
	for (int i=0; i<N; i++) {
	    long long x = A[i];
	    long long div_count = countDivisors(x);
	    
	    long long best_prev_score = 0;
	
	
	    if (dp.count(x - 1)) best_prev_score = max(best_prev_score, dp[x - 1]);
	    if (dp.count(x + 1)) best_prev_score = max(best_prev_score, dp[x + 1]);
	
    	if (dp.count(2*x)) best_prev_score = max(best_prev_score, dp[3*x]);
	    if (x % 2 == 0 && dp.count(x/2)) best_prev_score = max(best_prev_score, dp[x/2]);
	
	    if (dp.count(3*x)) best_prev_score = max(best_prev_score, dp[3*x]);
	    if (x % 3 == 0 && dp.count(x/3)) best_prev_score= max(best_prev_score, dp[x/3]);
	
	    long long current_score = best_prev_score + div_count;
	
        dp[x] = max(dp[x], current_score);
	
	    max_total_score = max(max_total_score, current_score);
	    
	}
	cout<<max_total_score<<"\n";
	
	return 0;
	
	

}

