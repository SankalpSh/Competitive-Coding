#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,y;
    cin>>n>>x>>y;
    long long int str[n];
    string switchh;
    cin>>switchh;
    for(long long int i=0;i<n;i++)
    {
        str[i]=switchh[i]-'0';
    }
    int invt=0;
    if(str[0]==0)
        invt++;
    for(long long int i=0;i<n-1;i++)
    {
        if(str[i]==1&& str[i+1]==0) 
            invt++;
    }
    if(invt==0)
        cout<<0;
    else{
    invt--;
    long long int getmin=min(x,y);
    if(invt>0)
        cout<<getmin*invt+y;
    else 
        cout<<invt;
    }
	return 0;
}
