// ZEINAB BABA AHMED
#include<stdio.h>
#include<cs50.h>
int main()
{
    int coin=0;
    float amount;
    amount = get_float("Give amount in Fcfa \n");
    while(amount>=500)
    {
        coin++;
        amount = amount - 500;
    }
    while(amount>=250)
    {
        coin++;
        amount = amount - 250;
    }
    while(amount>=200)
    {
        coin++;
        amount = amount - 200;
    }
    while(amount>=100)
    {
        coin++;
        amount = amount - 100;
    }
    while(amount>=50)
    {
        coin++;
        amount = amount - 50;
    }
    while(amount>=25)
    {
        coin++;
        amount = amount - 25;
    }
    while(amount>=10)
    {
        coin++;
        amount = amount - 10;
    }
    while(amount>=5)
    {
        coin++;
        amount = amount - 5;
    }
    printf("we needs %d coins \n",coin);
}
