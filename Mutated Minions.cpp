#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,c=0;
	    cin>>n>>k;
	    int val;
	    for(int i=0;i<n;i++){
	    cin>>val;
	    if((val+k)%7==0){
	        c++;
	    }
	    }
	    cout<<c<<" ";
	}
	return 0;
}
