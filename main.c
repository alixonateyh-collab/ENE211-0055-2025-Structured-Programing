#include <stdio.h>
#include <stdlib.h>

int main()
{  printf("~~Welcome to the calc~~\n");
   printf("~~It deals with area of a circle~~\n");
    //variable
   double area;
   const double Pi=3.142;
    double r;
    //request radius
    printf("~~Provide radius~~\n");
    scanf("%lf",&r);
    area=Pi*r*r;
    printf("The area is%.2lf",area);

    return 0;



}
