#include <stdio.h>

int main(void){
    char initial = '\0';
    int age = 0;

    printf("Enter you initial: ");
    scanf("%c", &initial);
    printf("Enter you age: ");
    scanf("%d", &age);

    printf("The initial is %c\n", initial);
    printf("The age is %d\n", age);

    return 0;
}