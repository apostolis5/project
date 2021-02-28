#include "stats.h"

#include <limits.h>

// epistrefei 1 an value >= olwn twn stoixeiwn tou array
int greater_than_all(int value , int array[] , int size)
{
    int i;

        for ( i = 0; i < size ; i++)
        {
            if(value < array[i])  return 0;
        }
        
 return 1;
}




int find_max(int array[] , int size)
{
    int i;

        for ( i = 0; i < size; i++)
        {
            if( greater_than_all( array[i] ,array , size ) )
                return array[i] ;
        }
        

  return INT_MIN;  
}
