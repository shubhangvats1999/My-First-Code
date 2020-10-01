#include <stdio.h>
int main() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if((num < 0.0)||(num==0.0))
    {
            printf("You entered 0. or negative number");
   
    } 
    else
    {
        printf("You entered a positive number.");
    }
    return 0;
}
