// Function Pointers in C/C++
#include <stdio.h>

int Add(int a, int b) {
    return a+b;
}

void PrintHello(char *name) {
    printf("Hello %s\n", name);
}

int main() {

    int c;
    /**
     * Pointer to function that should take
     * (int, int) as argument/parameter and return int
     */
    int (*p)(int, int);
    p = Add; // or p = &Add // function name will return us pointer
    c = (*p)(2,3); // or p(2,3) // dereferencing and executing the function
    printf("%d\n",c);
    
    void (*ptr)(char*);
    ptr = PrintHello;
    ptr("You");
}