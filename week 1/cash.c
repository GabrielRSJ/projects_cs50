#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int cash);

int calculate_dimes(int cash);

int calculate_nickels(int cash);

int calculate_pennies(int cash);

int main(void)
{
    int res;
    int cash;
    do
    {
        cash = get_int("Change owed: ");
    }
    while (cash < 0);

    int quarters = calculate_quarters(cash);
     cash = cash - (quarters * 25);
    int dimes = calculate_dimes(cash);
    cash = cash -(dimes * 10);
    int nickels = calculate_nickels(cash);
    cash = cash - (nickels * 5);
    int pennies = calculate_pennies(cash);
    cash = cash - (pennies * 1);

    res = quarters + dimes + nickels + pennies;
    printf("%i\n", res);

}

int calculate_quarters(int cash)
{
    int quarters = 0;
    while(cash >= 25)
    {
        quarters++;
        cash = cash - 25;
    }
    return quarters;
}

int calculate_dimes(int cash)
{
    int dimes = 0;
    while(cash >= 10)
    {
        dimes++;
        cash = cash - 10;
    }
    return dimes;
}

int calculate_nickels(int cash)
{
    int nickels = 0;
    while(cash >= 5)
    {
        nickels ++;
        cash = cash - 5;
    }
    return nickels;
}

int calculate_pennies(int cash)
{
    int pennies = 0;
    while(cash >= 1)
    {
        pennies++;
        cash = cash - 1;
    }
    return pennies;
}
