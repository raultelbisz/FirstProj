#include <stdio.h>
#include <cs50.h>

int main(void)
{   
    int x;
    int b;
    do
    {
        printf("Give me the length of your shower in minutes: \n");
        x = GetInt();
        b = x*12;
    }
    while (x <= 0);
    
    printf("In %i minutes you consumed %i bottles of water.\n", x, b);
}
