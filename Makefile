CFLAGS := -O2
INC := -I. -I/usr/src/linux/include
CC := i686-pc-linux-gnu-gcc

ifneq ($(V),)
	CFLAGS += -Wall
endif

all: pp

pp: pp.c
#	echo $(CC) $(CFLAGS) $(INC)
	$(CC) $(CFLAGS) $(INC) -o pp pp.c 
    
clean:
	rm -f pp

