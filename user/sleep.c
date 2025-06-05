#include "kernel/types.h"
#include "user/user.h"
#include "kernel/fcntl.h"


int
main(int argc, char *argv[])
{
  int i;

  if(argc < 2){
    fprintf(2, "you should give sleep time in seconds\n");
    exit(1);
  }
  
  if(!(i = atoi(argv[1]))){
    fprintf(2, "the second para is should be a number or greater than 1\n");
    exit(1);
  }
  
  i = sleep(i * 10);
  exit(0);
}

