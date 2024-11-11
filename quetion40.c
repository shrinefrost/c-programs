//40. 40. Write a program to create a structure named company which has name, address, phone no of employees as member variables. Read the name of the company, its address, 
//phone no of employees. Finally, display these members' values.;
#include<stdio.h>

struct company {
	char name[20];
	char address[100];
	char phone_no[20];
};


int main(){
	int number;
	printf("enter number of employee: ");
	scanf("%d",&number);
	getchar();
	struct company employee[number];
	
	int i=0;
	
	for(;i<number;i++) {
		printf("\nenter details of employee no %d:",(i+1));
		//reading employee name 
		printf("\nenter name: ");
		fgets(employee[i].name,sizeof(employee[i].name),stdin);
		
		//reading employee address
		printf("enter address: ");
		fgets(employee[i].address,sizeof(employee[i].address),stdin);
		
		//reading employee phone number
		printf("enter phoneNumber: ");
		fgets(employee[i].phone_no,sizeof(employee[i].phone_no),stdin);
	}
	
	i=0;
	for(;i<number;i++) {
		printf("\ndetails of employee no %d:",(i+1));
		//reading employee name 
		printf("\nName: %s",employee[i].name);

		
		//reading employee address
		printf("Address: %s",employee[i].address);
	
		
		//reading employee phone number
		printf("PhoneNumber: %s",employee[i].phone_no);

	}
	
	return 0;
}
