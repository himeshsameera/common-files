#ifndef __MYLIB__
#define __MYLIB__


/** 
 * Takes a pointer to a string and the size of the 
 * string as arguments. Prints the string to the 
 * Standard output and returns 0 on success -1 otherwise
 */
int my_print(char *str, int size);


int generic_syscall(int syscallid);


int my_fork(void);
int my_getpid(void);
int my_getppid(void);



#endif
