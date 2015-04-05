#include <stdio.h>
#include <types.h>

hello__myint val=0;

void send(hello__myint* out_data)
{
	val++;
	*out_data=val;
	printf("send data %d\n",*out_data);
}

void recv(hello__myint in_data)
{
	printf("recv data %d\n",in_data);
}
