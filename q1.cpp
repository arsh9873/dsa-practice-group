// Example program {1,2,3,4,5,5,6}={1,2,3,4,5,6,7},distinct and new one
//should be bigger than the other
#include <iostream>
#include <string>
using namespace std;
int main()
{
int a[7],pos[7],k=0;
for(int i=0;i<7;i++)
{
    cin>>a[i];
    pos[i]=-1;
}

for(int i=0;i<7;i++)
    {
        for(int j=i+1;j<7;j++)
            {   
            if(a[i]==a[j])
                {
                a[j]=a[j]+1;    
                }    
            }
       
    }
for(int i=0;i<7;i++)
{
cout<<"-"<<a[i];
}
}
