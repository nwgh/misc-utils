#include <stdio.h>

int
main(void)
{
	printf("Type\t\tSize (bytes)\n\n");
	printf("int\t\t%d\n", sizeof(int));
	printf("short\t\t%d\n", sizeof(short));
	printf("long\t\t%d\n", sizeof(long));
	printf("long long\t%d\n", sizeof(long long));
	printf("float\t\t%d\n", sizeof(float));
	printf("double\t\t%d\n", sizeof(double));
	printf("char\t\t%d\n", sizeof(char));
	printf("pointer\t\t%d\n", sizeof(void *));
	return 0;
}
