// MXLED

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	if (!(cin>>N)) return 0;
	
	int player_1_cumulative = 0;
	int player_2_cumulative = 0;
	
	int max_lead = 0;
	int winner = 1;
	
	for (int i=0; i<N; i++) {
	    int S, T;
	    cin>>S>>T;
	    
	    player_1_cumulative += S;
	    player_2_cumulative += T;
	    
	    int current_lead = 0;
	    int current_leader = 1;
	    
	    if (player_1_cumulative > player_2_cumulative) {
	        current_lead = player_1_cumulative - player_2_cumulative;
	        current_leader = 1;
	        
	    }
	    else {
	        current_lead = player_2_cumulative - player_1_cumulative;
	        current_leader = 2;
	    }
	    
	    if (current_lead > max_lead) {
	        max_lead = current_lead;
	        winner = current_leader;
	    }
	}
	
	cout<<winner<<" "<<max_lead<<"\n";
	
	return 0;
	
}