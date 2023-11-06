#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],str1[20],x[40];
    int a; 
    printf("Enter your first name: ");
    scanf("%s", str);
    
     printf("Enter your first name: ");
    scanf("%s", str1);
    
     a=strlen(str)+strlen(str1);
    
   
    
    for(int i=0,j=0;i<a;i++){
      if(i<strlen(str)){
          x[i]=str[i];
      }
      else
      {
          x[i]=str1[j];
          j++;
      }
    
    } 
    for(int i=0;i<strlen(x);i++)
    printf("%c",x[i]);
    
   
    return 0;
}
