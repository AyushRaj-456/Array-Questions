/* Write a program in C 
to count the frequency 
of each element of an array. */

// To reduce the time complexity im trying to solve it without using nested loops...
//Later, will make it dynamic as well..
#include <stdio.h>

int main() {
    int array[] = {2,1,2,2,2,4,5};
    int arr[7];
    
    for(int i=0; i<7;i++){
        arr[array[i]] = 0;
    }
    
    for(int j=0;j<7;j++){
        arr[array[j]]= arr[array[j]]+1;
        
    }
    for(int k=0;k<7;k++){
        if(arr[k] == 0){
            printf("Freq of %d = %d\n", k,arr[k] );
        }else if(arr[k] != 0){
            printf("Freq of %d = %d\n",k, arr[k]);
        }
           // printf("Value of arr[%d] = %d", k. arr[k]);
          //  printf("Value of %d element : %d\n Freq %d \n", k,arr[k], arr[array[k]]);
        // printf("Freq of %d = %d\n", k, arr[array[k]]);
       }
    
    return 0;
}