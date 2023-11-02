#include <stdio.h>

int main()
{
int a[5],s,k=0;
printf("Enter elements: ");
for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
    
}
printf("what you want to search:");
scanf("%d",&s);

for(int i=1;i<5;i++){
   if(a[i]==s){
       a[i]=8;
       k++;
   }

}

printf("new array after number replace");
for(int i=0;i<5;i++){
    printf("%d\n",a[i]);
}
    return 0;
}
