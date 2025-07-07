#include <stdio.h>

int main() {
    int row1, col1, row2, col2;
    int temp =0;
    
    printf("Enter the num of row for matrix1 - ");
    scanf("%d", &row1);
    printf("Enter the num of column for matrix1 -");
    scanf("%d", &col1);
    
    int matrix1[row1][col1];
         
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            printf("Enter the [%d][%d] element - ", i,j);
            scanf("%d", &matrix1[i][j]);            
        } //loop j
    } // loop i
    
    
    printf("Enter the num of row for matrix2 - ");
    scanf("%d", &row2);
    printf("Enter the num of column for matrix2-");
    scanf("%d", &col2);
    int matrix2[row2][col2];
    
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            printf("Enter the [%d][%d] element - ", i,j);
            scanf("%d", &matrix2[i][j]);            
        } //loop j
    } // loop i
    
    int r_mat[row1][col2]; //resultant matrix
    
    if(col1 == row2 || row1>0 ||row2>0 || col1>0 || col2> 0){
        
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            printf(" %d\t", matrix1[i][j]);
                       
        } //loop j
        printf("\n");
    } // loop i
    printf("\n");
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            printf(" %d\t", matrix2[i][j]);
                       
        } //loop j
        printf("\n");
    } // loop i
    
    //-××--×--××-×-×-×-×-×-Multiplication--×-×-×-×-×-
    
    for(int i=0 ;i<row1;i++){
        for(int k=0;k<col2;k++){
            temp=0;
        for(int j=0;j<row2;j++){
            //j=j+k;
           temp = temp + matrix1[i][j]* matrix2[j][k];
        }    // loop j
        
       r_mat[i][k] = temp;     
           
        }     // loop k
           }//loop i
        
        
        //Result presentation
    printf("\nResultant Matrix -\n");
    for(int m=0;m<row1 ;m++){
        for(int n=0;n<col2 ;n++){
            printf("%d\t", r_mat[m][n]);
        }
        printf("\n");
    }
        
    }else{
        printf("\n\nMultiplication NOT POSSIBLE!\n");
        printf("For matrix multiplication");
        printf("to be valid, the number of");
        printf("columns in the first matrix");
        printf("must be equal to the number");
        printf("of rows in the second matrix.");
    }
    
    
    
    return 0;
}