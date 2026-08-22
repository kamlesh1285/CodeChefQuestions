// MEXMAX7

#include <iostream>
#include <vector>
#include <map>
using namespace std;

long long power(long long base, long long exp) {
    long long res = 1;
    base %= 998244353;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % 998244353;
        base = (base*base) % 998244353;
        exp /= 2;
    }
    return res;
}

void solve() {
    int N;
    cin>>N;
    vector<int> A(N);
    map<int, int> count;
    for (int i=0; i<N; i++) {
        cin>>A[i];
        count[A[i]]++;
    }
    
    long long total_subsequences = 0;
    long long MOD = 998244353;
    long long prefix_prod = 1;
    
    for (int M=0; ; M++) {
        long long c_M = count[M];
        long long ways_M = (power(2, c_M) - 1 + MOD) % MOD;
        
        long long current_case2 = (prefix_prod * ways_M) % MOD;
        total_subsequences = (total_subsequences + current_case2) % MOD;
        
        if (M >= 1) {
            long long c_M_plus_1 = count[M+1];
            long long ways_M_plus_1 = (power(2, c_M_plus_1) - 1 + MOD) % MOD;
            
            long long current_case3 = (prefix_prod * ways_M_plus_1) % MOD;
            total_subsequences = (total_subsequences + current_case3) % MOD;
            
        }
        prefix_prod = (prefix_prod * ways_M) % MOD;
        
        if (c_M == 0) {
            break;
        }
    }
    
    cout<<total_subsequences<<"\n";
    
    
    
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while (T--) {
	    solve();
	}

}
