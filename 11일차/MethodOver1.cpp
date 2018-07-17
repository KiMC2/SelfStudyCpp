#include <iostream>

using namespace std;

class CMyData
{
public:
    int GetData() { return m_nData; }
    
    void SetData(int nParam) { m_nData = nParam; }

private:
    int m_nData = 0;
};

class CMyDatEx : public CMyData
{
public:
    // 파생 클래스에서 기본 클래스의 메서드를 재정의했다.
    void SetData(int nParam)
    {
        // 입력 데이터의 값을 보정하는 새로운 기능을 추가한다.
        if(nParam < 0)
            // 재귀함수가 될 가능성이 있으므로 기본 형식의 동일한 메서드를 호출하려면 반드시 이와 같이 소속클래스를 명시해야 함
            CMyData::SetData(0);
        
        if(nParam > 10)
            CMyData::SetData(10);
    }
};

int main(int argc, char *argv[])
{
    CMyData a;
    a.SetData(-10);

    // 구형에는 보정 기능이 없다.
    cout << a.GetData() << endl;

    CMyDatEx b;
    b.SetData(15);
    cout << b.GetData() << endl;

    return 0;
}