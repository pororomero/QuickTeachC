#include <stdio.h>
#include <stdbool.h>
int main(void){

    bool isRaining = true;
    int busAvailable = 1;

    if (busAvailable)
        printf("There is a bus available.\n");

    if (isRaining)
        printf("It is raining.\n");
    else 
        printf("It is not raining.\n");

    printf("Decision: ");

    if (!isRaining && busAvailable){
        printf("Go work work work.\n");
    } else if (isRaining && busAvailable){
        prinf("Go work, bring umbrella.\n");
    } else {
        printf("Netflix and chill.");
    }

    



    return 0;
}