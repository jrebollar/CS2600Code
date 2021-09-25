#include <io.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
    // initiate random number generator
    time_t t;
    srand((unsigned) time(&t));

    // Declare my logic variables
    double meal_cost, tax_amount, tip_amount, total_amount;
    // Declare my input variables
    double tax_rate, tip_rate;

    // Randombly assign a value to meal_cost
    switch (rand() % 4) {
        case 0:
            meal_cost = 9.95;
            break;            
        case 1:
            meal_cost = 4.55;
            break;
        case 2:
            meal_cost = 13.25;
            break;
        case 3:
            meal_cost = 22.35;
            break;
    }

    // Take in input for tax_rate
    scanf("%lf", &tax_rate);
    // Take in input for tip_rate
    scanf("%lf", &tip_rate);

    // Logic
    // Calculate tax_amount
    tax_amount = meal_cost * (0.01 * tax_rate);
    // Calculate tip_amount
    tip_amount = meal_cost * (0.01 * tip_rate);
    // Calculate total_amount
    total_amount = meal_cost + tip_amount + tax_amount;
    
    //displaying result
    printf("The meal cost is: $%.2f", meal_cost);
    printf("\nThe tax amount is: $%.2f", tax_amount) ;
    printf("\nThe tip amount is: $%.2f", tip_amount);
    printf("\nThe total bill is: $%.2f", total_amount);
}