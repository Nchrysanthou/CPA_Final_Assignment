/*
    ==================================================
    CPR101 Final Project Team 02
    ==================================================
    Module #2 - Strings Manipulations 
    ==================================================
    #1 Concatenat-ing
    ==================================================
    Name:	 Ramon Flores
    ID : 	 160180196
    Email:   fdramon-gilberto@senecacollege.ca
    Section: NFF
*/

#include "manipulating.h"                                          //include manipulating.h file into source program
void manipulating(){                                               //Manipulatin function definition
    printf("*** Start of Concatenating Strings Demo ***\n");       //Display the Start Message
    char string1[80];                                              //Define char type array size of 80 with identifier name of string1
    char string2[80];                                              //Define char type array size of 80 with identifier name of string1
    while (TRUE){                                                  //Initialize while loop with TRUE
        printf("Type the 1st string (q - to quit):\n");            //Prompt the user to type the first string or q to quit
        gets(string1);                                             //Read the user input and store it to string1
        if (strcmp(string1, "q") == 0) break;                      //if string1 is equal to q end
        printf("Type the 2nd string:\n");                          //Prompt the user to type the second string
        gets(string2);                                             //Read the user input and store it to string2
        strcat(string1, string2);                                  //Concatenate string1 and string2 storing this new string in string1
        printf("Concatenated string is \'%s\'\n", string1);        //Display the result of concatenation 
    }    
    printf("*** End of Concatenating Strings Demo ***\n\n");       //Display the End Message
    
}