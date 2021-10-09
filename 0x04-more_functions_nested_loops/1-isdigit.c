#include "main.h"
/**
*_isdigit - function to identify if digit is true or false
*@c: checks variable
*Return: 0 success 
**/

int _isdigit(char c)
{   
    if  (isdigit(c))
    {
        return(1);
    }
    else
    {
       return(0);
    }

}