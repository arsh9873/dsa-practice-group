// Example program
#include <iostream>
#include <string>
using namespace std;
int triangle(int n){
    if(n==0)
    return 0;
    return n+triangle(n-1);
}
int tripyramid(int n){//1,4,10,20..
if(n==0)
return 0;
return triangle(n)+tripyramid(n-1);
}
int main()
{
int opt,num=0;
char ch;
do{
cout<<"\n1-triangular numbers \n-2 pyrimad triangular numbers";;
cin>>opt;
cout<<"enter the number in list";
cin>>num;
switch (opt){
    case 1:cout<<triangle(num);
            break;
    case 2:cout<<tripyramid(num);
            break;
    default:cout<<"enter valid choice";
            break;
}
cout<<"\ncontinue (y/n)";
cin>>ch;
}while(ch=='y');
}

