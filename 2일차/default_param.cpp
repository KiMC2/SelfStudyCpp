#include <iostream>

int TestFunc(int nParam = 10){
    return nParam;
}

int main(int argc, char *argv[]){
    
    // Default
    std::cout << TestFunc() << std::endl;

    // No Default
    std::cout << TestFunc(20) << std::endl;
}