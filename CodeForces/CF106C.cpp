#include<bits/stdc++.h>
using namespace std;
#define dd double
#define ll long long int 
#define light ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define mkp make_pair
#define pi pair<ll,ll>
#define pii pair<ll,pi>
#define fi first
#define sc second
ll INF=1e9+5;
ll mod=998244353;

void solve(){
    ll n,k;
    cin>>n;
    vector<ll>a(n);
    for(auto &ele:a){
        cin>>ele;
    }
    ll up=a[0],right=a[1];
    ll costu= up*n ,costr= right*n;
    ll miu=a[0],mir=a[1];
    ll ans=costu +costr;
    ll sumu=a[0],sumr=a[1],i;
    for(i=2;i<n;i++){
        if(i%2==0){
            //cout<<"c"<<miu<<" ";
            if(miu<=a[i]){
                //cout<<"r";
                costu-= miu; costu+=a[i];
            }
            else{
                //cout<<sumu<<" "<<(n-i/2);
                costu = (sumu) + a[i]* (n-i/2);
                miu=a[i]; 
            }
            sumu+=a[i];
        }
        else{
            if(mir<=a[i]){
                costr-= mir; costr+=a[i];
            }
            else{
                costr = (sumr) + a[i]* (n-i/2);
                mir=a[i]; 
            }
            sumr+=a[i];
        }
       // cout<<costr<<" "<<costu<<"\n";
        ans=min(ans,costr+costu);
    }
    cout<<ans<<"\n";
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    light;
    ll t;
    cin>>t;
    //t=1;
    while(t--){
        solve();
    }
}