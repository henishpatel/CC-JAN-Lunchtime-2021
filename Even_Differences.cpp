#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define pb push_back 
#define ll long long int 
typedef unsigned long long ull;
#define endl "\n"
#define mod 1000000007
#define xx first
#define yy second
#define codec ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);;
typedef vector<int> vi;
#define deb(x) cout<<#x<<" "<<x<<endl;
#define all(t) (t).begin(),(t).end()
typedef pair<int, int> pi;
#define pie 3.1415926535
#define output(x) cout << ( x ? "YES" : "NO" ) << '\n' ;

void solve(){
    int n,c_even=0,c_odd=0;
    cin >> n;
    int arr[n];
    rep(i,0,n){
        cin >> arr[i];
        if(arr[i]%2 == 0){
            c_even++;
        }else{
            c_odd++;
        }
    }
    if(c_even < c_odd){
        cout << c_even << endl;
    }else{
        cout << c_odd << endl;
    }
}

signed main(){
    codec;
    int T=1;
    cin >> T;
    while(T--){
        solve();
    }
}