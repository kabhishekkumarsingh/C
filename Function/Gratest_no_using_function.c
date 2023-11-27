#include <stdio.h>

void arry_gratest(int ar[],int n){
    int max=ar[0];
    for(int i=0;i<n;i++){
       if(max<ar[i]){
           max=ar[i];
       }
    }
    printf("Gratest element of array is  =%d",max);
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

arry_gratest(arr,n);
    return 0;
}
