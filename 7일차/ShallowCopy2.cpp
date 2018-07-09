#include <iostream>

using namespace std;

class CMyData
{
public:
    CMyData(int nParam)
    {
        m_pnData = new int;
        *m_pnData = nParam;
    }

    // 복사 생성자 선언 및 정의
    CMyData(const CMyData &rhs)
    {
        cout << "CMyData(const CMyData &)" << endl;

        // 메모리를 할당한다.
        m_pnData = new int;

        // 포인터가 가리키는 위치에 값을 복사한다.
        *m_pnData = *rhs.m_pnData;
    }

    ~CMyData()
    {
        delete m_pnData;
    }

    // 단순 대입 연산자 함수를 정의한다.
    CMyData& operator=(const CMyData &rhs)
    {
        *m_pnData = *rhs.m_pnData;

        // 객체 자신에 대한 참조를 반환한다.
        return *this;
    }

    int GetData()
    {
        if(m_pnData != NULL)
        {
            return *m_pnData;
        }
        return 0;
    }
private:
    int *m_pnData = nullptr;
};

int main(int argc, char *argv[]){
    CMyData a(10);
    CMyData b(20);

    a = b;
    cout << a.GetData() << endl;

    return 0;
}