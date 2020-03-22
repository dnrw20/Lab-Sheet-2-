#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() //using int main because is expected return
{
    int a; //assigning integers
    int i;

    int primenos[50] = {0}; //inititate to 0 array and allocating up to 50 characters in this array
    int index = 2;

    printf("Hello,\nPlease find all prime numbers between 0 and 100 (inclusive)\nbased on the Sieve of Eratosthenes algorithm below:\n");

    bool isPrime; //using boleans to check if is the Prime number

    //trying to hardcore prime numbers

    primenos[0] = 2;
    primenos[1] = 3;

    for (a = 5; a <= 100; a = a + 2) // using the loop for  because is more compact way of writing the loop to find out the final answer
    { //using 5 as the initial value because is the first prime number after hardcored 2 and 3 above;a<=100 test condition of the loop to check before the loop runs each time;
        isPrime = true; //checking if is true

        for (i = 1; isPrime && a / primenos[i] >= primenos[i]; ++i)
            if (a % primenos[i] == 0)//using boolean 0 to indicate that the function is false after not meeting the true statements
                isPrime = false; //indication that is false

        if (isPrime == true)//conditions if the loop condition is true
        {
            primenos[index] = a;
            ++index;
        }
    }
    for (i = 0; i < index; ++i ) //using for loop again to print the value and continuously run the function until hundred
        printf ("%i   \n", primenos[i]);

    printf("Please don't try to put any integers because this programme is terminated,\nThank you\n");
    return 0; //return final statement
}

