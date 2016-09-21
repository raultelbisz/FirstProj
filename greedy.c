#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    float change;
    int leftover;
    int c = 0;

    
   //Prompt for change
    do
    {
        printf ("How much change is owed? \n");
        change = GetFloat();
    }
    while (change <= 0);

    //Converts dollars to cents
    leftover = round(change * 100);
    
    while(leftover >= 25)
    {
        leftover = leftover - 25;
        c += 1;
    }
    
    while(leftover >= 10)
    {
        leftover = leftover - 10;
        c += 1;
    }
    
    while(leftover >= 5)
    {
        leftover = leftover - 5;
        c += 1;
    }
    
    while(leftover >= 1)
    {
        leftover = leftover - 1;
        c += 1;
    }
    
    printf("%d \n", c);
    
    return 0;

}