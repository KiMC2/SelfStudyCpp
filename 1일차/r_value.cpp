#include <iostream>
using namespace std;

int TestFunc(int nParam){
    int nResult = nParam * 2;
    return nResult;
}

// r-value는 임시결과로 사라지는 value에 참조를 할 수 있다는 것
int main(int argc, char *argv[]){
    int nInput = 0;
    cout << "Input number : ";
    cin >> nInput;

    // 산술 연산으로 만들어진 임시 객체에 대한 r-value 참조
    int &&rdata = nInput + 5;
    cout << rdata << endl;
    rdata += 5;
    cout << "nInput : " << nInput << endl;
    cout << "rdata : " << rdata << endl;
    
    // 함수 변환으로 만들어진 임시 객체에 대한 r-value 참조
    int &&result = TestFunc(10);

    // 값을 변경할 수 있다.
    result += 10;
    cout << result << endl;

    return 0;
}