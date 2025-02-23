#include<stdio.h>
//func to multiply 2 matrix
void MatrixMultiplication(int FirstMatrix[][10],int SecondMatrix[][10],int result[][10],int row1,int col1,int col2){
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            result[i][j]=0;
            for(int k=0;k<col1;k++){
                result[i][j]+=FirstMatrix[i][k]*SecondMatrix[j][k];
            }
        }
    }
    printf("************************************************\n");
}

//function for matrix display
void DisplayMatrix(int matrix[][10],int row,int col){
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                printf("%d",matrix[i][j]);

            }
            prinf("\n");
        }
      prinf("*****************************************\n");

}
int main(){

    int FirstMatrix[10][10],SecondMatrix[10][10],result[10][10];
    int row1,col1,row2,col2;

    printf("********************************************************************************************************************\n");
    //take input of 1st matrix
    printf("enter row1 and col1 for first matrix:\n");
    scanf("%d %d",&row1,col1);

    printf("********************************************************************************************************************\n");
    //take input of 1st matrix
    printf("enter row2 and col2 for first matrix:\n");
    scanf("%d %d",&row2,col2);

    printf("*************************************************************************\n");

    //check matrix mul is possible or not
    if(col1!=row2){
        printf("matrix multiplication is not posssible\n");
    }
    printf("********************************************************************************************************************\n");
    // Taking matrix inputs
    printf("Enter elements of first matrix:\n");
    inputMatrix(FirstMatrix, row1, col1);

 printf("********************************************************************************************************************\n");
    printf("Enter elements of second matrix:\n");
    inputMatrix(SecondMatrix, row2, col2);

 printf("********************************************************************************************************************\n");
    // Multiply matrices
    multiplyMatrices(FirstMatrix, SecondMatrix, result, row1, col1, col2);

 printf("********************************************************************************************************************\n");
    // Displaying matrices
    printf("First Matrix:\n");
    displayMatrix(FirstMatrix, row1, col1);

 printf("********************************************************************************************************************\n");
    printf("Second Matrix:\n");
    displayMatrix(SecondMatrix, row2, col2);
  
  printf("********************************************************************************************************************\n");
    printf("Product of matrices:\n");
    displayMatrix(result, row1, col2);
 
 printf("********************************************************************************************************************\n");
    return 0;


}