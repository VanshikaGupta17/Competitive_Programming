#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    for(int i=0; i<n; i++){
        if(s[i]=='1' and t[i]=='1'){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
int main(){
    int t=1;
    cin>>t;
    while(t--) solve();
}