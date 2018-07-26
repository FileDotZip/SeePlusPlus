#include <iostream>

int main(){
    int x = 5;                                              //this declares an int called x and sets it to 5;
    int* ptr = &x;                                          //this declares an pointer of the type int as it will be taking a memory value of x

    std::cout << "Value of x: " << x << std::endl;          //this prints the value of x we set.

    std::cout << "Memory address of x: " << &x << std::endl;//this prints a reference to the memory address of x;

    (*ptr)++;                                               //this takes x's memory address, (dereferences it) and adds 1 to it
    std::cout << "We add one to x: " << x << std::endl;     //this prints x's new value.
}

/*
I like to think of references as passing around a hot potato, nobody really holds onto it, but it *references* something we already know

Pointers are just ints which store a memory address in memory, we can store the memory address of a variable for the life of the program this way in another variable.

(0x7ffee45a3f0f)A = 0;

ptr = A;

ptr == 0x7ffee45a3f0f

"Yo dawg so we heard you like pointers, so we put a pointer in your pointer so you can track the pointer of your pointer."
Pointer to a pointer. Im not sure why you would need to use this but you can store the memory address of a pointer which
is already storing another memory address to another variable ((( 0x7ffee45a3f0f ) 0x7ffee45a3f0f ) 5 )
.                                                                 **ptr(to ptr)         *ptr        x
*/