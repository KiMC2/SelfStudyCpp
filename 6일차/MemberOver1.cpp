#include <iostream>

using namespace std;

class CMyData
{
public:
    CMyData() : m_nData(0) { };

    int GetData(void) { return m_nData; }
    void SetData(int nParam) { m_nData = nParam; }

    // 매개변수가 double 자료형인 경우로 다중 정의했다.
    void SetData(double dParam) { m_nData = 0; }

private:
    int m_nData;
};

int main(int argc, char* argv[]){
    CMyData a;

    a.SetData(10);
    cout << a.GetData() << endl;

    CMyData b;

    b.SetData(5.5);
    cout << b.GetData() << endl;

    return 0;
}