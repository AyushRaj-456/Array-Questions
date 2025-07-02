/* Write a program in C to
separate odd and even
integers into separate arrays. */

#include <stdio.h>

int main() {
    int elements;
    int even_n;
    int odd_n;
    //int arr[11] = {11,0,8,7,72,34,2,3,4,5,7};
    
    printf("Enter the number of elements = \n");
    scanf("%d", &elements);
    
    int arr[elements];
    int arr_even[(elements/2)+1];
    int arr_odd[(elements/2)+1];
    
    for(int j=0;j<elements;j++){
        printf("Enter value of %d element = ", j);
        scanf("%d", &arr[j]);        
    }
    
    for(int i=0, even_n=0, odd_n=0; i<elements; i++){
        if(arr[i]%2 ==0){
            arr_even[even_n] = arr[i];
            printf("Even value = %d\n", arr_even[even_n]);
            even_n++;
        }else if(arr[i]%2 != 0){
            arr_odd[odd_n] = arr[i];
            printf("odd value = %d\n", arr_odd[odd_n]);
             odd_n++;
        }
    }
    
    return 0;
}