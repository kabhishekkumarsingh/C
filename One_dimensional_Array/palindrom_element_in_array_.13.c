#include <stdio.h>

int main()
{
int a[20],size;
printf("Enter size of the array: ");
scanf("%d",&size);
printf("Enter the array element: ");
for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
}
//print array
printf("array\n");
for(int i=0;i<size;i++)
printf("%d ",a[i]);
//calculating palindrom number
for(int i=0;i<size;i++){
    int n=a[i],t=0;
    while(a[i]>0){
        int r=a[i]%10;
        t=t*10+r;
        a[i]=a[i]/10;
    }
    if(t==n)
    printf("\npalindrom number %d",n);
    
}


    return 0;
}
