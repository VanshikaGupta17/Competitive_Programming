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
	int test,i,j,k,n;
	// taking input number of testcases
	cin>>test;
	while(test--)
	{
		// taking input n
		cin>>n;
		i=0;
		int elem=1;
		while(i<n)
		{
			// if element is divisble by 3 
			// or residue is 3 modulo 10
			if(elem%3==0||elem%10==3)
			{

			}
			else
			{
				// incrementing i
				i++;
			}
			if(i==n)
			{
				// reached the target
				break;
			}
			elem++;
		}
		cout<<elem<<endl;
	}
	return 0;
}