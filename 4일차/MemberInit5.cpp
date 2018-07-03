#include <iostream>

class CTest
{
public:
    CTest() {}

    // C++11부터 선언과 동시에 멤버 변수를 초기화할 수 있다!
    int m_nData1 = 10;
    int m_nData2 = 20;

    void PrintData(void){
        cout << m_nData1 << endl;
        cout << m_nData2 << endl;
    }
};

int main(int argc, char *argv[]){
    CTest t;
    t.PrintData();

    return 0;
}