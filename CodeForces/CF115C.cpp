#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
ll getPairsCount(vector<ll>arr,ll sum){
    int n=arr.size();
    unordered_map<ll,ll,custom_hash> m;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;
 
    long long twice_count = 0;
    for (int i = 0; i < n; i++) {
        twice_count +=(long long) m[sum - arr[i]];
        if (sum - arr[i] == arr[i])
            twice_count--;
    }
    return twice_count / 2;
}
int main() 
{
    fastio;
    int tt;
    cin>>tt;
    while(tt--){
        ll n;
        cin>>n;
        vector<ll>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        ll sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(sum*2%n!=0){
            cout<<0<<'\n';
            continue;
        }
        cout<<(long long)getPairsCount(arr,2*sum/n)<<'\n';

    }
    #ifndef ONLINE_JUDGE 
       freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
    #endif 
return 0;
}
        