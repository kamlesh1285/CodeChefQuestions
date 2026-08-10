// MXWC

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
    
    int n;
    if (!(cin>>n)) return 0;
    
    vector<long long> height(n);
    for (int i=0; i<n; i++) {
        cin>>height[i];
    }
    
    long long left = 0;
    long long right = n - 1;
    long long max_water = 0;
    
    while (left<right) {
        long long width = right - left;
        
        long long current_water = width * min(height[left], height[right]);
        
        max_water = max(max_water, current_water);
        
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }
    
    cout<<max_water<<"\n";
    
    return 0;
}
