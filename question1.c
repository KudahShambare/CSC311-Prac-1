
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//get user input
 char* getUserInput(){
	// Get user input
	
	static char userData [50];
	printf("Please enter n:  \n" );
	scanf("%s",userData);
	
	
return userData;
}
//check if it is a string

int isString(char* str ){

	int i;
	int count=0;
	for( i=0;i< strlen(str);i++){
		if(isdigit(str[i]) == 0){
			count++;
		}
	}
	return count;

}
//Handle valid input
int factorial(int num){
	if(num <0){
		return 0;
	}
	if(num == 0){
		return 1;
	}
	if(num ==1){
		return 1;
	}
	

	int fact;

	fact = num*factorial(num-1);
	return fact;
}

// Handle invalid input

void tryAgain(){

	printf("The input entered is not an int please try again");
	char* repeat = getUserInput();
	int isValid = isString(repeat);
	
	

}



int main(){

//initial trial
char* userInput = getUserInput();
int isCorrect = isString(userInput);
	if(isCorrect != 0){
		tryAgain();
	}
	else{
		//cast user input to int;
		int number;
		int result;
		number = atoi(userInput);
		
		result = factorial(number)+factorial(number-1)+factorial(number-2);
		printf("Result %d\n",result);

	}


return 0;


}