#include <stdio.h>
#include <types.h>

hello__myint val=0;

void send(hello__myint* out_data)
{
	val++;
	*out_data=val;
	printf("send signal %d\n",*out_data);
}

void recv (void)
{	
	printf("recv signal\n");
}
