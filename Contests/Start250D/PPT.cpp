/* Presentation
Chef needs to give a presentation that lasts exactly 10 minutes (or 600 seconds). He will prepare a slide show containing some number of slides for the presentation.

He knows that he takes exactly 30 seconds to cover each slide. He has already made N slides. How many more slides does he need to make so that his presentation lasts exactly 
10
10 minutes?

Input Format
The first and only line of input contains a single integer 
N
N - the number of slides Chef has already made.
Output Format
Output the number of slides Chef still has to make.*/



#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	cout<<20-N<<endl;

}


