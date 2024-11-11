#include <stdio.h>
// interger %d
int main () {
  // int a;
  // printf("enter the value of a \n");
  // scanf(" %d",&a);
  // printf("the value of a is:%d",a);

// char %c
  // char a;
  // printf("enter the value of a \n");
  // scanf("%c",&a);
  // printf("the value of a is:%c",a);

// string %s
//  char a[9];
//   printf("enter the value of a \n");
//   gets(a);// always take string input from gets 
//   printf("the value of a is:%s",a);// doubt given space where 10 but is taking more than 10 values;

//float %f
//  float a;
//   printf("enter the value of a \n");
//   scanf("%f",&a);
//   printf("the value of a is:%f",a);

//octal number %o
//  int a;
//   printf("enter the value of a and first digit should be 0: ");
//   scanf("%o",&a);
//   printf("\nthe octal value of a is:%o \n",a);
//   printf("the integer value of a is: %d",a);


// hexadecimal representation %x
//  int a;
//   printf("enter the value of a \n");
//   scanf("%x",&a);
//   printf("the value of a is:%x",a);
//   printf("\nthe integer value of a is: %d",a);


// %6d is used 
//  int a;
//   printf("enter the value of a \n");
//   scanf("%6d",&a);// is extra number is added then it ignored 
//   printf("the value of a is:%d",a);
// }

//%6f is used 
//  float a;
//   printf("enter the value of a \n");
//   scanf("%f",&a);// is extra number is added then it ignored when %6f is added in it otherwise if you enter more than 6 number before decimal then it will print all but it will not be ignored only the after decimal value is ignored
//   printf("the value of a is:%6f",a);

// %6.2f is used 
//  float a;
//   printf("enter the value of a \n");
//   scanf("%f",&a);// is extra number is added then it ignored 
//   printf("the value of a is:%6.2f",a);


// %.2f is used 
  float a;
  printf("enter the value of a \n");
  scanf("%f",&a);// is extra number is added then it ignored 
  printf("the value of a is:%.2f",a);
}

