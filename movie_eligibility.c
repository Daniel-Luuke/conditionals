#include <stdio.h>

int main() {
    // Declare variables for age, parental consent, and weekend status
    int age;
    int hasParentalConsent; // 1 = yes, 0 = no
    int isWeekend;          // 1 = yes, 0 = no

    // Prompt for age
    printf("Enter age: ");
    scanf("%d", &age);

    // Prompt for parental consent
    printf("Has parental consent? (1 for yes, 0 for no): ");
    scanf("%d", &hasParentalConsent);

    // Prompt for weekend status
    printf("Is it weekend? (1 for yes, 0 for no): ");
    scanf("%d", &isWeekend);

    // Compute eligibility using logical operators
    // Condition: adult (>=18) OR (teen >=13 AND consent) OR (weekend AND age>=10)
    int canWatchMovie = (age >= 18) ||
                (age >= 13 && hasParentalConsent) ||
                (isWeekend && age >= 10);

    // Check eligibility
    if (canWatchMovie){
        printf("You can watch the movie!\n");
    }else{
        printf("Sorry, you cannot watch this movie.\n");
    }

    // Compute discount eligibility
    // Condition: senior (>=65) OR child (<=12) OR (weekend AND student age <=18)
    int eligibleForDiscount = (age >= 65) ||
                    (age <= 12) ||
                    (isWeekend && age <= 18);

    // Check discount
    if (eligibleForDiscount){
        printf("You qualify for a discount!\n");
    }
    
    return 0;
}