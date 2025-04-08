#include <stdio.h>
#include <stdlib.h>
#define STUDENTS 3
#define EXAMS 3
 
void printArray(int grades[][EXAMS], size_t students, size_t exams);
void minimum(int grades[][EXAMS], size_t students, size_t exams);
void maximum(int grades[][EXAMS], size_t students, size_t exams);
void average(int grades[][EXAMS], size_t students, size_t exams);
int main(){
    int studentGrades[STUDENTS][EXAMS] = {
        {77, 68, 86, 73},
        {96, 87, 89, 78},
        {70, 90, 86, 81}
    };
    //an array of pointers that point to each function 
    void (*processGrades[4])(int [][EXAMS], size_t, size_t) = {
        printArray, minimum, maximum, average
    };
    int choice;
    do {
        printf("\nEnter a choice:\n");
        printf("  0  Print the array of grades\n");
        printf("  1  Find the minimum grade\n");
        printf("  2  Find the maximum grade\n");
        printf("  3  Print the average on all tests for each student\n");
        printf("  4  End program\n");
        printf("? ");
        scanf("%d", &choice);

        if (choice >= 0 && choice < 4) {
            (*processGrades[choice])(studentGrades, STUDENTS, EXAMS);
        } else if (choice != 4) {
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    printf("Program ended.\n");
    return 0;
}

void printArray(int grades[][EXAMS], size_t students, size_t exams){
    printf("\nThe array is:\n");
    printf("            [0]  [1]  [2]  [3]");
    
    for (size_t i = 0; i < students; i++) {
        printf("\nstudentGrades[%zu]", i);
        for (size_t j = 0; j < exams; j++) {
            printf("%5d", grades[i][j]);
        }
    }
    printf("\n");
}

void minimum(int grades[][EXAMS], size_t students, size_t exams){
    int lowGrade = 100; 

    for (size_t i = 0; i < students; i++) {
        for (size_t j = 0; j < exams; j++) {
            if (grades[i][j] < lowGrade) {
                lowGrade = grades[i][j];
            }
        }
    }
    printf("\nThe lowest grade is %d\n", lowGrade);
}

void maximum(int grades[][EXAMS], size_t students, size_t exams){
    int highGrade = 0; 
    for (size_t i = 0; i < students; i++) {
        for (size_t j = 0; j < exams; j++) {
            if (grades[i][j] > highGrade) {
                highGrade = grades[i][j];
            }
        }
    }
    printf("\nThe highest grade is %d\n", highGrade);
}

void average(int grades[][EXAMS], size_t students, size_t exams){
    printf("\n");
    for (size_t i = 0; i < students; i++) {
        int total = 0;
        for (size_t j = 0; j < exams; j++) {
            total += grades[i][j];
        }
        printf("The average for student %zu is %.2f\n", 
               i, (double) total / exams);
    }
}
