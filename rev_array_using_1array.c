// E11- Reverse the array (non dynamic)
#include <stdio.h>

int main() {
    int z=0;
    int array[6] = {2,4,6,8,5,9};
    
   /* for(int k=0; k<6;k++){
        printf("%d\n", array[k]);
    } */
    
    for(int i=0;i<3;i++){
        if(i<3){
            z=array[i];
            array[i] = array[6-(i+1)];
            array[6-(i+1)] = z;
        }
    }
    
    printf("\n");
    for(int j=0;j<6;j++){
        printf("%d\n", array[j]);
    }
    return 0;
}