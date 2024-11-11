//40. 40. Write a program to create a structure named company which has name, address, phone no of employees as member variables. Read the name of the company, its address, 
//phone no of employees. Finally, display these members' values.;
#include<stdio.h>

struct complex {
	int realPart;
	int imaginaryPart;
};


int main(){
	struct complex number[2];

	int i=0;
	
	for(;i<2;i++) {
		printf("\nenter values of complex number %d:",(i+1));
		
		//reading real part 
		printf("\nenter real part: ");
		scanf("%d",&number[i].realPart);
	
		//reading imaginary part 
		printf("enter imaginary part: ");
		scanf("%d",&number[i].imaginaryPart);
	}
	
	int realAdd = number[0].realPart +number[1].realPart;
	int imaginaryAdd = number[0].imaginaryPart +number[1].imaginaryPart;
	
	
	printf("\nAddtion of entered complex numbers %d(+)%di and %d(+)%di is: ",number[0].realPart,number[0].imaginaryPart,number[1].realPart,number[1].imaginaryPart);
	printf("%d(+)%di",realAdd,imaginaryAdd);
	
	int realSub = number[0].realPart -number[1].realPart;
	int imaginarySub = number[0].imaginaryPart -number[1].imaginaryPart;
	
	printf("\nSubstraction of entered complex numbers %d(+)%di and %d(+)%di is: ",number[0].realPart,number[0].imaginaryPart,number[1].realPart,number[1].imaginaryPart);
	printf("%d(+)%di",realSub,imaginarySub);

	return 0;
}
