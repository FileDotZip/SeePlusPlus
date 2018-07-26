#include <iostream>

void swap(int&, int&);

int main(){
    int a = 5;
    int b = -5;
    
    std::cout << "a = " << a << " || b = " << b <<std::endl;
    
    swap(a, b);
    
    std::cout << "a = " << a << " || b = " << b <<std::endl;
}

void swap(int& x, int& y){
    int z = x;
    x = y;
    y = z;
}
