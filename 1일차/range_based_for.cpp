#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    int a_list[5] = {10, 20, 30, 40, 50};
    
    // 전형적인 C 스타일 반복문
    for(int i = 0; i < 5; ++i){
        a_list[i] = i;
        cout << a_list[i] << ' ';
    }
    cout << endl;

    // 범위 기반 C++11 스타일 반복문
    // 각 요소의 값을 n에 복사한다.
    for(auto n : a_list){
        n = n * 2; 
        cout << n << ' ';
    }
    cout << endl;

    // 위 경우에는 값을 변경해도 참조한 것이 아닌 복사이기 때문에 값이 그대로 나온다.
    for(auto n : a_list){ 
        cout << n << ' ';
    }
    cout << endl;

    // n은 각 요소에 대한 참조다.
    for(auto &n : a_list) {
        n = n * 3;
        cout << n << ' ';
    }
    cout << endl;

    // 참조이기 때문에 값의 변경이 나타난다.
    for(auto n : a_list){
        cout << n << ' ';
    }
    cout << endl;

    return 0;
}