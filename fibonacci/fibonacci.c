#include <stdio.h>

int fibonacci(int max_fib) {
    int ret_fib;
    
    int a;
    int b;

    a = 0;
    b = 1;

    while (max_fib > 1){
        ret_fib = a + b;
        a = b;
        b = ret_fib;
        max_fib--;

    }
    
    return(ret_fib);
}


int main(void) {
    int fib;
    
    fib = fibonacci(6);
    printf("%i\n", fib);
    return(0);
}