// +, -, *, /, %, ++, --
#include <stdio.h>

int main()
{
    int aval;
    int bval;
    int cval;
    
    printf("PLease enter 2 number: ");
    scanf("%d %d", &aval, &bval);
    
    cval = aval+bval;
    printf("%d + %d = %d or %d\n", aval, bval, aval+bval, cval);
    
    cval = aval-bval;
    printf("%d - %d = %d or %d\n", aval, bval, aval-bval, cval);
    
    cval = aval%bval;
    printf("\"%d %% %d\" = %d or %d\n", aval, bval, aval%bval, cval);
    //post increment operation
    printf("%d\n", aval++);// aval ++ = aval +1
    //pre increment operation
    printf("%d\n", ++aval);
    printf("%d\n", aval--);// aval -- = aval -
    printf("%d\n", --aval);
    
    // -=, +=,/=
    aval = 1;
    aval+= 34;// aval = aval + 34
    printf("%d\n", aval);
    aval-= 300; //aval = aval - 300
    printf("%d\n",aval);
    
    
    return 0;
}    
    
