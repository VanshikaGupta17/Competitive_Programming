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
	int test,i,j,k,n,a,b;
	// input number of testcases
	cin>>test;
	while(test--)
	{
		string str;
		cin>>n>>a>>b;
		// input string
		cin>>str;
		int ans=0;
		if(b<0)
		{
			// maintain count of zeros and ones
			int zero=0,one=0;
			int last=-1;
			for(i=0;i<n;i++)
			{
				if(str[i]-'0'!=last)
				{
					// if current char in str is '0'
					if(str[i]-'0'==0)
					{
						// increment zero count
						zero++;
					}
					else
					{
						// increment one count
						one++;
					}
					//ans++;
				}
				last=str[i]-'0';
			}
			// calculating answer
			ans=n*a+(min(zero,one)+1)*b;
		}
		else
		{
			
			ans=n*a+n*b;
		}
		cout<<ans<<endl;
	}
	return 0;
}