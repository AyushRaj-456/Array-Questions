/*
ARRAY_E4 : Write a program in C to print 
 
all unique elements in an array.

This task requires writing a 
C program to identify and 
print all unique elements 
in an array. The program will 
accept a specified number of 
integer inputs, store them 
in an array, and then determine 
and display the elements that 
appear only once in the array

*/

#include <stdio.h>

int main(){
    int unique_val;
    int element_num;
    int unique =0; // Better to name it common or same_val...   
    //int array[] = {2,2,3,4, 3};
    
    printf("Enter the no. of elements of array = ");
    scanf("%d", &element_num);
    
    int array[element_num];
    
    for(int k=0; k<element_num; k++){
        printf("\nEnter %d element = ", k);
        scanf("%d", &array[k]);
    }
    
    for(int i =0;i<element_num;i++){
        unique=0;
        for(int j=0;j<element_num;j++){
            if(array[i] == array[j] && i != j){
                unique = 1;
                break;
            }
        }
        if(unique == 0){
            unique_val = array[i];
            printf("Unique val = %d\n", unique_val);
        }
    }
    
   return 0;
    } // main