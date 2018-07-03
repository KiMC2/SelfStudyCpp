#include <iostream>

using namespace std;

namespace TEST{
    void TestFunc(void){
        cout << nData << endl;  // error
    }   
    int nData = 100;
}

int nData = 200;

int main(int argc, char *argv[]){
    TEST::TestFunc();

    return 0;
}