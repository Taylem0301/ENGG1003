#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    float y;    //assign float variables

    printf("Enter a Number: ");
    scanf("%f", &x);  // replace %d with %f to reaf float not int

    y = x/(1-x); //equation


    printf("y: %f\n", y); //print answer
    printf("For y = x/(1-x)");  // shows equation
    return 0;
}
