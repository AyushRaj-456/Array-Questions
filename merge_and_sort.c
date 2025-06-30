/* E6: Write a program in C to 
merge two arrays of the 
same size sorted in 
descending order */
/*
  int func_repeat(int,int,int, int);
 
int func_repeat(int arranged_array[], int special_int, int l, int i){
    if(arranged_array[l] == 0){
            arranged_array[l] = arranged_array[l+special_int];
    }
    if(arranged_array[l+special_int] ==0){
        i++;
        func_repeat(int arranged_array[], int special_int, int l, int i);
    }
return 0;
}

*/

#include <stdio.h>

int main() {
    int special_int;
    int greater_than = 0;
    int array_1[]={7,7,7,3};
    int array_2[]={6,6,1,4};
    int main_array[8];
    int arranged_array[8] ={0,0,0,0,0,0,0,0};
    
    for(int i=0; i<4; i++){
        main_array[i] = array_1[i];
        main_array[i+4] = array_2[i];
        //printf("%d,%d\n", main_array[i], main_array[i+4]);
        
    }
    
    for(int j=0;j<8;j++){
        for(int k=0; k<8;k++){
        if(main_array[j] > main_array[k] && j!=k){
            greater_than++;
            // arranged_array[7-greater_than] = main_array[j];
        
        }/* else if(main_array[j] == main_array[k] && main_array[j]>main_array[k] && j!=k){
            greater_than++;
            special_int = greater_than-1;
            //arranged_array[7-(greater_than)] = main_array[j];
        }*/
            
        } // loop k
        printf(" greater than: %d &", greater_than);
        arranged_array[7-greater_than] = main_array[j];
       // arranged_array[7-special_int] = main_array[j];
        printf("value = %d\n", arranged_array[7-greater_than]);
        greater_than=0;
        
        
    } // loop j
    
    //special_int = 1;
    for(int l=8;l>=0;l--){
        
    if(arranged_array[l] != 0 && arranged_array[l-1] == 0){
        arranged_array[l-1] = arranged_array[l];
    }}
    
    for(int l=0;l<8;l++){
        printf("%d\n", arranged_array[l]);
    }
    
    return 0;
}