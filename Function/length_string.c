#include <stdio.h>

int length_of_string(char s[]){
    int i;
     for (i = 0; s[i] != '\0'; ++i);
    return i;

}

int main()
{
    int size_of_string;
char a[]="abhishekkumarsingh";
size_of_string=length_of_string(a);
printf("size of string is %d ",size_of_string);
    return 0;
}
