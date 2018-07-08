#include <iostream>

using namespace std;

class CMyData
{
public:
    CMyData(int nParam) : m_nData(nParam) { }
    void PrintData()
    {
        // m_nData의 값을 출력한다.
        cout << m_nData << endl;

        // CMyData 클래스의 멤버인 m_nData의 값을 출력한다.
        cout << CMyData::m_nData << endl;

        // 메서드를 호출한 인스턴스의 m_nData 멤버 값을 출력한다.
        cout << this->CMyData::m_nData << endl;
    }
private:
    int m_nData;
};

int main(int argc, char * argv[]){
    CMyData a(5), b(10);
    a.PrintData();
    b.PrintData();

    return 0;
}