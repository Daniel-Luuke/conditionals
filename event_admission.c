#include <stdio.h>

int main(){
    // Declare variables: age (integer) and hasTicket (integer flag)
    int age;
    int hasTicket; // We use 1 for yes, 0 for no

    // Prompt for age
    printf("Enter age: ");
    scanf("%d", &age);

    // Prompt for ticket status
    printf("Has ticket? (1 for yes, 0 for no): ");
    scanf("%d", &hasTicket);

    // Outer condition: check if age is 18 or above
    if (age >= 18){

        // Adult block
        printf("Adult verified.\n");

        // Inner condition: check if the person has a ticket
        if (hasTicket){
            printf("Welcome to the event!\n");
        }else{
            printf("Please purchase a ticket at the door.\n");
        }
    }else{
        // Minor block
        printf("Minor detected.\n");
        
        // Inner condition: check if age is 12 or above
        if (age >= 12){
            printf("Teenager - needs guardian signature.\n");
        }else{
            printf("Child - must be accompanied by adult.\n");
        }
    }
    return 0;
}