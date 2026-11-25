#include <stdio.h>

int main(){
    // Declare variables for height, age, adult presence, medical clearance, VIP pass
    int height;
    int age;
    int hasAdult;         // 1 = yes, 0 = no
    int medicalClearance; // 1 = yes, 0 = no
    int hasVipPass;       // 1 = yes, 0 = no

    // Prompt for each value
    printf("Enter height (in inches): ");
    scanf("%d", &height);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Has adult? (1/0): ");
    scanf("%d", &hasAdult);
    printf("Has medical clearance? (1/0): ");
    scanf("%d", &medicalClearance);
    printf("Has VIP pass? (1/0): ");
    scanf("%d", &hasVipPass);

    // Compute eligibility using logical operators
    // Rule: (height >= 48) AND (age >= 12 OR hasAdult) AND (age <= 65 OR medicalClearance) OR hasVipPass
    int canRide = (height >= 48) &&
             (age >= 12 || hasAdult) &&
             (age <= 65 || medicalClearance) ||
             hasVipPass;
    // Check eligibility
    if (canRide){
      printf("You can ride!\n");
    }else{
      printf("Sorry, you cannot ride.\n");
    }

    return 0;
}