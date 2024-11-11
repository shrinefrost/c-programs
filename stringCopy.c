//35. write a program to copy one string to another using pointers


#include<stdio.h>
#include<string.h>

int main(){
	char string1[20] , string2[20];
	printf("enter a string:");
	gets(string1);

	
	char *strptr=string1;
	
	int i=0;
	while(*(strptr)!='\0'){	
		string2[i]=*strptr;
		strptr++;
		i++;	
	}
	string2[i]='\0';

	printf("\nstring1 successfully copied to string2\n");
	printf("string2 value after copying is: %s", string2);
}
