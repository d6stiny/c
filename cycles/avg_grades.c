#include <stdio.h>

int main() {
    int num_students;
    float grade, sum = 0, average;
    
    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    
    if (num_students <= 0) {
        printf("Invalid number of students!\n");
        return 1;
    }
    
    for (int i = 0; i < num_students; i++) {
        do {
            printf("Enter grade for student %d (0-10): ", i + 1);
            scanf("%f", &grade);
            
            if (grade < 0 || grade > 10) {
                printf("Invalid grade! Enter a value between 0 and 10.\n");
            }
        } while (grade < 0 || grade > 10);
        
        sum += grade;
    }
    
    average = sum / num_students;
    
    printf("\nClass average: %.2f\n", average);
    
    return 0;
}
