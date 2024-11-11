//35. write a program to all the occurance of character c from the string.


#include<stdio.h>
#include<string.h>

int main(){
	char string[50];
	printf("enter a string:");
	gets(string);
	
	int i=0;
	int j;
	
	while(string[i]!='\0'){	
		j=i;
		if(string[i]=='c'){
			while(string[j]!='\0'){
				string[j]=string[j+1];
				j++;
			}
			i=0;	
		}
		else i++;
			
	}
	printf("\n after replacing c from string new string is: %s",string);
}
