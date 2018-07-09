#include <iostream>

using namespace std;

class CMyData
{
public:
    CMyData(int nParam){
        m_pnData = new int;
        *m_pnData = nParam;
    }

    // 객체가 소멸하면 동적 할당한 메모리를 해제한다.
    // 얕은 복사로 인해 문제 발생
    ~CMyData()
    {
        delete m_pnData;    // Error
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
    // 포인트 멤버 데이터
    int *m_pnData = nullptr;
};

int main(int argc, char *argv[])
{
    CMyData a(10);
    CMyData b(a);

    cout << a.GetData() << endl;
    cout << a.GetData() << endl;

    return 0;
}