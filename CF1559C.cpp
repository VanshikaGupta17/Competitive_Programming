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
		// taking input size of array
		cin>>n;
		int arr[n];
		// taking input array
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		if(arr[0]==1)
		{
			cout<<n+1<<" ";
			// increment every array element
			for(i=0;i<n;i++)
			{
				cout<<i+1<<" ";
			}
			cout<<endl;
		}
		else
		{
			for(i=0;i<n-1;i++)
			{
				// checking for two adjacent elements as 0 and 1
				if(arr[i]==0&&arr[i+1]==1)
				{
					break;
				}	
			}
			// last element is 1
			if(i==n-1&&arr[i]==1)
			{
				cout<<-1<<endl;
				continue;
			}
			j=0;
			while(j<=i)
			{
				cout<<j+1<<" ";
				j++;
			}
			cout<<n+1<<" ";
			j=i+1;
			while(j<n)
			{
				cout<<j+1<<" ";
				j++;
			}
			cout<<endl;
		}
	}
	return 0;
}