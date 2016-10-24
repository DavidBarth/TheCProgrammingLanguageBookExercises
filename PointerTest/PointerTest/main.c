//
//  main.c
//  PointerTest

//  Pointers and Memory by Nick Parlante from CS Education Library
//
//  Created by david barth on Friday21/10/2016.
//  Copyright © 2016 David Barth. All rights reserved.
//
    
#include <stdio.h>
    
int main(int argc, const char * argv[]) {
    int a = 1; //pointee
    int b = 2; //pointee
    int c = 3;
    int* p; //pointer
    int* q; //pointer
        
    p = &a; //p refer to a
    q = &b; //q refer to b
        
    c = *p; //p's pointee value is in c now
    p = q;  //p shares with q (p's pointee is now b)
    *p = 13; //dereference p to set its pointee (b) to 13 (8 is now 13)
      
    printf("a: %d\nb: %d\nc: %d\n",a,b,c);
    printf("p: %d\nq: %d\n",*p,*q);
        
        
}

