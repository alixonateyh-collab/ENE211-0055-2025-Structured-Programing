include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{#
   printf("~~Welcome~~\n");
   printf("~to my calculator~\n");
   //variable
   double a,b;
   char choice;
   char op;
    do {printf("~~what do you want to calculate?~~\n");
    //request for a and b
   printf("enter value a:\n");
   scanf("%lf" , &a);
   printf("enter op(+,-,*,/,&)");
   scanf(" %c" , &op);
   printf("enter value: b\n");
   scanf("%lf" , &b);
   //my existing if-else logic runs here ...
   if (op== '+'){
    // perform addition
    printf("result: %.2lf\n", a+b);
   }else if(op== '-'){
   //perform subtraction
   printf("result: %.2lf\n", a-b);
   }else if(op =='%')
   if(b!=0){
        //perform modulus
        printf("result: %.2lf\n", fmod(a,b));
   } else{
        printf("Error: Division by zero is not allowed!\n");
   }else if(op== '*'){
   //perform multiplication
   printf("result: %.2lf\n", a*b);
   }else if(op== '/')
       if(b!=0){
   //perform division
   printf("result: %.2lf\n", a/b);
  } else{
    printf("Error: Division by zero is not allowed!\n");
  }
    else {
       printf("Invalid operator\n");
    }
       //Ask the user if they want to calculate again
       printf("\n do you want to calculate again? (yes/no):");
       scanf(" %c", &choice);



}while(choice=='y' ||choice == 'Y');

  return 0;
    }




