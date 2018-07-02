#include <iostream>

using namespace std;

void Swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

int main(int argc, char* argv[]){
    int a = 2;
    int b = 3;

    cout << "Before (a, b) = " << "(" << a << ", " << b << ")" << endl;
    Swap(a, b);
    cout << "After (a, b) = " << "(" << a << ", " << b << ")" << endl;

}