#include <stdio.h>
#include<string.h>


int main()
{
    char a[10],b[10];
    printf("Enter string: ");
    scanf("%s",a);
    
    for(int i=0;i<strlen(a);i++){
        b[i]=a[i];
    }
    for(int i=0;i<strlen(b);i++)
    printf("%c",b[i]);
    

    return 0;
}
