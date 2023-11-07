
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],str1[100],x=0;
    printf("Enter conform E-mail: ");
    scanf("%s", str);
    
     printf("Enter E-mail: ");
    scanf("%s", str1);
    
    int s=strlen(str);
    int s1=strlen(str1);
    
   
    
    for(int i=0;i<s;i++){
      if(str[i]!=str1[i]){ 
          x++;
          break;
    }
    } 
    
    if(x==0)
    printf("E-mail is corrcet");
    else
    printf("E-mail is not correct");
   
    return 0;
}
 
