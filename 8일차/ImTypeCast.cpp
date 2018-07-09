#include <iostream>

using namespace std;

class CTestData{
public:
    // 매개변수가 하나뿐인 생성자는 형변환이 가능하다.
    CTestData(int nParam) : m_nData(nParam)
    {
        cout << "CTestData(int)" << endl;
    }

    CTestData(const CTestData &rhs)
    : m_nData(rhs.m_nData)
    {
        cout << "CTestData(const CTestData &)" << endl;
    }

    ~CTestData()
    {
        cout << "~CTestData()" << endl;
    }
    
    int GetData() const { return m_nData; }
    void SetData(int nParam) { m_nData = nParam; }

private:
    int m_nData = 0;
};

// 매개변수가 클래스 형식이며 변환 생성이 가능하다.
void TestFunc(const CTestData &param)
{
    cout << "TestFunc(): " << param.GetData() << endl;
}

int main(int argc, char *argv[])
{
    cout << "===== Begin =====" << endl;
    // int 자료형에서 CTestData 형식으로 변환될 수 있다.
    TestFunc(5);

    cout << "===== End =====" << endl;

    return 0;
}

