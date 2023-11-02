#include <stdio.h>

int main()
{
float a[5],s,k=0;
printf("Enter elements: ");
for(int i=0;i<5;i++){
    scanf("%f",&a[i]);
    
}
printf("what you want to search:");
scanf("%d",&s);
for(int i=1;i<5;i++){
   if(a[i]=s){
       k++;
       printf("Number is found");
   }

}
if(k==0)
printf("Number is not found");
    return 0;
}
