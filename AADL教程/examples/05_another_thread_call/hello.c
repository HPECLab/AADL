#include <stdio.h>
#include <types.h>
#include <request.h>
#include <deployment.h>

hello__myint val = 0;

void init (void) {
	printf ("init\n");
}

void send (__po_hi_task_id self) {
	__po_hi_request_t req;
	req.vars.send_global_o.send_global_o = ++val;
	printf ("send out val: %d\n", val);
	__po_hi_gqueue_store_out(self, send_local_o, &req);
}

void recv (__po_hi_task_id self, hello__myint i) {
	printf ("recv val: %d\n", i);
}
