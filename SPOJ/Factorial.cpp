using namespace std;
#include <bits/stdc++.h>
int main() {
    ios_base::sync_with_stdio(false);
    int m,n,i,j,k,p,t;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
    i=5;
    while(n/i!=0)
    {
        p=p+n/i;
        i=i*5;
    }
    cout<<p<<"\n";
        
    }
    
    return 0;
} 
