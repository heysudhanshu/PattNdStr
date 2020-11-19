#include<bits/stdc++.h>
using namespace std;
int main()

{
int i,j,k,l=1,n;
cin>>n;
for(i=n;i>=1;i--)
{
for(j=n;j>i;j--)
{
cout<<" ";
}
for(k=l;k<=n;k++)
{
cout<<k<<" ";
}
cout<<"\n";
l=l+1;
}
for(i=n;i>1;i--)
{
for(j=1;j<i-1;j++)
{
cout<<" ";
}
for(k=i-1;k<=n;k++)
{
cout<<k<<" ";
}
if(i!=1)
cout<<"\n";
}
}
