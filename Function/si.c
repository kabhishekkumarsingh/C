
#include <stdio.h>
int si1(float a, float b, float c){
    return (a*b*c)/100;
}
int main()
{
float p,r,t,si;
printf("Enter p r,t: ");
scanf("%f%f%f",&p,&r,&t);
si=si1(p,r,t);
printf("si=%f",si);

    return 0;
}
