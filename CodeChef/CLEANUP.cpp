#include <iostream>
using namespace std;
 
int main()
{
    int T,m,n;
    
    cin >>T;
   while(T--)
    {
        cin>>n>>m;
        int arr[n];
        for(int k=0;k<n;k++)
        arr[k]=k+1;
     
        
        int A[m];
        for(int p=0;p<m;p++)
        cin>>A[p];
    int left[n-m];
    int y=0,u=0;
        for(int j=0;j<n;j++)
        {
            for(int l=0;l<m;l++)
            {
                if(arr[j]==A[l])
                y=1;
            }
            if(y==0)
            {
                left[u]=arr[j];
                u++;
            }
            y=0;
        }
        
       
   int arr1[n];
        int arr2[n];
        int n1=0,n2=0;
        for(int r=0;r<n-m;r++)
        {
             arr1[n1]=left[r];
                n1++;
                r++;
                if(r<n-m)
                {
                arr2[n2]=left[r];
                n2++;
                }
                
            }
        
        for(int t1=0;t1<n1;t1++)
            cout<<arr1[t1]<<" ";
        
        cout << endl;
        for(int t2=0;t2<n2;t2++)
        cout<<arr2[t2]<<" ";
    
        cout<<endl;
        
        
    }           
            
  return 0;  
}  
