/*A simple calculator that perform simple calculation between two numbers.
Author:     wyclif Omondi
Compiler:   GNU GCC
License:    MIT
Date:       July 20222
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //V declaration
    float quotient, division;
    int  sum, difference, product, modulus, FirstNo, SecondNo;
    printf("\tcalculator!\n");
    //Inputs
    printf("Enter the two numbers!\n");
    scanf("%d%d", &FirstNo, &SecondNo);
    quotient = SecondNo / (float)FirstNo;
    division = FirstNo / (float)SecondNo;
    //Calculation
    sum = FirstNo + SecondNo;
    difference = FirstNo - SecondNo;
    product = FirstNo * SecondNo;
    modulus = FirstNo % SecondNo;
    //Output
    printf("quotient %.2f\n",quotient);
    printf("division %.2f\n",division);
    printf("sum %d\n",sum);
    printf("difference %d\n",difference);
    printf("product %d\n",product);
    printf("modulus %d\n", modulus);

    return 0;
}
