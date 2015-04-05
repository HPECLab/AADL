#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/utsname.h>
#include <sys/times.h>
#include <time.h>

struct utsname sysinfo;
struct tms t;

int main() {
	long i = sysconf(_SC_CLK_TCK);
	printf("the tick of clock per second is: %ld\n", i);
	while(1) {
		printf("%ld\n", times(&t) / i);
		sleep(1);
	}
	return 0;
}
