#include <stdio.h>
int p(int a,int b){
    int ans=1;
   for(int i=1;i<=b;i++){
       ans=ans*a;
   }
   return ans;
}

int main()
{
    int n,m,po;
   printf("Enter a number to fine n to the power m:");
   scanf("%d%d",&n,&m);
  po= p(n,m);
  printf("power of n the power m is %d",po);

    return 0;
}
