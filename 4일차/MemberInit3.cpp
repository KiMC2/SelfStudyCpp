#include <iostream>

using namespace std;

// 제작자 코드
class CTest
{
public:
    CTest()
    {
        m_nData = 10;
    }

    int m_nData;

    // 멤버 함수 선언. 정의는 분리했다!
    void PrintData(void);
};

void CTest::PrintData(void)
{
    cout << m_nData << endl;
}

int main(int argc, char *argv[])
{
    CTest t;
    t.PrintData();

    return 0;
}