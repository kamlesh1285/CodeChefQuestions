/* Jumping Cost
You have an array 
A
A of 
N
N elements.

You are currently at index 
1
1 with a balance of 
0
0, and you can do the following jump operation as many times as you want:

Choose to jump from index 
i
i to index 
j
j (
i
<
j
i<j), and add 
(
A
j
−
j
+
i
)
(A 
j
​
 −j+i) to your balance.
Find the maximum possible balance you can have at any point using these jump operations.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line contains a single integer 
N
N.
The second line contains 
N
N integers - 
A
1
,
A
2
,
…
,
A
N
A 
1
​
 ,A 
2
​
 ,…,A 
N
​
 .
Output Format
For each test case, output on a new line the maximum balance you can have.

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int N;
    cin>>N;
    vector<long long> A(N+1);
    for (int i=1; i<=N; ++i) {
        cin>>A[i];
    }
    
    long long max_balance = 0;
    long long positive_sum = 0;
    
    for (int j=2; j<=N; ++j) {
        long long current_score = positive_sum + A[j]-j+1;
        max_balance = max(max_balance, current_score);
        
        if (A[j]>0) {
            positive_sum += A[j];
        }
    }
    
    cout<<max_balance<<"\n";
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--) {
	    solve();
	}
	

}
