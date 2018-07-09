#include <iostream>

using namespace std;

class CTestData
{
public:
    // 매개변수가 하나뿐인 생성자는 형변환이 가능하다.
    // 하지만 묵시적으로는 불가능하도록 차단한다.
    explicit CTestData(int nParam) : m_nData(nParam)
    {
        cout << "CTestData(int)" << endl;
    }
    ~CTestData()
    {
        cout << "~CTestData(int)" << endl;
    }

    int GetData() const{
        return m_nData;
    }
private:
    int m_nData = 0;
};

void FuncTest(const CTestData &test)
{
    cout << test.GetData() << endl;
}

int main(int argc, char *argv[])
{
    cout << "===== Begin =====" << endl;
    FuncTest(5);
    cout << "===== End =====" << endl;
}