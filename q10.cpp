
/*Write a recursive function to reverse a given string. The reversed value must be stored in the 
 * variable of the string and displayed accordingly.*/
#include <iostream>
#include <string>
using namespace std;
int count=0;
char temp[20];
void reverse(string &str,int size){
if(size==0){
str=temp;
return;
}
temp[count]=str[size-1];//olleh
count++;
reverse(str,size-1);
}
int main()
{
    string str,rev;
    cout<<"\nenter the string:";
    cin>>str;
	reverse(str,str.size());
	cout<<str;
}

