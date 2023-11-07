
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],str1[20],x=0;
    printf("Enter conform password: ");
    scanf("%s", str);
    
     printf("Enter password: ");
    scanf("%s", str1);
    
    int s=strlen(str);
    int s1=strlen(str1);
    
    if(s!=s1)
    printf("password is not corrcet.");
    else{
    
    for(int i=0;i<s;i++){
      if(str[i]!=str1[i]){ 
          x++;
          break;
    }
    } 
    }
    if(x==0)
    printf("password is corrcet");
    else
    printf("password is not correct");
   
    return 0;
}
