#include <stdio.h>
#include<string.h>


int main()
{
    char a[10];
    char c;
    int b=0;
    printf("enter charcter which you want to search: ");
    scanf("%c",&c);
    
    printf("Enter string: ");
    scanf("%s",a);
    
    
    for(int i=0;i<strlen(a);i++){
    
    if(a[i]==c){
        printf("charcter found");
        b++;
    }
    }
   
   if(b==0)
   printf("charcter is not found");
    return 0;
}
