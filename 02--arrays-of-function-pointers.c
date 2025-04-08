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
