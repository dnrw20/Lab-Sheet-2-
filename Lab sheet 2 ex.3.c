#include <stdio.h>

int main() { //using int main because is expected return
    int a, lineup, b, c, m,n; //using a as the rows and lineup as the space after every row and m n as the input from the user
    printf("Hello,\nPlease enter only positive numbers to show Christmas tree.\nAny negative number,letter or symbol will be not accepted in this programme and might show biased output.\nThank you for your cooperation.\n"); //printing the statement to ask for the input from the user and also indication what input is allowed in this programme to increase robustness
    scanf("%d %d", &m, &n);// using scanf function so the user can input the initial value and update the contents of the functions below
                            //using m n as the int values for the Christmas tree

    for (a = 0;a<m;a++) // for(b = a - 1; b >= 0; b--) // using for loop because is more compact way of writing the loop to find out the shape of the Christmas Tree
        //assgning that a<m as the condition of the loop
        { for (lineup = 0; lineup <m-a; lineup++)
        {
            printf("  ");   //print the space after every row to see the pyramid shape
        }
        for (b=0;b<=a;b++)
        {
            printf("*"); //print asterisk
        }
        for (c=1; c<=2*a; c++)  //conditions for the printing asterisks
        {
            printf("*"); //print asterisk
        }
        printf("\n"); //printing newline
    }

    for (a=0; a<n; a++) { // conditions for the trunk
        {
            for (lineup= 0; lineup<=n; lineup++) {
                printf("  "); //printing space to keep the shape
            }
        }
        printf("***"); // printin *** because it is required to see 3 asterisks in the trunk
        printf("\n"); //printinf newline
    }
    printf("  Merry Christmas!\n"); //printing greetings


    getchar(); //using getchar to show final result
}