#include <bits/stdc++.h>
using namespace std;

int main() {
    
   
   int t;
   cin>>t;
   
   while (t--){
       string x,y;
       cin>>x;
       
       cin>>y;
      
       
       for(int i=0;i<x.length();i++){
           
           if(x[i]!=y[i]&&x[i]!='?'&&y[i]!='?'){
               cout<<"No"<<endl;
               break;
           }
           
           else if(i==x.length()-1){
               cout<<"Yes"<<endl;
           }
       }
   }
	return 0;
}
