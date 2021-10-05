#include<bits/stdc++.h>
using namespace std;
#define ll int long long
#define mp make_pair
//#define for(i,n) for(int i=0;i<n;i++)
#define F first
#define S second
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define N 1000000007
#define pq priority queue
#define pb push_back
#define pf push_front
#define mt make_tuple
#define prec(a) fixed<<setprecision(9)<<a
#define endl "\n"
#define fast_set s.max_load_factor(0.25);s.reserve(500);
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
const long double PI = (long double)(3.1415926535897932384626433832795);

int main() 
{
	fast;
	ll test,i,j,k,n;
	// taking input number of testcases
	cin>>test;
	while(test--)
	{
		ll a,b,c;
		// taking input numbers a, b, c
		cin>>a>>b>>c;
		// n is differnce of max and min
		n=max(a,b)-min(a,b);
		if(a>2*n||b>2*n||c>2*n)
		{
			// answer is -1
			cout<<-1<<endl;
		}
		else if(c<=n)
		{
			// add n if c less than n
			cout<<c+n<<endl;
		}
		else
		{
			cout<<c-n<<endl;
		}
	}
	return 0;
}