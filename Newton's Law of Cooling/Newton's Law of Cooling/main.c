//
//  main.c
//  Newton's Law of Cooling
//
//  Created by Isis-Gabrielle Rodney-Jones on 24/07/2022.
//

#include <stdio.h>
#include <math.h>
#define e 2.718281
int main(void)
{
    double troom, toven, tobj, q, t;
    printf("Enter the value for troom, toven, q and t:\n");
    scanf("%lf %lf %lf %lf", &troom, &toven, &q, &t);
    if((q<=0) || (t<=0) || (troom >= toven))
        printf("Error the values of q and t are negative");
    else
    {
        tobj = troom + ((toven - troom)*pow(e,-q*t));
        printf("The current temperature of the object is %f\n", tobj);
    }
    return 0;
}

