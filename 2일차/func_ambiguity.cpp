#include <iostream>

void TestFunc(int a){
    std::cout << "TestFunc(int)" << std::endl;
}

void TestFunc(int a, int b = 10){
    std::cout << "TestFunc(int, int)" << std::endl;
}

int main(int argc, char *argv[]){
    TestFunc(5);     // Error
    TestFunc(5, 20); // Not Error

    return 0;
}