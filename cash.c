#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("Quarters: %i\n", quarters);
    printf("Dimes: %i\n", dimes);
    printf("Nickels: %i\n", nickels);
    printf("Penies: %i\n", pennies);
}

int get_cents(void)
{
    int c;
    do
    {
         c = get_int("Cents Owed:");
    }
    while (c < 0);

    return c;
}

int calculate_quarters(int cents)
{
    int q = 25;
    int qt = 0;

    if (cents >= q)
    {
             do
    {
        cents = cents - q;
        qt++;
    }
    while (cents >= q);
    }

    return qt;
}

int calculate_dimes(int cents)
{
    int d = 10;
    int dt = 0;

    if(cents >= d)
    {

    do
    {
        cents = cents - d;
        dt++;
    }
    while (cents >= d);
    }

    return dt;
}

int calculate_nickels(int cents)
{
    int n = 5;
    int nt = 0;

    if(cents >= n)

    {
    do
    {
        cents = cents - n;
        nt++;
    }
    while (cents >= n);
    }

    return nt;
}

int calculate_pennies(int cents)
{
    int p = 1;
    int pt = 0;

    if(cents >= p)
    {
        do
    {
        cents = cents - p;
        pt++;
    }
    while(cents >= p);

    }
    return pt;
}
