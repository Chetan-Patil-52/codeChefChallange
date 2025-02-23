// My first Approach - 
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int D,d,P,Q;
    cin>>D>>d>>P>>Q;
    vector<int> vec(D);
    int inc = 0;
    for(int i=0;i<D;i++){
        if(i!=0 && i%d==0){
            inc++;
        }
        int ans = P + ( Q * inc);
        vec[i] = ans;
    }
    
    // After populating the array just accument the sum of the dollers in the vec ie the result of the total gained amount
    
    int sum = accumulate(vec.begin(),vec.end(),0);
    cout<<sum<<"\n";
}

int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}// Fix by adding line 10

// Using GPT
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long D, d, P, Q;
    cin >> D >> d >> P >> Q;

    vector<long long> vec(D);
    long long inc = 0;

    for (long long i = 0; i < D; i++) {
        if (i != 0 && i % d == 0) { // Increment only after completing d days
            inc++;
        }
        vec[i] = P + (Q * inc); // Daily production rate
    }

    // Accumulate the sum of all values
    long long sum = accumulate(vec.begin(), vec.end(), 0LL);
    cout << sum << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

// Approach - 3 TC: O(n)
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int D,d,P,Q;
    cin>>D>>d>>P>>Q;
    int a = P;
    int n = D/d;
    int rem = D%d;
    int diff = Q;
    int AP = d * (n * (2*a + (n-1) * diff)/2);
    int remain = rem * (P + (n * diff));
    int res = AP + remain;
    cout<<res<<endl;
}

#undef int

int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
