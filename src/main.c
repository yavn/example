#include "stdio.h"

int main(int argc, char** argv)
{
	// I want it more pessimistic ;)
	printf("Hello, cruel world!\n");

	if (argc > 1)
		printf("Goodbye!\n");

	return 0;
}
