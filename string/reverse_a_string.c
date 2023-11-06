#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter your first name: ");
    scanf("%s", str);
    int s=strlen(str);
    for(int i=s-1;i>=0;i--){
      printf("%c",str[i]);  
    }
   
    return 0;
}
