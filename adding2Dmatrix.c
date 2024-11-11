/*30: write a program to add two matrices of any order */

#include<stdio.h>

int main(){
	int rows1, columns1;
	int rows2, columns2;
	
	printf("\nenter no. of rows for 1st matrix: ");
	scanf("%d",&rows1);
	printf("\nenter no. of columns for 1st matrix: ");
	scanf("%d",&columns1);
	
	int matrix1[rows1][columns1];
	
	
	printf("\nenter no. of rows for 2nd matrix: ");
	scanf("%d",&rows2);
	printf("\nenter no. of columns for 2nd matrix: ");
	scanf("%d",&columns2);
	
	int matrix2[rows2][columns2];
	int matrixAdd[rows2][columns2];
	
	
	if(rows1==rows2 && columns1==columns2){
		int i =0;
		int j =0;
		printf("\nenter values of first matrix\n");
		for(i=0;i<rows1;i++) {
			for(j=0;j<columns1;j++) {
				printf("enter value at:matrix1[%d][%d]: ",i,j);
				scanf("%d",&matrix1[i][j]);
				
			}
		}
		printf("\nenter values of second matrix\n");
		i=0;
		j=0;
		for(i=0;i<rows2;i++) {
			for(j=0;j<columns2;j++) {
				printf("enter value at:matrix2[%d][%d]: ",i,j);
				scanf("%d",&matrix2[i][j]);
				
			}
		}
		for(i=0;i<rows1;i++) {
			for(j=0;j<columns1;j++) {
				matrixAdd[i][j]=matrix1[i][j]+matrix2[i][j];		
			}
		}
		printf("\n\t addition of both matrix is: \n");
		for(i=0;i<rows1;i++) {
			for(j=0;j<columns1;j++) {
				printf("\t value at:matrixAdd[%d][%d]: %d ",i,j,matrixAdd[i][j]);			
			}
			printf("\n");
		}		
			
	}
	
	
	else{
		printf("matrix do not have same rows and columns that is why it is not possible to add them:");
	}
	
	
	
	
}
