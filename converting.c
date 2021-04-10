/*
	==================================================
	CPR101 Final Project Team 02
	==================================================
	Module #3 – Strings Conversions 
	==================================================
	#1 Converting to int 
	==================================================
	Name   : Ali Hazrati
	ID     : 114016207
	Email  : ahazrati2@myseneca.ca
	Section: NFF
*/
#include "converting.h"                                             //include converting.h file into source program

void converting()   {                                               //converting function definitions
    printf("*** Start of Converting Strings to int Demo ***\n");    //Display the Start message
    char int_string[80];                                            //Define char type arraysize of 80 with identifier name of int_string
    int int_number;                                                 //declare int named int_number
    while (TRUE)  {                                                 //Initialize while loop with TRUE
        printf("Type the int numeric string (q - to quit) :\n");    //prompt the user to type the int numeric string or q to quit
        gets(int_string);                                           //Read the user input and store it to int_string
        if (strcmp(int_string, "q") == 0) break;                    //if int_string is equal to q end 
        int_number = atoi(int_string);                              //convert the string stored in int_string to an integer type and store into int_number
        printf("Converted number is %d\n", int_number);             //Display the result of convertation
    }
    printf("*** End of Converting Strings to int Demo ***\n\n");    //Display the End message
}