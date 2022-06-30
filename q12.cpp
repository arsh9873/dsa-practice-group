// Example program
/*[11:24 am, 30/06/2022] +91 84476 71899: Input any number (positive) to start for Hailstone Sequence : 13 
Expected Output :

 The hailstone sequence starting at 13 is :                                                                   
 13  40  20  10  5  16  8  4  2 1                                                                             
 The length of the sequence is 10
 If   n   is     1     then the sequence ends.
  If   n   is   even then the next   n   of the sequence   = n/2
  If   n   is   odd   then the next   n   of the sequence   = (3 * n) + 1*/
#include <iostream>
#include <string>
using namespace std;
void hail(int n){
if(n<=1){
    cout<<n;
    return;
    }
else if(n<0){
    cout<<"invalid";
    }
else{
    cout<<n<<" ";
    if(n%2==0){
    hail(n/2);
    }
    else{
    hail((3*n) + 1);
    }
    }
}
int main()
{
int n;
cout<<"\nenter num:";
cin>>n;
hail(n);
}
