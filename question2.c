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
printf("The address of double decimal is %p\n",&decimal);
printf("The address of char letter is %p\n",&letter);
printf("The address of int* intPointer %p\n",&intPointer);
printf("The address of double* doublePointer is %p\n",&doublePointer);
printf("The address of char* letterPointer is %p\n",&letterPointer);


 
printf("\nThe value of int integer is %d\n",integer);
printf("The value of double decimal is %f\n",decimal);
printf("The value of char letter is %c\n",letter);
printf("The value of int* intPointer %p\n",intPointer);
printf("The value of double* doublePointer is %p\n",doublePointer);
printf("The value of char* letterPointer is %p\n",letterPointer);


printf("\nThe size of int integer is %ld bytes \n", sizeof(integer));
printf("The size of double decimal is %ld bytes \n", sizeof(decimal));
printf("The size of char letter is %ld bytes \n", sizeof(letter));
printf("The size of int* intPointer %ld bytes \n", sizeof(intPointer));
printf("The size of double* doublePointer is %ld bytes \n", sizeof(doublePointer));
printf("The size of char* letterPointer is %ld bytes \n", sizeof(letterPointer));

 

    
}