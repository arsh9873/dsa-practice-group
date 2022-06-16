// Example program {1,2,3,4,5,5,6}={1,2,3,4,5,6,7},distinct and new one
//should be bigger than the other
#include <iostream>
using namespace std;
struct arr{
int value=0;
int pos=-1;
}a[20];
int main()
{
int size;
cout<<"\nenter the number of your entries";
cin>>size;
cout<<"\nenter the elements";
for(int i=0;i<size;i++)
{
cin>>a[i].value;
a[i].pos=i;
}
for(int i=0;i<size;i++)
	for(int j=i+1;j<size;j++)
		{	int temp,temp2;;
			if(a[i].value>a[j].value)
				{
				temp=a[j].value;
				temp2=a[j].pos;
				a[j].value=a[i].value;	
				a[j].pos=a[i].pos;
				a[i].value=temp;
				a[i].pos=temp2;
				}
			}
for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
			{
			if(a[i].value==a[j].value)
			a[j].value++;
			}
		}
for(int i=0;i<size;i++)
cout<<"-"<<a[a[a[i].pos].pos].value;		

}

