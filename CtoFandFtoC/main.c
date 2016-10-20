//
//  main.c
//  PrintFahrenheitToCelsius
//  PrintCelsiusToFahrenheit

//  The C Programming Language Book by Brian W. Kernigan and Dennis M. Ritchie
//  Book exercises

//  Created by david barth on Tuesday18/10/2016.
//  Copyright © 2016 David Barth. All rights reserved.
//
#include <stdlib.h>
#include <stdio.h>


//symbolic constants
#define LOWER 0 /*lower limit of table*/
#define UPPER 300 /*upper limit of table*/
#define STEP 20 /*step size*/


/* print Fahrenheit-Celsius and Celsius-Fahrenheit table
 for fahr = 0,20,...,300
 formula: C = (5/9)*(F-32), F = C*(9/5)+32
 
 */

int main(int argc, const char * argv[]) {
    
    int fahr;
    
    printf("This is an F to C converter\n");
    for(fahr = LOWER;fahr <= UPPER; fahr= fahr+STEP){
        
        printf("Fahr:%4d \t Celsius:%4.1f\n", fahr,(5.0/9.0)*(fahr-32));
        
    }
    
    int lower, upper, step;
    int celsius;
    upper = 300;
    step = 20;
    
    printf("\n");
    printf("This is a C to F converter\n");
    celsius = upper;
    lower = 0;
    
    while(celsius>=lower){
        fahr = celsius*(9.0/5.0)+32.0;
        printf("Celsius:%4d \t Fahr:%4d\n", celsius,fahr);
        celsius = celsius-step;
        
    }
}
