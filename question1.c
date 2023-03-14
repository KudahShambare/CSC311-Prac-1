
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
//Handle valid input   -- limited to numbers less than 16
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
//sum of factorials

int sumOfFactorials(int number){

		//cast user input to int;
		int result;
	
		
		result = factorial(number)+factorial(number-1)+factorial(number-2);
		printf("Result %d\n",result);


}

// Handle invalid input

int tryAgain(){
 
	printf("The input entered is not an int please try again\n");
	char* repeat = getUserInput();
	int isValid = isString(repeat);

if(isValid == 0){ //valid input on trial
	int value;
	value = atoi(repeat);
		return value;
}else{   //invalid input on trial

	 
return -0;
}

	
}



void main(){

//initial trial

char* userInput = getUserInput();
int isCorrect = isString(userInput);

	if(isCorrect == 0){
		
		//cast user input to int;
		int val;
		val = atoi(userInput);
		long finalOutput = sumOfFactorials(val);

		return ;
		

	}else{
		//give the user 4 more chances
		
int trials ;
for(trials=1;trials<5;trials++){
	
		int trialResult=tryAgain();

		if(trialResult!= -0){
			sumOfFactorials(trialResult);
			break;

			}
		

		//break;
	}



	}



}