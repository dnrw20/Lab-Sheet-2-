#include <stdio.h>

int istrue(char *str); //assigning int is true to check if the word/string is a palindrome- reads the same backwards as forwards

int main() //using int main because is expected return
{
    char    a[100]={0}; //storing a word in this array only up to 100/allocates up to 100
    char    b; //using char b allocates one character
    int     c=0; //assigning c to continue calculating loop and incrementing until will be reach the end poin

    printf("Hello,\nPlease enter a word or number below to check if is a palindrome:\n");//asking for the direct input to improve robustness
    printf ("Please use only letters from the alphabet a-z, A-Z or positive numbers from 1 to 9.\nUnfortunately, symbols and negative numbers are not working in this converter and inputting them may give false results\n");
    while(1) //using while loop because runs code as long as its condition is true and our programme is seeking the anwer if the word is the palindrome
    { //using 1 in the while function because it is boolean TRUE and we are looking for the true statement in this loop
        b= getchar (); //looking final result of the

        if((b>='A' && b<='Z')||(b>='a' && b<='z') || (b>='1' && b<='9')) //assigning the integers used in the functions as the letters from the alphabet a-z,A-Z and numbers 1-9
            a[c++]=b; //condition of the loop which need to be true to be a palindrome
        else
            break; // if the condition is false break helps to skip the loop immediately and give the output to the user
    }
    a[c]='\0';

    if(istrue(a))//function to print true output
        printf("The answer is yes.\nThe input %s is a palindrome.\nPlease check the next string,thanks.\n",a);
    else //function else to print the false output to the use
        printf("Unfortunately not.\nThe input %s is not a palindrome\nPlease choose a different string, thanks.\n",a);

    getchar (); //showing final output
}

int istrue(char *str) //checking if the conditions are met and the string is the palindrome
{
    int l=0;
    int i,j=1;

    while(str[l]!='\0') l++; //using while function to find the possible false statement

    for(i=0; i<l; i++) //conditions of the function
    {
        if((str[0+i] != str[(l-1)-i])) // if the conditions are met the word is a false statement
        {
            j=0; //using booleans 0 to be false
            break;
        }
    }
    return (j); //return j possible false palindrome
}