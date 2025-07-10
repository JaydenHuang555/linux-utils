#include "stdio.h"
#include "unistd.h"
#include "fcntl.h"
#include "limits.h"
#include "stdlib.h"

const char *RAND_DEV = "/dev/urandom";

const unsigned long MAX = ULONG_MAX;

int urandom(unsigned long *gen) {
	int urand = open(RAND_DEV, O_RDONLY), exit = 0;
	if(urand < 0 ) {
		exit = -1;
	}

	if(read(urand, gen, sizeof(*gen)) != sizeof(*gen)) {
		exit = -2;
	}
	close(urand);

	return exit;
}

unsigned int apply(unsigned long num, unsigned long max, unsigned long min) {
	if(min == max) return min;
	if(min > max) {
		fprintf(stderr, "unable to apply max and min to given due to min > max\n");
		return -1;
	}
	return min + (num % (max - min + 1));
}

int main(int argc, char **argv) {
	
	unsigned long a, min, max;

	if(argc < 2) {
		min = 0;
		max = MAX;
	}

	if(argc < 3 || argc < 4) {
		char *s;
		min = strtoul(argv[1], &s, 10);
	}

	if(argc < 4) {
		char *s;
		max = strtoul(argv[2], &s, 10);
	}

	int stat = 0;
	if((stat = urandom(&a))) {
		fprintf(stderr, "failed with exit %d\n", stat);
		return stat;
	}
	return 0;
}
