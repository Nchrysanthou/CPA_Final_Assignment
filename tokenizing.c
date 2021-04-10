/*
	==================================================
	CPR101 Final Project Team 02
	==================================================
	Module #4 - Tokenizing
	==================================================
	#4 Tokenizing
	==================================================
	Name   : Nicholas Chrysanthou
	ID     : 161264197
	Email  : Nchrysanthou@myseneca.ca
	Section: NFF
*/

#include "tokenizing.h" // Include The Parallel Header File Containing The Prototypes

void tokenizing() // Create the void used for tokenization, declared in the header file as a prototype
{
    printf("*** Start of Tokenizing Words Demo ***\n"); // Display this label to the console
    char words[200];                                    // Create a char array / string with a capacity of 200
    char *word;                                         // Create a string pointer
    int w_counter;                                      // Create a didget variable which will hold the number of words
    while (TRUE)                                        // Start a loop which will run as long as it's set to true
    {
        printf("Type a few words seperated by space(q - to quit):\n"); // Prompt the user to enter text
        gets(words);                                                   // Get the string of words, equal to scanf("%s", words);
        if (strcmp(words, "q") == 0)                                   // If what the user entered equals q, break out of the loop
            break;
        word = strtok(words, " "); // the pointer is now used to create a token with the local char array "words" which is split at every space entered
        w_counter = 1;             // Set the didget w_counter equal to one
        while (word)               // While there is a valid word and not a space:
        {
            printf("Word #%d is \'%s\'\n", w_counter++, word); // Display to the user and increment the word counter for each word in the loop, and display that word
            word = strtok(NULL, " ");                          // Set the current index of word equal to null to free the current index and get the next word
        }
    }
    printf("*** End of Tokenizing Words Demo ***\n");
}