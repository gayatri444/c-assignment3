#include<stdio.h>
int main()
{
    int choice;
    float r,result; 
    printf("enter radius :");
    scanf("%f",&r);
    printf("Enter your choice : 1 : Area of circle  2.circumference  of circle 3 .Area of sphere 4 volume of sphere");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
        result=3.14 * r * r;
        printf("Area :%.2f",result);
        break;

         case 2:
        result = 2 * 3.14 * r * r;
        printf("Circumference:%.2f",result);
        break;

        case 3:
        result = 4 * 3.14 * r * r;
        printf("Sphere Area:%.2f",result);
        break;

        case 4:
        result = (4.0/3) * 3.14 * r * r * r;
        printf("Volume:%.2f",result);
        break;

        default:
        printf("INVALID !!");
        break;
    }
    return 0;
}