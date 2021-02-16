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
    int x,y,z,t1=0,t2=0,t3=0;
    cin >> x >> y >> z;

    if(x > y){
        if(x > z){
            t3 = x;
            t2 = z;
        }else{
            t3 = z;
            t2 = x;
        }
        t1 = y;
    }else{
        if(y > z){
            t3 = y;
            t2 = z;
        }else{
            t3 = z;
            t2 = y;
        }
        t1 = x;
    }
    if(t3-t1 == t2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
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