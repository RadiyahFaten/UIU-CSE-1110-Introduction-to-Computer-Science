#include <stdio.h>
#include <math.h>
int main ()
{
    float today_rate, discount_rate, pur_amount, price, discount ;
    printf("The purchased amount of oil (Liter):");
    scanf("%f", &pur_amount);
    printf("Todays' rate per liter:");
    scanf("%f", &today_rate);
    price= pur_amount*today_rate;
    printf("Discount rate:");
    scanf("%f", &discount_rate);
    discount = (price*discount_rate) /100.0;
    printf("Discounted Amount: %f\n", discount);
    float discounted_price = price - discount;
    float vat = discounted_price* 0.20;
    float final_price = (discounted_price+vat+2);
    printf("The final price: %f\n", final_price);
    final_price = floor(final_price /100) * 100;
    printf("The final price for customer= %d",(int) final_price);

    return 0;
}
