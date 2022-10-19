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
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
 
        int thk = INT_MIN;
        int thick = n;
        int ans =  n;
        int sum = 0;
 
        for(int i=0; i<n; i++){
            thick = n;
            thk = INT_MIN;
            sum += a[i];
 
            int j=0, temp, cnt;
            bool psbl = 1;
 
            while(j<n){
                temp = 0, cnt=0;
                while(temp<sum){
                    temp += a[j];
                    j++;
                    cnt++;
                }
                
                if(temp!=sum){
                    psbl = 0;
                    break;
                }
                thk = max(thk, cnt);
            }
 
            if(psbl) thick = thk;
 
            ans = min(thick, ans);
        }
 
        cout<<ans<<'\n';
    }
 
    return 0;
}