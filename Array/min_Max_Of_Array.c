#include<stdio.h>
int main()
{
int arr[5];
printf("Enter array five element:");
for(int i=0;i<5;i++)
scanf("%d",&arr[i]);
int max=arr[0];
int min=arr[0];
for(int i=0;i<5;i++){
if(arr[i]>max)
max=arr[i];
if(arr[i]<min)
min=arr[i];

}
printf("min element of array is= %d\nmax element is %d",min,max);

    return 0;
}
