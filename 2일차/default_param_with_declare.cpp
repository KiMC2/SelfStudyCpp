#include <iostream>

using namespace std;

// 함수 원형에 디폴트 선언 가능. 하지만 독특하다.
int TestFunc(int = 10);

int TestFunc(int nParam){
    return nParam;
}

int main(int argc, char *argv[]){
    std::cout << TestFunc() << std::endl;
    std::cout << TestFunc(20) << std::endl;

    return 0;
}