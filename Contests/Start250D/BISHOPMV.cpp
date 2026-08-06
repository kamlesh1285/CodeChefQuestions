/* Bishop Moves
You have a chessboard of size 
8
×
8
8×8, where the cells are numbered 
(
1
,
1
)
,
(
1
,
2
)
,
…
,
(
1
,
8
)
,
…
,
(
8
,
1
)
,
…
,
(
8
,
8
)
.
(1,1),(1,2),…,(1,8),…,(8,1),…,(8,8).

A bishop is a chess piece which travels along diagonals (between any 
2
2 cells in the same diagonal in a single move). A diagonal can be of 
2
2 types:

a set of cells 
(
x
,
y
)
(x,y) where 
x
+
y
x+y is constant.
a set of cells 
(
x
,
y
)
(x,y) where 
x
−
y
x−y is constant.
For example, 
{
(
1
,
2
)
,
(
2
,
3
)
,
(
3
,
4
)
,
(
4
,
5
)
,
(
5
,
6
)
,
(
6
,
7
)
,
(
7
,
8
)
}
{(1,2),(2,3),(3,4),(4,5),(5,6),(6,7),(7,8)} form a diagonal.

You are given 
2
2 cells 
(
X
1
,
Y
1
)
(X 
1
​
 ,Y 
1
​
 ) and 
(
X
2
,
Y
2
)
(X 
2
​
 ,Y 
2
​
 ). Can a bishop starting in the first cell reach the second? If it can, what is the minimum number of moves.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
The first and only line contains 
4
4 integers 
X
1
X 
1
​
 , 
Y
1
Y 
1
​
 , 
X
2
X 
2
​
  and 
Y
2
Y 
2
​
 .
Output Format
For each test case, output on a new line the minimum moves needed or 
−
1
−1 if impossible.

*/


#include <iostream>
using namespace std;

void solve() {
    int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    
    if ((x1+y1) % 2 != (x2+y2) % 2) {
        cout<<-1<<"\n";
    }
    
    else if (x1 == x2 && y1 == y2) {
        cout<<0<<"\n";
    }
    else if (abs(x1-x2) == abs(y1-y2)) {
        cout<<1<<"\n";
    }
    else  {
        cout<<2<<"\n";
    }
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while (T--) {
	    solve();
	}
	

}
