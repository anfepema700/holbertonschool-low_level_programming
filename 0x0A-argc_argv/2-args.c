#include "main.h"

/**
*main - print all value send in execute
*@argc: character check
*@argv: character check
*
*Return: 0 success
**/

int main (int argc, char *argv[])
{	
	int i; 

	for ( i = 0; i <= argc; i++)
	{
		printf("print argc: %d\n and value is: %s\n",i ,argv[i]);
	}	
}


