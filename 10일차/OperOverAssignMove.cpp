#include <iostream>

using namespace std;

class CMyData
{
public:
    explicit CMyData(int nParam)
    {
        cout << "CMyData(int)" << endl;
        m_pnData = new int(nParam);
    }

    CMyData(const CMyData &rhs)
    {
        cout << "CMyData(const CMyData &)" << endl;
        m_pnData = new int(*rhs.m_pnData);
    }

    ~CMyData() { delete m_pnData; }

    operator int() { return *m_pnData; }

    // 덧셈 연산자 다중 정의
    CMyData operator+(const CMyData &rhs)
    {
        return CMyData(*m_pnData + *rhs.m_pnData);
    }

    CMyData& operator=(const CMyData &rhs)
    {
        cout << "operator=" << endl;
        if(this == &rhs)
            return *this;
        
        delete m_pnData;
        m_pnData = new int(*rhs.m_pnData);

        return *this;
    }

    CMyData& operator=(CMyData &&rhs)
    {
        cout << "operator=(Move)" << endl;

        // 얇은 복사를 수행하고 원본은 NULL로 초기화한다.
        m_pnData = rhs.m_pnData;
        rhs.m_pnData = NULL;

        return *this;
    }

private:
    int *m_pnData = nullptr;
};

int main(int argc, char *argv[])
{
    CMyData a(0), b(3), c(4);
    cout << "***** Before *****" << endl;

    // 이동 대입 연산자가 실행된다!
    a = b + c;
    cout << "***** After *****" << endl;
    cout << a << endl;
    a = b;
    cout << a << endl;
}