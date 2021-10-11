#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const int INF = 0x3f3f3f3f;
const int MAXN= 2007;

inline int read()
{
    int x=0,f=1;char ch=getchar();
    while(ch<48||ch>57) {if(ch=='-') f=-1;ch=getchar();}
    while(ch>=48&&ch<=57)   x=x*10+ch-48,ch=getchar();
    return x*f;
}

int n,a[6][MAXN],f1,f2,f3,f4,f5;

int solve()
{
    f1=f2=f3=f4=f5=0;
    for(int i=1;i<=n;i++)
    {
        f1|=a[1][i];
        f2|=a[2][i];
        f3|=a[3][i];
        f4|=a[4][i];
        f5|=a[5][i];
    }
    if(f1+f2+f3+f4+f5<2)    return puts("NO"),0;
    int mni=INF,mxi=0,mnj=INF,mxj=0;
    for(int i=1;i<5;i++)
    {
        for(int j=i+1;j<=5;j++)
        {
            if(j==i)    continue;
            mni=0,mxi=0,mnj=0,mxj=0;
            int flg=0;
            for(int k=1;k<=n;k++)
            {
                if(a[i][k]&&a[j][k]) mxi++,mxj++;
                else if(a[i][k]) mni++,mxi++;
                else if(a[j][k]) mnj++,mxj++;
                else if((!a[i][k])&&(!a[j][k]))  flg=1;
            }
            //printf("i:%d j:%d mxi:%d mni:%d mxj:%d mnj:%d\n",i,j,mxi,mni,mxj,mnj);
            if(!flg&&(mxj>=mni&&mnj<=mxi)) return puts("YES"),1;
        }
    }
    return puts("NO"),0;
}

signed main()
{
    int t=read();
    while(t--)
    {
        n=read();
        for(int i=1;i<=n;i++)
            for(int j=1;j<=5;j++)
                a[j][i]=read();
        solve();
    }
    return 0;
}
