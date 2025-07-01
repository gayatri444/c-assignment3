#include<stdio.h>
int main()
{
    int day;
    printf("Enter single digit between 1 to 7 :");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("mon");
        break;
        case 2:
        printf("tues");
        break;
         case 3:
        printf("wed");
        break;
         case 4:
        printf("thurs");
        break;
         case 5:
        printf("friday");
        break;
         case 6:
        printf("saturday");
        break;
         case 7:
        printf("sunday");
        break;
        default:
        printf("invalid, please enter a valid digit !!");
        break;

    
    
    
    }
    return 0;
}