#include <stdio.h>

int main()
{
int a[5];
printf("Enter elements: ");
for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
    
}

for(int i=1;i<5;i++){
for(int j=1;j<=10;j++){
    printf("%d\n",a[i]*j);
} 

}


    return 0;
}
