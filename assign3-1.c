//Accept a single digit from the user and display it in words. For example, if digit entered is 9, display Nine.
#include<stdio.h>
int main(){
    int digit;
    printf("Enter A Single Digit (0-9):");
    scanf("%d",&digit);
    switch(digit)
    {
        case 0 :printf("zero\n");
        break;

         case 1 :printf("one\n");
        break;
         case 2 :printf("two\n");
        break;
         case 3 :printf("three\n");
        break;
         case 4 :printf("four\n");
        break;
         case 5 :printf("five\n");
        break;
         case 6 :printf("six\n");
        break;
         case 7 :printf("seven\n");
        break;
         case 8 :printf("eight\n");
        break;
         case 9 :printf("nine\n");
        break;
        default :printf("invalid input ! please enter a digit between 0 and 9.\n");
    

    }
    return 0;
}