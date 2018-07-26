#include <iostream>

void swap(int&, int&);                                      //this is a declared function so main loop knows whats up.

int main(){
    int a = 5;                                              //int a = 5
    int b = -5;                                             //int b = -5
    
    std::cout << "a = " << a << " || b = " << b <<std::endl;//this prints a and b. (A = 5, B = -5)
    
    swap(a, b);                                             //This function is called which sends a and b to swap function below
    
    std::cout << "a = " << a << " || b = " << b <<std::endl;//This re prints a and b except this is run after we executed
}                                                           //our swap function (A = -5, B = 5)

void swap(int& x, int& y){                                  //(1)this function takes in A and B we passed in above as references instead of creating whole new variables and setting them to the value of what we pass in
    int z = x;                   //Here get a new "Buffer" variable which we put the value of x into                                 
    x = y;                       //here we set X to Y (or A to B)
    y = z;                       //Here we set Y to X (or B to A) using our handy Z variable we temporarily stored X(or A) in
}                                                           //(1)This way this function directly modifies int a & b declared in the main function.
