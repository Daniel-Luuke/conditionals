#include <stdio.h>
#include <string.h>

int main(){
    // Declare variables
    char studentName[50]; // Character array for name
    double score;
    char grade;

    // Prompt for student name
    printf("Enter student name: ");
    // fgets reads a full line including spaces
    fgets(studentName, 50, stdin);
    // Remove newline from the end
    studentName[strcspn(studentName, "\n")] = '\0';

    // Prompt for score
    printf("Enter percentage score (0-100): ");
    scanf("%lf", &score);

    // Input validation
    if (score < 0 || score > 100){
        printf("ERROR: Score must be between 0 and 100!\n");
        return 1;
    }

    // Determine letter grade using else-if chain
    if (score >= 90){
        grade = 'A';
    }else if (score >= 80){
        grade = 'B';
    }else if (score >= 70){
        grade = 'C';
    }else if (score >= 60){
        grade = 'D';
    }else{
        grade = 'F';
    }

    // Display report
    printf("\n===== GRADE REPORT =====\n");
    printf("Student: %s\n", studentName);
    printf("Score: %.2f%%\n", score);
    printf("Letter Grade: %c\n", grade);

    // Switch for recommendations
    printf("\n===== RECOMMENDATIONS =====\n");
    switch (grade){
      case 'A':
        printf("Consider becoming a peer tutor\n");
        printf("Explore advanced topics\n");
        break;
      case 'B':
        printf("Review topics where you lost points\n");
        printf("Practice more problems\n");
        break;
      case 'C':
        printf("Attend office hours regularly\n");
        printf("Form a study group\n");
        break;
      case 'D':
      case 'F':
        printf("Mandatory tutoring sessions\n");
        printf("Meet with academic advisor\n");
        break;
      default:
        printf("Continue your good work\n");
        break;
    }

    return 0;
}