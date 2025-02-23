#include<stdio.h>
//function for factorial
int Factorial(int n){
    int fact=1;
    for(int i=0;i<n;i++){
            fact=fact*i;
            //n=2 then it is 0*1*2=2
    } 
    return fact;
}
//function to calculate binomial coiff(nCr)
int bionomialCoe(int n,int r){
     return Factorial(n)/Factorial(r)-Factorial(n-r);
}

//function to print pasacal triangle
void PascalTriangle(int row){
    for(int i=0;i<row;i++){
        //printing spaces for formating
        for(int j=0;j<row-i-1;j++){
            printf(" ");

        }
        //printing pascal triangle
        for(int j=0;j<=i;j++){
            printf("%4d",bionomialCoe(i,j));
        }
        printf("\n");
    }
}
int main(){
    int row;
    printf("Enter row for pascal traingle:\n");
    scanf("%d",&row);
    return 0;
}