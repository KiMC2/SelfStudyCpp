#include <iostream>

using namespace std;

class CTestData
{
public:
    CTestData(int nParam) : m_nData(nParam)
    {
        cout << "CTestData(int)" << endl;
    }
    CTestData(const CTestData &rhs) : m_nData(rhs.m_nData)
    {
        cout << "CTestData(const CTestData &a)" << endl;
    }

    // 읽기 전용인 상수형 메서드
    int GetData() const { return m_nData; }

    // 멤버 변수에 쓰기를 시도하는 메서드
    void SetData(int nParam) { m_nData = nParam; }

private:
    int m_nData = 0;
};

// 매개변수가 CTestData 클래스 형식이므로 복사 생성자가 호출 된다.
void TestFunc(CTestData param)
// 참조자를 통해서 복사를 하지 않고 참조만 한다.
// 하지만 호출 시 참조형인지 복사해서 넣는지 모를 것이다.
// 그래서 포인터 형식으로 변경할 수 있으나 댕글링 포인터나 최적화 문제를 겪을 수 있다. void TestFunc(CTestData *param)
// 따라서 참조형을 쓰되 값을 변경하지 못하도록 해야한다. void TestFunc(const CTestData &param)
// void TestFunc(CTestData &param)
{
    cout << "TestFunc()" << endl;

    // 피호출자 함수에서 매개변수 인스턴스의 값을 변경한다.
    param.SetData(20);
}

int main(int argc, char *argv[]){
    cout << "*****Begin******" << endl;
    CTestData a(10);
    TestFunc(a);

    // 함수 호출 후 a의 값을 출력한다.
    cout << "a: " << a.GetData() << endl;

    cout << "*****End*****" << endl;

    return 0;
}