#include <iostream>

using namespace std;

class CTest
{
public:
    // 디폴트 생성자 선언 및 정의!
    CTest(void) = default;
    
    // 다른 생성자를 생성할 떄 디폴트 생성자가 사라짐을 명시적으로 표현하는 방법
    // CTest(void) = delete;

    int m_nData = 5;
};

// 클래스 외부에서 디폴트 생성자 정의
// CTest::CTest(void) { }

int main(int argc, char *argv[])
{
    CTest a;
    cout << a.m_nData << endl;

    return 0;
}