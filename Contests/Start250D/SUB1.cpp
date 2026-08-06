/* Subsequence 1
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

Find the maximum value of 
f
(
A
1
)
+
f
(
A
2
)
+
…
+
f
(
A
K
)
f(A 
1

 )+f(A 
2

 )+…+f(A 
K

 ) over all 
A
i
A 
i

  such that 
A
1
+
A
2
+
…
+
A
K
=
A
A 
1

 +A 
2

 +…+A 
K

 =A where 
+
+ denotes array concatenation. Note that you can also choose 
K
K.

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

 ,A 
2

 ,…,A 
N

 .
Output Format
For each test case, output on a new line the maximum value of 
f
(
A
1
)
+
f
(
A
2
)
+
…
+
f
(
A
K
)
f(A 
1

 )+f(A 
2

 )+…+f(A 
K

 )*/

#include <iostream>
#include <vector>
#include <map>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    
    map<int, long long> dp;
    
    dp[1]=0;
    long long max_so_far = 0;
    
    for (int x: a) {
        if (x == 1) {
            dp[2] = max(dp[2], max_so_far + 1);
            max_so_far = max(max_so_far, dp[2]);
        } else {
            if (dp.count(x)) {
                dp[x+1] = max(dp[x+1], dp[x]+1);
                max_so_far = max(max_so_far, dp[x+1]);
            }
        }
    }
    
    cout<<max_so_far<<"\n";
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while (T--) {
	    solve();
	}

}
