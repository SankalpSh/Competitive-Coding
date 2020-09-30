#include<bits/stdc++.h>
using namespace std;

void solve(int arr[],int n,int k,int l)
{
    int max_val=arr[0];
    int min_val=arr[0];
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        max_val=max(arr[i],max_val);
        min_val=min(arr[i],min_val);
    }
    for(int z=min_val;z<=max_val;z++)
    {
        int inc=0,dec=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>z)
                dec+=arr[i]-z;
            else if(arr[i]<z)
                inc+=z-arr[i];
        }
        if(dec>inc)
            continue;
        int res=dec*k+(inc-dec)*l;
        ans=min(ans,res);
    }
    cout<<ans;
}

int main() {
    int n,k,l;
    cin>>n>>k>>l;
    int arr[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    solve(arr,n,k,l);
    return 0;
}
