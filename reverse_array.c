/* Welcome!
 * Write a program in C to read 
 * n number of values in an array
 * and display them in 
 * reverse order...
 */

#include <stdio.h>


int main() {
    int array_num;
    printf("Enter the desired number of elements of array");
    scanf("%d", &array_num);
    int array[array_num];
    
    for(int i=0; i<array_num;){
        printf("Enter the value of %d element of array : ", i);
        scanf("%d", &array[i]);
        i++;
    }
    
    for(int j=0; j<array_num; j++){
        printf("value of %d element = %d\n", j,array[j]);
    }
    
    return 0;
}