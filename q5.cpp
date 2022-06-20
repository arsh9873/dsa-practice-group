/*move negative elements of the array to the front, order of both negative and positive
elements will remain same
ex;input:2 -9 10 12 5 -2 10 -4 output: -9 -2 -4 2 1 12 5 10
*/
#include <iostream>
using namespace std;
void order(){
int *ptr,*ptr2,size,counter=0;
cout<<"\nenter number of entries:";
cin>>size;
ptr = new int[size];
ptr2= new int[size];
cout<<"\nenter your array";
for(int i=0;i<size;i++)
cin>>ptr[i];
for(int i=0;i<size;i++)
	{
		if(ptr[i]<0)
		{
			ptr2[counter]=ptr[i];
			counter++;
		}
	}
for(int i=0;i<size;i++)
	{
		if(ptr[i]>0)
		{
			ptr2[counter]=ptr[i];
			counter++;
		}
	}	
cout<<endl;
for(int i=0;i<counter;i++)
cout<<" "<<ptr2[i];	
}
int main(){
	order();
}
