//35. write a program to convert string to number and number to string;

#include<stdio.h>
#include<string.h>
int userinput;
char string[20];


void numbertostring() {
	printf("enter a number to be converted into strings: ");
	scanf("%d",&userinput);
	int temp = userinput;
	int i=0;
	int flag=0;
	int remainder;
 	if(userinput<0){
 		userinput=(-userinput);
 		flag =1;
	 }
	
	while(temp!=0){
		remainder = temp%10;
		temp = temp/10;
		string[i++]= remainder + '0';
		
	}	
	
	if(flag==1){
		string[i++]='-';
	}
	strrev(string);
	string[i]='\0';
	printf("entered value after conversion is: %s",string);
}


//void stringtonumber() {
//	printf("enter a string to be converted into number: ");
//	scanf("%s",&userinput);
//	char temp[] = userinput;
//	int i=0;
//	int flag=0;
//	int remainder;
//	
//	while(temp!=0){
//		remainder = temp%10;
//		temp = temp/10;
//		string[i]= remainder + '0';
//		i++;
//	}	
//	
//	if(flag==1){
//		string[i]='-';
//		i++;
//	}
//	strrev(string);
//	string[i]='\0';
//	printf("entered value after conversion is: %s",string);
//}

int main(){
	int choice;
	printf("please enter '1' for concverting number to string or \n");
	printf(" enter '2' for concverting string to number: \n");
	scanf("%d",&choice);	
	switch(choice) {
		case 1: { numbertostring();
			break;
		}
//		case 2:{
//			stringtonumber();			
//			break;
//		}
		default: {
			printf("invlaid input \n");
			break;
		}
	}
	
	
	
//	char string[20];
//	printf("enter a string:");
//	scanf("%s",&string);
//	int size = strlen(string)-1;
//	int result =strpalindrome(string,size);
//	if(result==1) {
//		printf("entered string %s is palindrome!",string);
//	}
//	else {
//		printf("entered string %s is not palindrome!",string);
//	}
return 0;
}
