//
//  The C Programming Language, 2nd Edition, by Kernighan and Ritchie
//  Exercise 1.08 on page 20

//  Write a program to count blanks, tabs, and newlines.

//  Created by david barth on Monday24/10/2016.
//  Copyright © 2016 David Barth. All rights reserved.
//


#include <stdio.h>

int main(int argc, const char * argv[]) {
    int c, blanks, newline, tabs;
    blanks = 0;
    newline= 0;
    tabs = 0;
    while ((c = getchar()) !=EOF){
        if(c== '\t') ++tabs;
        if(c== ' ') ++blanks;
        if(c== '\n') ++ newline;
    
    }
    
    printf("%d%d%d\n",blanks,newline,tabs);
    
}
