/*a program that converts a length in feet, to a length in
centimeters.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Length_cm , Length_feet;
    printf("Hello, this program is used to convert units,\nPlease enter the length in feet : ");

    scanf("%f" ,&Length_feet);
    Length_cm=Length_feet*30.48;
    printf("length in cm is %f" ,Length_cm);
    return 0;
}
