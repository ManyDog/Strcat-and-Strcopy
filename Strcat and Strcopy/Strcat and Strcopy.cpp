// Strcat and Strcopy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "ctype.h"
#include "string.h"
#include "math.h"


int main()
{
	char ham[100] = "Hey ";
	strcat_s(ham, "ManyDog ");
	strcat_s(ham, "you ");
	strcat_s(ham, "smell ");
	printf_s("%s\n", ham);

	strcpy_s(ham, "ManyDog is awesome");//This will take any code from strcat and will go under the old code writings with this new code
	printf_s("%s\n", ham);
	/*char a = 'a';
	char b = 'F';
	char c = '3';

	printf_s("%c\n", toupper(a) );//toupper will make any lowercase letter into uppercase
	printf_s("%c\n", toupper(b) );//if already uppercase then it will print the same
	printf_s("%c\n", toupper(c) );*/
    return 0;
}

