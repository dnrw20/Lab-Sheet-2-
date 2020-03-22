#include <stdio.h>
#include <math.h> //using pow function


int main() //this function returns an int value
{  int o = 0; // assigning o as the octal number which will be inputted from the user
    int d= 0; // assigning d as the decimal number- the final result of the conversion
    int i=0; // assigning i to continue calculating loop and incrementing until will be reach the end point

    printf("Hello,\nThat's the converter of the octal number into the decimal number.\nThis programme accepts only positive numbers and trying to input any negative numbers,letters or symbols may show biased output.\nPlease put your input below.\n"); //asking for the input and indicating that only positive numbers are allowed in order to increase robustness
    scanf("%d",&o); // using scanf function so the user can input the initial value and update the contents of the function

    while (o!=0)// using factorial from maths to calculate converter and as the loop condition; using while loop because runs code as long as its condition is true
    {
        d = pow(8, i++)*(o % 10)+d; //mathematical calculation to show the result of the conversion based on the "A regular octal number is the sum of the digits multiplied with 8n and then decimal based on the 10n ie 275 is 8pow0,8pow1,8pow2, added up and mulptiplied by integers of 275
        o = o/10;
        continue; // continue the loop until the statement will be true
    }
    printf ("The answer is %d\n", d); //printing the final answer of the conversion
    printf ("Thank you for using our converter.\nThis programme is terminated.\nBye!\n");
    getchar();// returns value for the user
}