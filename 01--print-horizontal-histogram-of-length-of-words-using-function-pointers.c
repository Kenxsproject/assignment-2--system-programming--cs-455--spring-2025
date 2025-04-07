#include <stdio.h>
void bubblesort(int array[],size_t size, int(*compare)(int a, int b));
int ascending(int a, int b);
int descending(int a, int b);
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    printf("Enter 1 to sort in ascending order,\n" "Enter 2 to sort in descending order: ");
 int order;
 scanf("%d", &order);

 printf("\nData items in orginal order\n");
 for(size_t i = 0; i < SIZE; ++i){
    printf("%4d", a[i]);
 }
 if (order == 1)
 {
    
 }
 
}
