#include <stdio.h>
int gcd(int a,int b){
  
 if(a>=b){
     for(int i=b;i>=1;i--){
         if(a%i==0 && b%i==0)
         return i;
     }
 }
     
     else{
     for(int i=a;i>=0;i--){
         if(a%i==0 && b%i==0)
         return i;
     }
     }
 }


int main()
{
    int n,m,ans;
   printf("Enter two number to find GCD:");
   scanf("%d%d",&n,&m);
  ans= gcd(n,m);
  printf("GCD=%d",ans);

    return 0;
}
