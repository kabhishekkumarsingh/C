#include <stdio.h>

int main()
{
int a[5],sum=0,g;
printf("Enter elements: ");
for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
    
}
g=a[0];
for(int i=1;i<5;i++){
    if(a[i]>g)
    g=a[i];
}
printf("gratest elemt is  = %d",g);
    return 0;
}
