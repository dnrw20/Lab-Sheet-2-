#include<stdio.h>
#include<string.h>

int main() //using int main because is expected return
{

    int a, b; //assigning int a as the initial word and the int b as the reverse word
    char wordtoreverse[100]; //storing a reverse word in this array only up to 100
    printf("Hello\n");
    printf ("Please use only letters from the alphabet a-z, numbers or symbols.\n"); //asking for the direct input to improve robustness
    printf("Insert your word to reverse below:\n "); //using printf function to ask user for the input to calculate reverse word
    scanf( "%s", wordtoreverse ); // using scanf function so the user can input the initial value and update the contents of the array
    printf("Please find your word below:\n");

     a = strlen(wordtoreverse);//using strlen function to calculate length of the string
    for(b = a - 1; b >= 0; b--) // using for loop because is more compact way of writing the loop to find out word to reverse
    {                           //// b=a-1 initializes the loop variable to reverse the string; b>=0 this part will be checked every time before loop starts; b-- this will run after each loop to reverse the whole word
        printf("%c", wordtoreverse[b]); // printing the output- of the reverse word, using stored int b in the char wordtoreverse
    }       // only one line in body so could be skipped but it remaind to not occur any errors accidentally
    printf("\n"); // adding newline
    printf("Thank you, have a nice day!"); //good bye comment

    getchar(); // returns value for the user
}