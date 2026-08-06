/* Subscription Cost
Chef has subscribed to his favourite channel, and their payment policy is as follows:

For the first 
3
3 months, the cost is 
X
X rupees per month.
For all following months, the cost is 
Y
Y rupees per month.
Chef plans to subscribe for 
N
N months. Find the total cost Chef has to pay

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
The first and only line of each test case contains 
3
3 integers - 
N
N, 
X
X and 
Y
Y.
Output Format
For each test case, output on a new line the total cost Chef has to pay.

*/


#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin>>T;
    while (T--) {
        int N, X, Y;
        cin>>N>>X>>Y;
        if (N<=3) {
            cout<<N*X<<endl;
        }
        else {
            cout<<(3*X)+(N-3)*Y<<endl;
        }
    }
}
