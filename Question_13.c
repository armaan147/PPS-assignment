//Write a C program to print day of week name using switch case. 
#include <stdio.h>
int main(){
    int a;
    printf("Enter day number: ");
    scanf("%d",&a);
    printf("Day: ");
    switch (a){
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Doesn't exist");
            break;
    }
    return 0;
}