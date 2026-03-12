#include <cs50.h>
#include <stdio.h>

// Function prototypes
int check_luhn(long number);
int get_digit_count(long number);
int get_card_type(long number, int length);

int main(void)
{
    // Prompt user for credit card number
    long number = get_long("Number: ");

    // Get number of digits and Luhn validation result
    int length = get_digit_count(number);
    int is_valid_luhn = check_luhn(number);
    int card_brand = get_card_type(number, length);

    // Final validation: must pass Luhn and match a known brand criteria
    if (is_valid_luhn == 1)
    {
        if (card_brand == 1)
        {
            printf("AMEX\n");
        }
        else if (card_brand == 2)
        {
            printf("MASTERCARD\n");
        }
        else if (card_brand == 3)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}

// Counts how many digits the number has
int get_digit_count(long number)
{
    int count = 0;
    while (number > 0)
    {
        count++;
        number /= 10;
    }
    return count;
}

// Implements Luhn's Algorithm to validate the number
int check_luhn(long number)
{
    long sum_common = 0;
    long sum_multiplied = 0;
    int count = 0;

    while (number > 0)
    {
        count++;
        int digit = number % 10;

        // Multiply every other digit by 2, starting from the second-to-last
        if (count % 2 == 0)
        {
            int product = digit * 2;
            // Add the digits of the product (e.g., 12 becomes 1 + 2 = 3)
            sum_multiplied += (product % 10) + (product / 10);
        }
        else
        {
            // Add digits that weren't multiplied
            sum_common += digit;
        }
        number /= 10;
    }

    // If the total sum ends in 0, the number is valid
    if ((sum_common + sum_multiplied) % 10 == 0)
    {
        return 1;
    }
    return 0;
}

// Identifies the card brand based on length and starting digits
int get_card_type(long number, int length)
{
    // Reduce number to the first two digits
    while (number >= 100)
    {
        number /= 10;
    }

    long start_digits = number;

    // AMEX: 15 digits, starts with 34 or 37
    if (length == 15 && (start_digits == 34 || start_digits == 37))
    {
        return 1;
    }
    // MASTERCARD: 16 digits, starts with 51 through 55
    if (length == 16 && (start_digits >= 51 && start_digits <= 55))
    {
        return 2;
    }
    // VISA: 13 or 16 digits, starts with 4
    if ((length == 13 || length == 16) && (start_digits / 10 == 4))
    {
        return 3;
    }

    return 0; // Unknown or invalid brand
}
