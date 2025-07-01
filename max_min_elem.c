/* E7: Write a program in 
C to find the maximum 
and minimum elements
in an array. */

#include <stdio.h>

int main(){
    int element;
    printf("Enter the num of elements you want : \n");
    scanf("%d", &element);
    
    int greater_than =0;
    int array[element];
    
    for(int k=0;k<element;k++){
        printf("Enter the val of %d element - ", k);
        scanf("%d", &array[k]);
    }
    
    
    for(int i=0;i<element;i++){
        for(int j=0;j<element;j++){
            if(array[i] > array[j] && i!=j){
                greater_than++;
            }
        } // loop j
        
        if(greater_than == element-1){
            printf("Max value of the array : %d\n", array[i]);
        }else if(greater_than == 0){
            printf("Min value of the array : %d\n", array[i]);
        }
        
        greater_than=0;
        
        
    } // loop i
    
     return 0;
}