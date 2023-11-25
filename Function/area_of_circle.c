
#include <stdio.h>

int area_circle(int a){
    return 3.14*a*a;
}
int main()
{
int r,area;
printf("Enter radis of circle: ");
scanf("%d",&r);
area=area_circle(r);
printf("area of circle = %d",area);

    return 0;
}
