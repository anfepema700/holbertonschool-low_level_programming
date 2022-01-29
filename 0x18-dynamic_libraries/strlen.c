#include "main.h"

/**
*int _strlen - length of a string. 
*@s: variable check
*return: 0 success. 
**/

int _strlen(char *s)
{
    int i;
    int a;
    
    a=0;
    for (i =0; *(s + i)!='\0'; i++)
    {
        a++;
    }
    return(a);  
  }
