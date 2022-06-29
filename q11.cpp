/*ladder problem :- given n number of steps on a ladder/stair, 
 * and given k which is the maximum number of steps one can take, 
 * count the total number of ways to climb the stairs
 * 
*/
//iterative approach
#include <iostream>
using namespace std;
int countingways(int n,int k){
if(n<=1)
return 1;
int sumtillthen=0;
for(int i=1;i<=k&&i<=n;i++){
	sumtillthen+=countingways(n-i,k);
	}
return sumtillthen;
}
int main(){
int n,k,count=0;
cout<<"\nenter stairs and k";
cin>>n>>k;
cout<<"\nnumber of ways:"<<countingways(n,k);
}
