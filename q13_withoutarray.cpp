//4 distinct numbers in increasing order, cant be stored in array, print all permutations
#include <bits/stdc++.h>
using namespace std;
void p(int a,int b,int c,int d,int cn){
    if(cn==24){
        return;
    }
    cout<<a<<b<<c<<d;
    cn++;
    cout<<endl;
    if(b>c&&c>d){
        if(a<d){
            p(d,a,c,b,cn);
        }
        else if(a>d&&c>a){
            p(c,a,d,b,cn);
            
        }
        else if(a>d&&c<a){
            p(b,d,c,a,cn);
        }
        
    }
    else if(b<c&&c<d){
        p(a,b,d,c,cn);
    }
    else if(b<c&&c>d&&d>b){
        p(a,d,b,c,cn);
    }
    else if(b>c&&d>b){
        p(a,b,d,c,cn);
    }
    else if(b<c&&c>d&&d<b){
        p(a,c,d,b,cn);
    }
    else if(b>c&&c<d){
        p(a,b,d,c,cn);
    }
   
    
}
int main(){
    int a,b,c,d;
    cin >> a>> b>> c>>d;
    int count=0;
    p(a,b,c,d,count);
}
