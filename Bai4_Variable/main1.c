#include <stdio.h>
#include <stdint.h>

extern void count(); 
extern uint8_t temp;


int main()
{
    count();
    count();

    printf ("temp= %d",temp ); 
    return 0;
} 