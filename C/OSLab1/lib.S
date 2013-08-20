.text

.global my_print

.global generic_syscall
	
my_print:
	mov  $4, %eax 		# 
        mov  $1, %ebx		# 
        mov  8(%esp), %edx	#Set register values
        mov  4(%esp), %ecx	#	
		
        int  $0x80		# System call
        cmp  %edx, %eax		

	je done	
        mov  $-1, %eax         	
	ret

done:
        mov  $0, %eax         	
	ret	

generic_syscall :
	mov 4(%esp), %eax
        int $0x80	
	ret	
					

