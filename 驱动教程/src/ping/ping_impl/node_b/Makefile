###################################################
# This Makefile has been generated automatically  #
# by the Ocarina AADL toolsuite.                  #
# Do not edit this file, all your changes will    #
# be overridden at the next code generation.      #
###################################################

#  Distributed application name : ping_impl
#  Node name                    : node_b
#  Execution platform           : native
#  Transport API                : TRANSPORT_USER

USER_OBJS =  ping.o \
	   devicesconf.o

MAINAPP = ping_impl
BINARY = node_b
TARGET = native
NEED_TRANSPORT = yes
RUNTIME_PATH=/Users/yj/software/ocarina/include/ocarina/runtime/polyorb-hi-c
USER_SOURCES_DIRS= "-I/Users/yj/work/aadl/bus"
ASN_SOURCES=
include $(RUNTIME_PATH)/make/Makefile.common

compile-c-files:
	$(CC) -c $(INCLUDE) $(CFLAGS) -I'/Users/yj/work/aadl/bus/' '/Users/yj/work/aadl/bus/ping.c' -o ping.o
	$(CC) -c $(INCLUDE) $(CFLAGS) -I'/Users/yj/work/aadl/bus/' '/Users/yj/work/aadl/bus/devicesconf.c' -o devicesconf.o

compile-cpp-files:

compile-ada-files:

prove:
	gnatprove -P$(PROJECT_FILE) --warnings=continue --report=fail
