/*Given two array A[0….n-1] and B[0….m-1] of size n and m respectively, representing two numbers such that every element of arrays represent a digit.
For example, A[] = { 1, 2, 3} and B[] = { 2, 1, 4 } represent 123 and 214 respectively. The task is to find the sum of both the number. 
In above case, answer is 337. 
Examples : 

Input : n = 3, m = 3
        a[] = { 1, 2, 3 }
        b[] = { 2, 1, 4 }
Output : 337
123 + 214 = 337

Input : n = 4, m = 3
        a[] = { 9, 5, 4, 9 }
        b[] = { 2, 1, 4 }
Output : 9763*/
#include <iostream>
using namespace std;
int main()
{
  int n,m,a[10],b[10],size,diff=0;
    int sum[10]={ 0 };
    cout<<"\nenter size of 1st and 2nd arrays, n for a and m for b";
    cin>>n>>m;
    cout<<"\nenter elements of a";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"\nenter elements of b";
    for(int i=0;i<m;i++)
    cin>>b[i];
    if(n==m){
    cout<<"foo";
    for(int i=n;i>=0;i--)
    {sum[i]=(a[i]+b[i]);
    }
    size=n;
    }
    else
    {
        if(n>m)
        {
			diff=n-m;
            for(int i=n-1;i>=0;i--)
            {	
                if(i>=(n-m))
                sum[i]=a[i]+b[i-(n-m)];
				else
                sum[i]=a[i];
            }
        size=n;
        }
        else
        {
            	diff=m-n;
            for(int i=m-1;i>=0;i--)
            {	
                if(i>=(m-n))
                sum[i]=a[i-(n-m)]+b[i];
				else
                sum[i]=b[i];
            }
        size=m;
    }
}
	for(int i=size-1;i>=1;i--)
		{
			if(sum[i]>9)
				{
					sum[i]=sum[i]%10;
					sum[i-1]++;
				}
		}
    cout<<endl;
    for(int i=0;i<size;i++)
    cout<<sum[i];
}
