#include <iostream>
using namespace std;

int main(){

    //Declare variables
    int age;
    bool hasTicket;
    bool isMember;
    bool isBanned;
    bool hasGuardian;

    //Get user input
    cout<< "Enter age: ";
    cin >> age;
    cout << "Do you have a ticket? (1 for yes, 0 for no): ";
    cin >> hasTicket;
    cout << "Are you a member? (1 for yes, 0 for no): ";
    cin >> isMember;
    cout << "Are you banned? (1 for yes, 0 for no): ";
    cin >> isBanned;
    cout << "Are you accompanied by a parent/guardian? (1 for yes, 0 for no): ";
    cin >> hasGuardian;

    //Apply logical operators
    //Eligible if: age >= 18  AND has a ticket AND NOT banned
    // OR: is a member AND NOT banned
    // new condition: if person is <16, they need a parent/guardian to enter, regardless of other conditions
    bool canEnter = (age >= 18 && hasTicket && !isBanned) ||
                     (isMember && !isBanned) ||
                     (age < 16 && hasGuardian && !isBanned && hasTicket);

    if (canEnter){
        cout << "You can enter the event!" << endl;
    } else {
        cout << "Sorry, you cannot enter." << endl;
    }


    return 0;
}
