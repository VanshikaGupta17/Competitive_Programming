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

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    light;
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<ll>cnt(n+1);
        vector<vector<ll>>c(m);
        vector<vector<ll>>cnt1(n+1);
        for(ll i=0;i<m;i++){
            ll k;cin>>k;
            for(ll j=0;j<k;j++){
                ll x;cin>>x;
                c[i].pb(x);
                cnt[x]++;
            }
            cnt1[k].pb(i);
        }
        for(ll i=1;i<=n;i++){
            cnt[i]=min((m+1)/2,cnt[i]);
        }
        bool f=1;
        vector<ll>ans(m);
        for(ll len=1;len<=n;len++){
            for(auto &day:cnt1[len]){
                priority_queue<pi>pq;
                for(auto &x:c[day]){
                    if(cnt[x]){
                        pq.push(mkp(cnt[x],x));
                    }
                }
                if(pq.empty()){
                    f=0;
                    break;
                }
                ans[day]=pq.top().sc;
                cnt[pq.top().sc]--;
            }
            if(!f){
                break;
            }
        }
        if(f){
            cout<<"YES\n";
            for(ll i=0;i<m;i++){
                cout<<ans[i]<<" ";
            }
            cout<<"\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}