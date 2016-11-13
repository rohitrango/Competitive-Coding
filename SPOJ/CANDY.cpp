using namespace std;
#include <bits/stdc++.h>
#define rep(i,a,n) for( i=a;i<n;i++)

int main() {
    ios_base::sync_with_stdio(false);
    
    int n,i,j,k,s=0;
    while(0==0)
    {
        s=0;
        cin>>n;
        if(n==-1)
        break;
        int arr[n];
        rep(i,0,n)
        {
            cin>>arr[i];
            s=s+arr[i];
        }
        if(s%n!=0)
        {
            cout<<"-1"<<"\n";
            continue;
            
        }
        int p=s/n;
        int ans=0;
        sort(arr,arr+n);
        k=n-1;
        rep(i,0,n)
        {
            int f=0;
            j=arr[i]-p;
            
            if(j<0)
            j=-j;
            int l=j;
            if(j!=0)
            {
            while(f==0)
            {
                
            if(arr[k]>=l+p)
            {
            arr[k]=arr[k]-l;
            f=1;
            }
            else{
                l=l-(arr[k]-p);
                arr[k]=p;
                k--;
                
            
            }
            if(k<0)
            f=1;
            }
            }
            else
            break;
           
            ans+=j;
            
        }
        cout<<ans<<"\n";
    }
    return 0;
        
        
    } 
