        //  edw ginetai to implementation ths function find_max() pou exoume kanei declare sto stats.h



#include <limits.h>     //apo ekei pairnoume to INT_MIN

      
int find_max(int array[] , int size)
{
    int i;
    
            int temp = INT_MIN; //  auto ginetai an size==0  na mhn epistrepsei fault
                                //  an den einai adeios tote sthn ousia bainei to proto stoixeio max opote ginetai swsta h diadikasia         

            for ( i = 0; i < size ; i++)
                if(array[i] > temp)   temp = array[i];
        
            

 return temp;
}
