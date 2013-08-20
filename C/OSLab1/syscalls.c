
#include <mylib.h> 

int my_fork(void){
	return generic_syscall(2);       
}
int my_getpid(void){
	return generic_syscall(20);      
}
int my_getppid(void){
	return generic_syscall(64);      
}

