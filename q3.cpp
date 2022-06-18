/*
A linear array of length N, consists of three different positive numbers appearing randomly. 
* The goal is to find and print the frequency of each number separately as shown in the examples.
eg 1: arr = {1, 8, 1, 1, 8, 2, ,1, 8, 2} 
output-> n(1) = 4, n(8) = 3, n(2) = 2

eg 2: arr = {10, 2, 4, 4, 4, 2, 10, 4, 2} 
output-> n(10) = 2, n(2) = 3, n(4) = 4

eg 3: arr = {4, 7, 4, 7, 7, 7, 9, 4, 7}
output-> n(4) = 3, n(7) = 5, n(9) = 1
only 3 unique ones.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void printuniq(){
int num,freq=0,k=0,occur[3]={0};
cout<<"\nenter number of entries";
cin>>num;
vector<int> arr,arr2,uniq;
int sample;
for(int i=0;i<num;i++){
cin>>sample;
arr.push_back(sample);
arr2.push_back(sample);
}
sort(arr2.begin(),arr2.end());
sort(arr.begin(),arr.end());
vector<int>::iterator iter;
vector<int>::iterator ip;
ip=std::unique(arr2.begin(),arr2.begin() + num);
arr2.resize(std::distance(arr2.begin(),ip));
int counter=0;
for(ip=arr2.begin();ip!=arr2.end();++ip)
{	for(iter = arr.begin(); iter!=arr.end();++iter)
		{
			if(*ip==*iter)
				{
				occur[counter]++;	
				}
		}
	counter++;	
} cout<<endl;
counter=0;
 for (ip = arr2.begin(); ip != arr2.end(); ++ip,++counter) {
        cout<<"number of occurences of "<<*ip<<"="<<occur[counter];
		cout<<endl;
    }

}
int main()
{
    printuniq();
}
