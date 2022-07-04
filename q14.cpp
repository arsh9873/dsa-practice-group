/*Write a recursive function to shift all the x's present in the string to the end. 
For ex:
String : "aabxxsdexx"
Modified string: "aabsdexxxx"
The order of the string is not required to be maintained*/
#include <iostream>
#include <string>
using namespace std;
void swap(string& s,int n1,int n2){
    char temp;
    temp=s[n1];
    s[n1]=s[n2];
    s[n2]=temp;
}
string swapx(string& s,int len,int count){
    if(count==len)
    return s;
    if(s[count]=='x'){
        for(int i=count;i<len;i++){
            if(s[i]!='x'){
                swap(s,count,i);
            }
        }
    }
    return swapx(s,len,count+1);
}
int main()
{   
    string s;
    int count=0;
    cout<<"\nenter string";
    cin>>s;
  
    cout<<swapx(s,s.length(),count);
}
