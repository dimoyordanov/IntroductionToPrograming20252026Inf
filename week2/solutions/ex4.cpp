#include <stdio.h>

int main() {
    int grade;
    printf( "Enter your grade: ");
    scanf("%d", &grade);
    int gradeOutuput = grade * (1 - (grade > 6 || grade < 2));
    printf("Grade out: %d", gradeOutuput); 
    return 0;
}