#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    // 객체를 배열 형태로 동적 생서한다.
    int *arr = new int[5];
    for(int i = 0; i < 5; ++i){
        arr[i] = (i + 1) * 10;
    }
    for(int i = 0; i < 5; ++i){
        cout << arr[i] << endl;
    }
    delete[] arr;

    return 0;
}