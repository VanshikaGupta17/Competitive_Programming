#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define dd double
#define ll long long int
#define ull unsigned long long
#define lld long double  
#define setpre(n) cout << std::setprecision(n);
#define flush fflush(stdin); fflush(stdout);
#define print cout<<"Case #"<<test_case<<": ";
#define light ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ppb pop_back
#define mkp make_pair
#define pi pair<ll,ll>
#define pii pair<ll,pi>
#define fi first
#define sc second
#define PI 3.141592653589793238462

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.fi); cerr << ","; _print(p.sc); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

ll mod1 = 1e9+7; 
ll INF=1e9+5;
ll mod=998244353;

void solve(ll test_case){
    ll n;
    cin>>n;
    if(n%2){
        cout<<"Bob\n";
    }
    else{
        ll count =0 ;
        while(n%2==0){
            count++;
            n/=2;
        }
        if(n>1){
            cout<<"Alice\n";
        }
        else{
            if(count%2){
                cout<<"Bob\n";
            }
            else{
                cout<<"Alice\n";
            }
        }
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("Error.txt", "w", stderr);
    #endif

    light;
    ll t;
    cin>>t;
    ll i=1ll;
    while(t--){
        solve(i);
        i++;
    }
}