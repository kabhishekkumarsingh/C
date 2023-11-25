
#include <stdio.h>
void prime(int a){
    int f=0;
   for(int i=2;i<=a/2;i++){
       if(a%i==0){
           f++;
           break;
       }
       
   }
   if(f==0)
   printf("prime number");
   else
   printf("not a number");
}

int main()
{
    int n;
   printf("Enter a number to check prime or not:");
   scanf("%d",&n);
   prime(n);

    return 0;
}
