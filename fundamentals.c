/*
	==================================================
	CPR101 Final Project Team 02
	==================================================
	Module #1 - Strings Fundamentals
	==================================================
	#1 Indexing
	==================================================
	Name   : Heather Chung
	ID     : 147001200
	Email  : hchung30@myseneca.ca
	Section: NFF
*/

#include "fundamentals.h"													//include fundamentals.h file into source program

void fundamentals() {														//fundamentals function definitions
	printf("*** Start of Indexing Strings Demo ***\n");						//display the title 
	char buffer1[80];														//define char type array size of 80 with identifier name of buffer1
	char num_input[10];														//define char type array size of 10 with identifier name of num_input
	int position;															//declare int named position
	while (TRUE) {															//enter the while loop with TRUE
		printf("Type a string (q - to quit):\n");							//prompt displays to user to type a string or q to quit
		gets(buffer1);														//read the line of string from the user input and store it to buffer1
		if (strcmp(buffer1, "q") == 0) break;								//compare string stored in buffer1 with q and if they are identical, come out																	of loop
		while (TRUE) {														//enter the while loop
			printf("Type the character position within the string:\n");		//prompt displays to user to type the character of index
			gets(num_input);												//read the user input and store it to num_input
			position = atoi(num_input);										//convert the string stored in num_input to an integer type and store into																	position
			if (position >= strlen(buffer1)) {								//if number stored in position is greater or equal to length of the string																	that is stored in buffer1
				printf("Wrong position... type again, please\n");			//display an error message
				continue;													//jump to the beggining of the loop which is line #26
			}
			printf("The character found at %d position is \'%c\'\n",		//display the statement with the position(index number) and a chracter that is																corresponding to the array index.
				position, buffer1[position]);
			break;															//come out of a second while loop and go to line #22
		}
	}
	printf("*** End of Indexing Strings Demo ***\n\n");						//display the statement
}