#include <stdio.h>

#include "stats.h" // ekei kanoume declare th function


int main(void)
{           
                    putchar('\n');
                    putchar('\n');


    int array[] = { 1 ,5 , 10 ,8} ;
    int size = 4 ;

        int max = find_max(array , size); // yparxei  sta stats.h kai stats.c

            printf(" max:  %d \n" , max);



putchar('\n');
putchar('\n');
return 0;    
}


//  sto terminal me thn edolh     make run       trexeis thn parapanw main() me ta modules opws exoun organw8ei se xexorista directories 
// sto terminal sto path :  ..../programs/minmax   trexeis to make run

// solved