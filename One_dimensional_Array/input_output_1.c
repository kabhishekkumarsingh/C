#include <stdio.h>

int main()
{
int a[5];
printf("Enter elements: ");
for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
    
}
printf("Array elements are: ");
for(int i=0;i<5;i++){
    printf("%d\n",a[i]);
}
    return 0;
}
