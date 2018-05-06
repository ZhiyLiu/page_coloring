#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

int main()
{
  long int rc = syscall(317); // get color sys_call
  if(rc == 0)
    printf("get color called\n");
  else
    printf("get color failed\n");

  rc = syscall(316); // set color sys_call
  
  if(rc == 0)
    printf("set color called\n");
  else
    printf("set color failed\n");

  return 0;

}
