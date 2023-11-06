#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],x=0;
    printf("Enter your first name: ");
    scanf("%s", str);
    int s=strlen(str);
    for(int j=0,i=s-1;j<s,i>=0;j++,i--){
      if(str[i]!=str[j]){ 
          x++;
          break;
    }
        
    }
    if(x==0)
    printf("palindrom string");
    else
    printf("not a palindrom string");
   
    return 0;
}
