#include<bits/stdc++.h>
#define int long long
#define test int t; cin>>t; while(t--)
#define ff first
#define ss second
#define vii vector<pair<int,int>>
#define vi vector<int>
#define vch vector<char>
#define pb push_back
#define all(v) v.begin(),v.end()
 
using namespace std;
 
int32_t main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    test{
        int n;
        cin>>n;
 
        if(n==3) cout<<"-1\n";
        else{
            vi vec(n);
            int x = 1;
            for(int i=(n/2); i<n; i++){
                vec[i]=x;
                x++;
            }
            for(int i=0; i<(n/2); i++){
                vec[i]=x;
                x++;
            }
 
            for(int i=0; i<n; i++) cout<<vec[i]<<" ";
            cout<<"\n";
        }
    }
 
    return 0;
}