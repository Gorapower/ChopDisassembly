#include <stdio.h>
#include "arraylist.h"

Arraylist test;

int main(int argc, char *argv[])
{
    // Read file and get the info

    //End Reading
    arraylist_add(test,"hola");
    arraylist_add(test," mundo");
    for(int i=0;i<arraylist_size(test);i++){
        printf(arraylist_get(test,i));
    }
    return 0;

}
