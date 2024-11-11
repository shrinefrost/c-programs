//35. write a program to reverse the string without using the strrev() function.


#include<stdio.h>
#include<string.h>
char *strreverse(char string[],int size ) {
	int i=0;
	char temp;
	while(i<size){
		
		temp=string[i];
		string[i]=string[size];
		string[size]=temp;
		i++;
		size--;
	}
	return string;
}
int main(){
	char string[20];
	printf("enter a string:");
	scanf("%s",&string);
	int size = strlen(string)-1;
	printf("string after reversal is: %s",strreverse(string,size));
}
