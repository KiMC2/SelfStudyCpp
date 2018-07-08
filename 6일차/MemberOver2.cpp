#include <iostream>

using namespace std;

class CMyData
{
public:
    CMyData() : m_nData(0) { };

    int GetData(void) { return m_nData; }
    void SetData(int nParam) { m_nData = nParam; }

    // 실수로 double 자료형 실인수가 넘어오는 경우를 차단
    void SetData(double dParam) = delete;

private:
    int m_nData;
}

int main(int argc, char *argv[]){
    CMyData a;
    
    a.SetData(10);
    cout << a.GetData() << endl;

    CMyData b;

    // 실수 넣었으니 Error
    b.SetData(5.5);
    cout << b.GetData() << endl;

    return 0;
}