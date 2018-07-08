#include <iostream>

using namespace std;

class CTest
{
public:
    CTest(int nParam) { m_nCount++; }
    void ResetCount() { m_nCount = 0; };

    static int GetCount()
    {
        return m_nCount;
    };
private:
    // 정적 멤버 변수는 선언과 정의를 반드시 분리!!
    static int m_nCount;
};

int CTest::m_nCount = 0;

int main(int argc, char *argv[]){
    CTest a(5), b(10);

    // 정적 멤버에 접근
    cout << a.GetCount() << endl;
    b.ResetCount();

    // 정적 멤버에 접근. 인스턴스 없이도 접근 가능!
    cout << CTest::GetCount() << endl;

    return 0;
}