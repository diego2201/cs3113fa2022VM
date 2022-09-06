#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265358979
#define HALFOF(x) x/2
#define TRUE 1
#define FALSE 0

int main(int argc, char** argv, char** envp)
{
	printf("Hello, World!\n");

	// What is argc?
	printf("argc: %d\n", argc);

	// Argv?? Lets see it
	for(int i = 0; i < argc; ++i)
	{
		printf("\targv [%d]: %s\n", i , argv[i]);
	}	

	// envp???
	for(int i = 0; i < argc; ++i)
	{
		printf("\tenvp[%d]: %s\n", i, envp[i]);
	}	
	/*
	printf("PI: %f", PI);
	printf("half of 100000: %d", HALFOF(100000));
	*/

	// Variables/types??
	/*
	 * int 
	 * char
	 * long
	 * short
	 * double
	 * long long
	 * byte
	 * unsigned char 
	 * unsigned int
	 * float
	 */

	short one = 65530+1;
	printf("1 = %d\n", one);

	

	return 0;
}
