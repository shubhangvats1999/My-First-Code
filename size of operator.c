// Here the code starts.
#include<stdio.h>
int main() {
    int b=10;
    float c=10.0;
    double d=10.15;
    char e='A';

    // sizeof evaluates the size of a variable
    printf("Size of int: %ld bytes\n", sizeof(b));
    printf("Size of float: %ld bytes\n", sizeof(c));
    printf("Size of double: %ld bytes\n", sizeof(d));
    printf("Size of char: %ld byte\n", sizeof(e));
    
    return 0;
}
// Here the code ends.
