// Online C compiler to run C program online
#include <stdio.h>

void main() {

//declare and initilize variables
 int integer =5;
 double decimal =0.5;
 char letter='a';
 
 //declare and initialize pointers
 int* intPointer =&integer;
 double* doublePointer =&decimal;
 char* letterPointer = &letter;
 
printf("\nThe address of int integer is %p\n",&integer);
printf("\nThe address of int integer is %p\n",intPointer);

printf("The address of double decimal is %p\n",&decimal);
printf("The address of char letter is %p\n",&letter);
printf("The address of int* intPointer %p\n",&intPointer);
printf("The address of double* doublePointer is %p\n",&doublePointer);
printf("The address of char* letterPointer is %p\n",&letterPointer);


 
printf("\nThe value of int integer is %d\n",integer);
printf("The value of double decimal is %f\n",decimal);
printf("The value of char letter is %s\n",letter);

printf("The value of int* intPointer %d\n",*intPointer);
printf("The value of double* doublePointer is %f\n",*doublePointer);
printf("The value of char* letterPointer is %s\n",letterPointer);

 
 

    
}