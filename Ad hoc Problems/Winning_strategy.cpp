#include<bits/stdc++.h>
using namespace std;

int win(int arr[],int n)
{
    bool check=true;
    int swap=0;
    if(n==1)
    {
        if(arr[0]!=1)
            check=false;
    }
    int i;
    for(i=n-1;i>=2;i--)
    {
        if(arr[i]==i+1)
            continue;
        else if(arr[i-1]==i+1)
        {
            int temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
            swap+=1;
        }
        else if(arr[i-2]==i+1)
        {
            arr[i-2]=arr[i-1];
            arr[i-1]=arr[i];
            arr[i]=i+1;
            swap+=2;
        }
        else{
            check=false;
        }
    }
    if(arr[1]==2&&arr[0]==1)
    {
        
    }
    else if(arr[0]==2 && arr[1]==1)
    {
        swap+=1;
        arr[i]=2;
        arr[i-1]=1;
    }
    else {
        check=false;
    }    
    
    if(check)
    {
        cout<<"YES"<<endl;
        cout<<swap;
    }
    else{
        cout<<"NO";
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    win(arr,n);
	return 0;
}
