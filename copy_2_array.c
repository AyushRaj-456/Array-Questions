/*Write a program in C to copy 
 * the elements of one array 
 * into another array.
 */

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of desired element of array : \n");
    scanf("%d", &n);
    int array_one[n]; // 1st array
    int array_two[n]; // 2nd array
    
    for(int i=0; i<n; i++){
        printf("Enter the value of %d element of the array : \n", i);
        scanf("%d", &array_one[i]);
    }
    
    for(int j=0; j<n; j++){
        printf("Value of %d element of array1 = %d\n", j, array_one[j]);
    }
    printf("\n");
    for(int k=0;k<n;k++){
        array_two[k]=array_one[k];
        printf("Value of %d element of array2 = %d\n", k ,array_two[k]);
    }
    return 0;
}