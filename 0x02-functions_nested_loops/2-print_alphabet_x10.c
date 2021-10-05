#include <stdio.h>

/**
 **main - Write a function that prints the alphabet, in lowercase, followed by a new line
 **
 **Return_ 0 success
 **/


int alphabet_ten(){

	char letter='a';
	int a=1;
	
	
	while ( letter<='z'){
		putchar(letter);
		letter++;	
	};
	putchar('\n');
	return letter;
}


int main (void){

	for (int a=1;a<=10;a++){
	alphabet_ten();
	}
}

