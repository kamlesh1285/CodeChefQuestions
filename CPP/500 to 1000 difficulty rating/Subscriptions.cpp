// Subscriptions

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n>0){
        int a, b;
        cin>>a>>b;
        if(a%6==0){
            int c;
            c = a%6;
            cout<<(a/6)*b<<endl;
        }
        else {
            cout<<(a/6)*b + b<<endl;;
        }
        n--;
    }
    return 0;
}
