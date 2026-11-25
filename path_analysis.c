#include <stdio.h>

int main(){
    // Declare and initialise variables
    int x = 10, y = 5;

    // Outer condition
    if (x > 0){
        // x is positive
        if (y > 0){
            // Both x and y are positive
            printf("Path A: Both positive\n");
        }else{
            // x positive, y non-positive
            printf("Path B: x positive, y non-positive\n");
        }
    }else{
        // x is non-positive
        if (y > 0){
            // x non-positive, y positive
            printf("Path C: x non-positive, y positive\n");
        }else{
            // Both non-positive
            printf("Path D: Both non-positive\n");
        }
    }

    return 0;
}