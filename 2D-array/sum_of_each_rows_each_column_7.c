#include <stdio.h>

int main()
{
int a[3][3],s=0;
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
    
        printf("\nsum of each row\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){

               s=s+a[i][j];
        }
        printf("sum of %d row = %d",i,s);
        s=0;
        
        printf("\n");
    }
    
    printf("\nsum of each column\n");
    for(int j=0;j<3;j++){
        for(int i=0;i<3;i++){

               s=s+a[i][j];
        }
        printf("sum of %d column = %d",j,s);
        s=0;
        
        printf("\n");
    }
    
    
   

    
  return 0;
}
