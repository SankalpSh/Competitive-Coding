#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int i,p;
        cin >> i >> p;
        cout<<(i+p)%12<<endl;
    }
	return 0;
}
