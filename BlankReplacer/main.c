//  The C Programming Language, 2nd Edition, by Kernighan and Ritchie
//  Exercise 1.09
//
//  BlankReplacer
//
//  Created by david barth on Monday24/10/2016.
//  Copyright © 2016 David Barth. All rights reserved.
//

#include<stdio.h>


int main(void)
{
    int c,lastc;
    
    lastc= '-';
    
    while((c=getchar())!=EOF)
    {
        if(c==' ')
        {
            if(lastc!=' ')
                putchar(c);
        }
        else
            putchar(c);
        
        lastc=c;
    }
   
}



    
    
    

