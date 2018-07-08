#include <iostream>

using namespace std;

void TestFunc(int nParam)
{
    cout << nParam << endl;
}

int main(int argc, char *arv[]){
    TestFunc(10);
    TestFunc(5.5);
}