#include <stdio.h>

int main()
{
int a[3][3];
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
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           if(j<i){
               a[i][j]=0;
           }
        }
    }
printf("Lower triangle matrix\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    
  return 0;
}
