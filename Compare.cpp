#include <iostream>

int max(int, int);

int input1;
int input2;

int compare;

int main(){
    std::cout << "Give me two numbers and I will give you the highest of the two." << std::endl;
    std::cin >> input1 >> input2;
    compare = max(input1, input2);

    std::cout << "The highest number you gave me was " << compare << std::endl;
    return 0;
}

int max(int a, int b){
    if(a > b){
        return a;
    }
    else
    return b;
}