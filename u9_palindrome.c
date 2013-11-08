/*
Write a program that reads a message, then checks whether it’s a palindrome (the letters in the message are the same from left to right as from right to left). Ignore all characters that are not letters only relevant are letter A-Z,a-z. A single character is a palindrome, and the empty message is considered a palindrome as well (this includes a message that consists of only non-letter characters).
% palindrome
Enter a message: He lived as a devil, eh?
Palindrome
% palindrome
Enter a message: Anne, I stay a day at Sienna.
Palindrome
% palindrome
Enter a message: Madam, I am Adam.
Not a palindrome
%
The maximum length of the message is 40 characters. Reading of the message should stop when more than 40 characters are read, or when the character ’\n’ is read (additional characters are ignored). The two possible messages printed by the program are “Palindrome” and “Not a palindrome”.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// defines allowed length of message
#define maxchars 41

int main() {

    char message[maxchars] = {'\0'};
    int countmsg = 0;
    int bla[] = {1,2,3};
    int (*b)[];
    b = &bla;
    char (*p)[maxchars];
    p = &message;
    int i = 0;


    printf("palindrome\n");
    printf("Enter a message: ");
    fgets(message, maxchars, stdin);

    /*  As newline characters are also counted with strlen(), a potential '\n' character needs to be replaced with the null terminator.  */
    for (i=0;i<maxchars;i++) {
        if(message[i] == '\n') {
            message[i] = '\0';
            break;
        }
    }
    countmsg = strlen(message);

    // p = &message;

    printf("message length: %d\n", countmsg);
    printf("message: %s\n", message);
    printf("first letter: %d\n", (*b)[0]);
    printf("first letter: %c\n", (*p)[0]);

    printf("last letter: %c\n", (*p)[countmsg-1]);
    printf("prev to last letter: %c\n", (*p)[countmsg-2]);


    // printf("last letter: %s\n", (*p)[countmsg-1]);


    // if () {

    // }

    return 0;
}