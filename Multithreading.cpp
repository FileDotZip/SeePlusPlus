#include <iostream>
#include <thread>

bool userInterupt = false;
void thread2(){

    std::cout << "Started Thread 2 on Thread ID " << std::this_thread::get_id() << "NEW THREAD START" <<std::endl;

    while(!userInterupt){
        std::cout << "Waiting for user input" << std::endl;
        std::this_thread::sleep_for (std::chrono::seconds(1)); //Sleeps thread so CPU doesnt go 100% just for this task. Very needed.
    }
    std::cout << "Wrapping up work on Thread 2 " << std::this_thread::get_id() << "NEW THREAD END" <<  std::endl;
}

int main(){
    std::cout << "Started Thread 1 on Thread ID " << std::this_thread::get_id() << std::endl;
    std::thread worker1(thread2);

    std::cin.get();
    userInterupt = true;

    worker1.join();
    std::cout << "Finished Thread 2.\n";

    std::cin.get();
}