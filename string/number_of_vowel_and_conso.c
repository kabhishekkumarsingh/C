
#include <stdio.h>
#include<string.h>


int main()
{
    char a[10],b=0;
    printf("Enter string: ");
    scanf("%s",a);
    
    for(int i=0;i<strlen(a);i++){
      if(a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i'|| a[i]=='I' || a[i]=='o'|| a[i]=='O'|| a[i]=='u'||a[i]=='U')
      b++;
    }
    printf("number of vowel is %d",b);

    return 0;
}
