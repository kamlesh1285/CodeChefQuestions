/* Subsequence 2
Let 
f
(
A
)
f(A) denote the largest value of 
L
L such that 
1
,
2
,
…
,
L
1,2,…,L is a subsequence of 
A
A.

For example, 
f
(
[
4
,
1
,
2
,
1
,
3
]
)
=
3
f([4,1,2,1,3])=3 because 
[
1
,
2
,
3
]
[1,2,3] is a subsequence but 
[
1
,
2
,
3
,
4
]
[1,2,3,4] is not.

You are given an array 
A
A of 
N
N elements.

Find the sum of 
f
(
A
[
L
,
R
]
)
f(A[L,R]) over all pairs 
(
L
,
R
)
(L,R) such that 
1
≤
L
≤
R
≤
N
1≤L≤R≤N. Formally, compute the sum:

∑
L
=
1
N
∑
R
=
L
N
f
(
A
[
L
,
R
]
)
∑ 
L=1
N
​
 ∑ 
R=L
N
​
 f(A[L,R])

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
For each test case, output on a new line the sum of 
f
(
A
[
L
,
R
]
)
f(A[L,R]) over all pairs 
(
L
,
R
)
(L,R).*/

#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    int max_val = 0;
    for (int i=0; i<n; i++) {
        cin>>a[i];
        if (a[i]>max_val) {
            max_val = a[i];
        }
    }
    
    vector<long long> valid_start(max_val+2, 0);
    long long total_sum = 0;
    long long current_r_sum = 0;
    
    for (int i=0; i<n; i++) {
        int x=a[i];
        
        if (x<=max_val) {
            if (x==1) {
                current_r_sum -=valid_start[1];
                valid_start[1] = i + 1;
                current_r_sum += valid_start[1];
            } else {
                current_r_sum -= valid_start[x];
                valid_start[x] = valid_start[x-1];
                current_r_sum += valid_start[x];
            }
        }
        
        total_sum += current_r_sum;
    }
    cout<<total_sum<<"\n";
}

int main() {
	// your code goes here
	int T;

	if (cin>>T) {
	    while (T--) {
	        solve();
	    }
	}

}
