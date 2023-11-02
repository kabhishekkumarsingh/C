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

//shorting the array
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        int temp=0;
        if(a[j]<a[i]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}

//printing shorting array
for(int i=0;i<size;i++)
printf("%d ",a[i]);
    return 0;
}
