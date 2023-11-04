
#include <stdio.h>

int main()
{
int a[5],b[5];
printf("Enter array element: ");
for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
}
//copy arry a element to array b
for(int i=4;i>=0;i--){
    b[i]=a[i];
}

//printing array b after copy
for(int i=0;i<5;i++){
    printf("%d ",b[i]);
}

    return 0;
}
