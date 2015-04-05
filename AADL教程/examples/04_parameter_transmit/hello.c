#include <stdio.h>
#include <types.h>

hello__myint val = 0;

void init (void) {
	printf ("init\n");
}

void run1 (hello__myint* o) {
	*o = val++;
}

void run2 (hello__myint i) {
	printf ("%d\n", i);
}
