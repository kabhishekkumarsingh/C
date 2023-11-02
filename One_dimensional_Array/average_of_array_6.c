#include <stdio.h>

int main()
{
float a[5],s=0;
printf("Enter elements: ");
for(int i=0;i<5;i++){
    scanf("%f",&a[i]);
    
}

for(int i=1;i<5;i++){
   s=s+a[i];

}
printf("Average is %f",s/5);
    return 0;
}
