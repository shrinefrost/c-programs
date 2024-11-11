/*30: write a program to add two matrices of any order */

#include<stdio.h>
#define rowsfirst 2
#define columnfirst 2
#define rowssecond 2
#define columnsecond 2
int main(){

	
//	printf("\nenter no. of rows for 1st matrix: ");
//	scanf("%d",&rows1);
//	printf("\nenter no. of columns for 1st matrix: ");
//	scanf("%d",&columns1);
	
	int matrix1[rowsfirst][columnfirst];
	
	
//	printf("\nenter no. of rows for 2nd matrix: ");
//	scanf("%d",&rows2);
//	printf("\nenter no. of columns for 2nd matrix: ");
//	scanf("%d",&columns2);
//	
	int matrix2[rowssecond][columnsecond];
	
	
	if(rowsfirst==rowssecond && columnfirst==columnsecond){
		int i =0;
		int j =0;
		printf("\nenter values of first matrix");
		for(;i<rowsfirst;i++) {
			for(;j<columnfirst;j++) {
				printf("\nenter value at:matrix1[%d][%d]: ",i,j);
				scanf("%d",&matrix1[i][j]);
				
			}
		}
		printf("\nenter values of second matrix");
		for(;i<rowssecond;i++) {
			for(;j<columnsecond;j++) {
				printf("\nenter value at:matrix2[%d][%d]: ",i,j);
				scanf("%d",&matrix2[i][j]);
				
			}
		}
	}
	
	
	else{
		printf("matrix do not have same rows and columns that is why it is not possible to add them:");
	}
	
	
	
	
}
