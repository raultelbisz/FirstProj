#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get credit card number
    printf("Number: \n");
    long long c_num = GetLongLong();
    
    //Checks if it's AMEX
    if (c_num >= 340000000000000 && c_num <= 349999999999999)
    {
        printf("AMEX\n"); 
    }
    if (c_num >= 370000000000000 && c_num <= 379999999999999)
    {
        printf("AMEX\n");
    }
    
    //Checks if it's MasterCard
    if (c_num >= 5100000000000000 && c_num <= 5599999999999999)
    {
        printf("MasterCard\n");
    }
    
    //Checks if it's Visa
    if (c_num >= 4000000000000 && c_num <= 4999999999999)
    {
        printf("VISA\n");
    }
    if (c_num >= 4000000000000000 && c_num <= 4999999999999999)
    {
        printf("VISA\n");
    }
    
    //Checks if it's Invalid
    if (c_num <= 4000000000000 || c_num >= 5599999999999999)
    {
        printf("Invalid\n");
    }
}