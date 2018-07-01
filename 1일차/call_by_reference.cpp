#include <iostream>

using namespace std;

void TestFunc(int &rParam){
    // 피호출자 함수에서 원본의 값을 변경한다.
    rParam = 100;
}

int main(int argc, char* argv[]){
    int nData = 0;

    cout << "Before nData : " << nData << endl;
    TestFunc(nData);
    cout << "After nData : " << nData << endl;

    return 0;
}