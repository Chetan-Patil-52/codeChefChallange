Contest Answers - 
Entry Check

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x;cin>>x;
    if(x>=10){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
—-------------------X—-------------------------
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int num ;
	
	//cout << " enter the age for check wther you are eligibal or not ";
	cin >> num;
	
	if (num >= 10){
	    
	    cout<< "YES";
	}else{
	    cout<< "NO";
	}

}


Opposite Attract

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int testcases;cin>>testcases; // input testcases
    while(testcases--){ // until testcases == 0
        int n;cin>>n; // length of string
        string s;cin>>s ;  
        for(int i=0;i<n;i++){
            if(s[i]=='0'){// if 0 then convert 1 or else to 0
                s[i] = '1';
            }else{   
                s[i] = '0';
            }
        }
        cout<<s<<endl;
    }
}

Hamming equivalent
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> arr1(n,0);
        vector<int> arr2(n,0);
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            arr1[i] = x;
            arr2[i] = x;
            int setCnt = __builtin_popcount(x);
            mp[x] = setCnt;
        }
        
        
        sort(arr2.begin(), arr2.end());
        
        int count = 0;
        for(int i =0;i<n;i++){
            if(mp[arr1[i]]==mp[arr2[i]]){
                count++;
            }
        }
        if(count==n){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
