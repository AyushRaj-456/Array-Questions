//E5 : Unique element of array using 1 loop 


#include <stdio.h>

int main() {
    
    int element_num;
   
    
    printf("No. of elements you want = ");
    scanf("%d", &element_num);
    int array[element_num];
    int arr[element_num];
    
    
    for(int k=0; k<element_num; k++){
        printf("Enter %d element = \n", k);
        scanf("%d", &array[k]);
        arr[k] = 0;
    }
    
    // int array[] = {2,2,3,4,3};
    // int arr[5] = {0,0,0,0,0};
    
    for(int i=0; i<element_num; i++){
       // printf("%d", arr[i]);
        arr[array[i]] = arr[array[i]] + 1;
        //printf(" %d\n", arr[array[i]]);
    }
    
    for(int j=0; j<element_num;j++){
    if(arr[j] == 1){
        printf("Unique val = %d\n", j);
    }
        
    }
    return 0;
}