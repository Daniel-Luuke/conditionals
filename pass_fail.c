// Include the standard input/output library for printf and scanf
#include <stdio.h>

// The main function - where the program starts
int main(){
    // Declare an integer variable to store the student's score
    int score;

    // Display a prompt asking the user to enter a score
    // printf is the C equivalent of cout
    printf("Enter score: ");

    // Read the user's input and store it in 'score'
    // scanf requires the address-of operator (&) for integers
    // %d is the format specifier for integers
    scanf("%d", &score);

    // Check if the score is 60 or above
    if (score >= 60){
        // This block runs if the condition is true
        // printf displays the success message
        printf("You passed!\n");
    }
    else{
        // This block runs if the condition is false
        printf("You failed. Try again!\n");
    }
    
    // Return 0 to signal successful program completion
    return 0;
}