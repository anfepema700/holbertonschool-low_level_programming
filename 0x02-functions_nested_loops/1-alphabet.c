#include "main.h"
/**
 **main - Write a function that prints the alphabet, in lowercase, followed by a new line
 **
 **Return_ 0 success
 **/


int print_alphabet(){

	char letter='a';

	while ( letter<='z'){
		putchar(letter);
		letter++;	
	}
	putchar('\n');
	return letter;
}


int main (void){

	alphabet();

}

