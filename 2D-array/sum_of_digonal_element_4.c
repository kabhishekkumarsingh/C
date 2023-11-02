#include <stdio.h>

int main()
{
int a[3][3],sum=0;
printf("Enter matrix element: ");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}
    printf("matrix\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("Digonal element:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j || i+j==3-1){
            printf("%d\n",a[i][j]);
            sum=sum+a[i][j];
            }
        }
    }
    printf("sum of digonal element = %d",sum);
     
    
    
  return 0;
}
