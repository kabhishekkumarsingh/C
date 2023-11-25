#include <stdio.h>

float f_to_c(float a){
    return (a-32)*5/9;
}
int main()
{
float f,c;
printf("Enter tempratur in F: ");
scanf("%f",&f);
c=f_to_c(f);
printf("Celcious = %f",c);

    return 0;
}
