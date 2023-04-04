/*
||, &&, 1 (!=), ==
*/
#include<stdio.h>

int main()
{
    int aval = 10; // aval is a true value
    int bval = 100; // bval is a true value
    int cval = 0; // bval is a false value
    char bchar = '\0';
    
    printf("a||b  %d\n", aval || bval); // one statement need to be true to have a 1 // 0 means both are false
    printf("b||c  %d\n", bval || cval); // || = or
    printf("a||c  %d\n", aval || cval);
    printf("c||c  %d\n", cval || cval);
    
    printf("a && b  %d\n", aval || bval); // both statement need to be true to have a 1 // 0 means one or both are false
    printf("b && c  %d\n", bval && cval);
    printf("a && c  %d\n", aval && cval);
    printf("c && c  %d\n", cval && cval);
    
    printf("!a: %d!c: %d , %d \n", !aval, !cval, !aval && !cval); // NOT operator , not  true to be aval ( flips the meaning of what we are asking so Cval would be 1 instead because it is a false normally
    
    printf(" a != b: %d\n", aval != bval); // value not equal to other one
    printf(" a == b: %d\n", aval == bval); // same value == equal comparison evaluation
    printf("%d\n", aval || bval && (cval || bval));
    
    
    printf("a > b %d\n", aval > bval); //a greater than b
    
    return 0;
}
    
