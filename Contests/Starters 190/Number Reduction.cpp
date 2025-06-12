#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;cin>>t;
    
    while(t--){
        int x;cin>>x;
        if(x==1){
            cout<<"1"<<endl;
        }else if(x==2){
            cout<<"1"<<endl;
        }else if(x==3){
            cout<<"3"<<endl;
        }else if(x==4){
            cout<<"1"<<endl;
        }
        else if(x==5){
            cout<<"1"<<endl;
        
        }else if(x==6){
            cout<<"3"<<endl;
        }
        else if(x%3==0){
            cout<<"3"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
    }
}
