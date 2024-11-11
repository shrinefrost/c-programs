//35. write a program to read a string and check whether a string is palindrome or not.

#include<stdio.h>
#include<string.h>
int strpalindrome(char string[],int size ) {
	int i=0;
	char temp;
	while(i<size){
		if(string[i]!=string[size]){
			return 0;
		}
		i++;
		size--;
	}
	return 1;
}
int main(){
	char string[20];
	printf("enter a string:");
	scanf("%s",&string);
	int size = strlen(string)-1;
	int result =strpalindrome(string,size);
	if(result==1) {
		printf("entered string %s is palindrome!",string);
	}
	else {
		printf("entered string %s is not palindrome!",string);
	}
}
