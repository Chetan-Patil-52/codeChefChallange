#include <bits/stdc++.h>
#define ll long long int
#define f(i, n) for (ll i = 0; i < n; i++)
#define nline '\n'
using namespace std;

void solve(){
    int n,x,k;
    cin>>n>>x>>k;
    int c=0;
    string s;cin>>s;
    ll inv = 0;
    f(i,n){
        if(s[i]=='1'){
            c++;
        }
        else{
            inv += c;
        }
    }
    if(inv%k == 0 && inv <=x){
        cout<<1<<nline;
    }else{
        cout<<2<<nline;
    }
}

int main() {
	// your code goes here
#ifdef PRADY
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    clock_t T = clock();
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

#ifdef PRADY
    cout << "\nTime taken: " << ((float) (clock() - T)) / CLOCKS_PER_SEC << " seconds";
#endif
    return 0;
}
