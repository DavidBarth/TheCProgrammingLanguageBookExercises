//
//  main.c
//  PrintFahrenheitToCelsius
//  PrintCelsiusToFahrenheit
//
//  Created by david barth on Tuesday18/10/2016.
//  Copyright © 2016 David Barth. All rights reserved.
//
#include <stdlib.h>
#include <stdio.h>


/* print Fahrenheit-Celsius table
 for fahr = 0,20,...,300
 formula: C = (5/9)*(F-32), F = C*(9/5)+32
 
 */

int main(int argc, const char * argv[]) {
    
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    printf("This is an F to C converter\n");
    
    fahr = lower;
    while (fahr<= upper){
        celsius = (5.0/9.0)*(fahr-32);
        printf("Fahr:%4.0f \t Celsius:%4.1f\n", fahr,celsius);
        fahr = fahr+step;
    }
    
    printf("\n");
    printf("This is a C to F converter\n");
    celsius = upper;
    lower = 0;
    
    while(celsius>=lower){
        fahr = celsius*(9.0/5.0)+32;
        printf("Celsius:%4.0f \t Fahr:%4.1f\n", celsius,fahr);
        celsius = celsius-step;
        
    }
}
