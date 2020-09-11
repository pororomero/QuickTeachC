#include <stdio.h>
#include <stdbool.h>

int main(void){
    // data types
    int myAge = 19;
    char initial = 'H';
    float eFloat = 2.71828;
    const double PI =  3.1415653587973;
    bool isCool = false;


    // outputting to console
    printf("My age is %d\n", myAge);
    printf("My initial is %c\n", initial);
    printf("The value of e is %f\n", eFloat);
    printf("The value of PI is %.13f\n", PI);
    printf("I am cool - %d\n", isCool);



    return 0;
}