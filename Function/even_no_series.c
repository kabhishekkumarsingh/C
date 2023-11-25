#include <stdio.h>
void even_No(int a){
   for(int i=1;i<=a;i++){
       if(i%2==0)
       printf("%d ",i);
   }
}

int main()
{
    int n;
   printf("Enter a number to print even no series:");
   scanf("%d",&n);
   even_No(n);

    return 0;
}
