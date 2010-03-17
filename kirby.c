#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int i = 0;
	char *kirby[2] = {"<(^_^<)", "(>^_^)>"};

	while (1) {
		fprintf(stdout, "%s", kirby[i]);
		fflush(stdout);
		sleep(1);
		fprintf(stdout, "\r");
		fflush(stdout);
		i = (i + 1) % 2;
	}

	return 0;
}
