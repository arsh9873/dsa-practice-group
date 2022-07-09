/*Write a code to find the square root of a given number upto 3 decimal places using recursion.*/
#include <bits/stdc++.h>
using namespace std;
int sum=0,diffc=0;
bool dec0=false;
float dd=0,dsum=0,ddiffc=0;
float decroot(int nondec,int num,int currd){
if(nondec==999)
return nondec;
dd=nondec+(currd*0.001);
dsum=dd*dd;
ddiffc=num-dsum;
if(ddiffc==0)
return currd;
if(ddiffc<0)
return currd-1;	
else
return decroot(nondec,num,currd+1);
}
int root(int num,int curr){
if(curr>=num/2)
return curr;
sum=curr*curr;
diffc=num-sum;
if(diffc==0){
dec0=true;
return curr;
}
if(diffc<0){
return curr-1;
}
else 
return root(num,curr+1);
}
int main(){
int num,curr=2,nondec;
float dec,currd=1;
cin>>num;
nondec=root(num,curr);
if(dec0==true){
cout<<nondec;
}
else{
dec=decroot(nondec,num,currd);
cout<<(dec*0.001)+nondec;
}
}
