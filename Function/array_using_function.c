#include <stdio.h>

void arr1(int ar[],int n){
    int a=0;
    printf("array element is ");
    for(int i=0;i<n;i++){
        a+=ar[i];
        printf("%d ",ar[i]);
    }
    printf("sum of array =%d",a);
}

int main()
{
int arr[20],n;
printf("Enter size of array:");
scanf("%d",&n);
printf("Enter array element:");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

arr1(arr,n);
    return 0;
}
