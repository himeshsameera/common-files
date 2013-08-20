#include <mylib.h>
#include <stdio.h>

int main()
{
  if(my_fork()) { 
    printf("I'm parent: My PID=%d\n",my_getpid());
  }
  else { 
    printf("I'm child: My PID=%d and my parent %d\n",
	   my_getpid(), my_getppid());
  }
}
      
    
