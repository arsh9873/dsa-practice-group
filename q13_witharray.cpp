#include <bits/stdc++.h>
using namespace std;
int lastcount=3;
void swap(int *ord,int n1,int n2){
int temp;
temp=ord[n1];
ord[n1]=ord[n2];
ord[n2]=temp;    
}
void permute(int a,int b,int c,int d,int *ord,int count){
if(count==24)
return;
count++;
cout<<endl;
for(int i=0;i<4;i++){
    cout<<ord[i];
}
if(count%2!=0 && count%6!=0){
swap(ord,2,3);
}
else if(count%6==0){
    sort(ord,ord+4);
    swap(ord,0,lastcount);
    lastcount--;
}
else if(count%2==0){
    swap(ord,1,2);
}
permute(a,b,c,d,ord,count);
}
int main(){
int a,b,c,d,ord[4],count=0;
cout<<"\nenter your numbers";
cin>>a>>b>>c>>d;
ord[0]=a;
ord[1]=b;
ord[2]=c;
ord[3]=d;
if(a<b && b<c && c<d){
    permute(a,b,c,d,ord,count);
}
else cout<<"wrong order";
}
