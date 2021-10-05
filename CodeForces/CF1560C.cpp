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
	cin>>test;
	while(test--)
	{
		cin>>k;
		// taking upper bound of square root(k)
		ll a=ceil(sqrt(k));
		ll b=a-1;
		i=a*a-b*b;
		// taking upper bound of i/2
		i=ceil(i/2.00);
		// if k is less than square(b) plus i
		if(k<=b*b+i)
		{
			cout<<k-(b*b)<<" "<<a<<endl;
		}
		else
		{
			cout<<a<<" "<<(a*a)-k+1<<endl;
		}
	}
	return 0;
}