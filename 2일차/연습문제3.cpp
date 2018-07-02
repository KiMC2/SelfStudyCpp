#include <iostream>
#include <typeinfo>       // operator typeid

using namespace std;

int main(int argc, char *argv[]){
    char *str = new char[12];

    cin >> str;
    cout << str << endl;

    //str = "Hello World"; // 이러면 어째서인지 할당된 것이 해제가 안된다. 새로운 타입이 되나..

    // cout << typeid(str).name() << endl;     // Pc
    // cout << typeid("hello").name() << endl; // A6_c

    delete[] str;
    return 0;
}