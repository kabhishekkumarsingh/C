
#include <stdio.h>

int main()
{
int a[3][3];
printf("Enter array element");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}

printf("boundery of array\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
       if(i==0 || j==0 || i==2 || j==2){
           printf("%d ",a[i][j]);
       }
       else printf(" ");
    }
    printf("\n");
}
    return 0;
}
