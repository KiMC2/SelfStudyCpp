#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    int aList[5] = {10, 20, 30, 40, 50};

    for(auto a : aList){
        cout << a << endl;
    }
}