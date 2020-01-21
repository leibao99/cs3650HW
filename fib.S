.global main
.text

// int fib(int n)   
/*
    if (n <= 1)
        return n;
    else
        return fib(n-1) + fib(n-2);

        Variable Mapping:
        - n is %rdi
	    - temporaries are in %r10

*/

fib:
    enter $32, $0

    mov %rdi, %rax
    mov $2, %r11
    cqo
    idiv %r11   // does %rdx:%rax / ARG ; quot in %rax, rem in %rdx
    mov %rdx, %r10

    cmp $0, %r10
    je its_even