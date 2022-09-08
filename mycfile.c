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
	// Is an array of strings
	for(int i = 0; i < argc; ++i)
	{
		printf("\targv [%d]: %s\n", i , argv[i]);
	}	

	// envp???
	for(int i = 0; i < argc; ++i)
	{
		// \t is a tab character
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

	char c;
	long myLong;
	int myInt;
	float myFloat;
	double myDouble;
	
	printf("s(char): %ld\n", sizeof(c));
	printf("s(char): %ld\n", sizeof(myInt));
	printf("s(char): %ld\n", sizeof(myLong));
	printf("s(char): %ld\n", sizeof(myFloat));
	printf("s(char): %ld\n", sizeof(myDouble));
	
	// ++i vs i++
	int i;
	i = 0;
	printf("i post: %d\n", ++i);
	i = 0;
	printf("i pre: %d\n", i++);

	// Pointers
	int box;
	//int box2
	box = 0xA;

	printf("box: %d\n", box);
	printf("size box: %ld\n",sizeof(box));
	printf("pointer to box: %p\n", &box);
	//printf("pointer to box: %p\n", &box2);	
	
	int *label;
	label = &box;
	printf("size *int: %ld\n", sizeof(label));
	
	*label = 0x10;
	printf("%d %d\n", box, *label);	
	
	int **qrcode = &label;
	printf("%d %d %d\n", box, *label, **qrcode);

	return 0;
}
