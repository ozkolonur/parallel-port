

#include <unistd.h>
#include <signal.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include <strings.h>


#define PP_DEVICE	"/dev/parport0"

#define PP_BASE_ADDR 	0x278
#define PP_DATA_OFF 	0
#define PP_STATUS_OFF 	1
#define PP_CONTROL_OFF 	2	

unsigned long pp_base = PP_BASE_ADDR;




int main(int argc, char *argv[])
{

    if(ioperm(pp_base, 4 /* num addr */, 1 /* perm */)){
        printf("No permission for parport!\n");
        return 1;
    }
    
    outb(0xff,pp_base + PP_DATA_OFF);
    outb(0xff,pp_base + PP_CONTROL_OFF); 


    return 0;    
}


