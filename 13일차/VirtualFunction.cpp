#include <iostream>

using namespace std;

class CMyData
{
public:
    virtual void PrintData()
    {
        cout << "CMyData: " << m_nData << endl;
    }

    void TestFunc()
    {
        cout << "***TestFunc()***" << endl;

        PrintData();
        cout << "**************" << endl;
    }

protected:
    int m_nData = 10;
};

class CMyDataEx : public CMyData
{
public:
    virtual void PrintData()
    {
        cout << "CMyDataEx: " << m_nData * 2 << endl;
    }
};

int main(int argc, char *argv[])
{
    CMyDataEx a;
    a.PrintData();

    CMyDataEx &b = a;

    // 중요 : 참조 형식에 상관없이 실 형식의 함수가 호출된다.
    b.PrintData();

    // 늘 마지막에 재정의된 함수가 호출된다.
    a.TestFunc();
}