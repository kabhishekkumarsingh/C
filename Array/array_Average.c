#include<stdio.h>
int main()
{
int arr[5],sum=0;
printf("Enter array five element:");
for(int i=0;i<5;i++)
scanf("%d",&arr[i]);
for(int i=0;i<5;i++){
    sum=sum+arr[i];
}
printf("Average of array is %d",sum/5);

    return 0;
}
