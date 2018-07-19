#include <iostream>

using namespace std;

class CMyObject
{
public:
    CMyObject() { }
    virtual ~CMyObject() { }

    // 모든 파생 클래스는 이 메서드를 가졌다고 가정할 수 있다.
    virtual int GetDeviceID() = 0;

protected:
    int m_nDeviceID;
};

// 후기 제작자의 코드
class CMyTV : public CMyObject
{
public:
    CMyTV(int nID) { m_nDeviceID = nID; }
    virtual int GetDeviceID()
    {
        cout << "CMyTV::GetDeviceID()" << endl;
        return m_nDeviceID;
    }
};

class CMyPhone : public CMyObject
{
public:
    CMyPhone(int nID) { m_nDeviceID = nID;}
    virtual int GetDeviceID()
    {
        cout << "CMyPhone::GetDeviceID()" << endl;
        return m_nDeviceID;
    }
};

// 초기 제작자가 만든 함수
void PrintID(CMyObject *pObj)
{
    // 실제로 어떤 것일지는 모르지만 그래도 ID는 출력할 수 있다!
    cout << "Device ID: " << pObj->GetDeviceID() << endl;
}

int main(int argc, char *argv[])
{
    CMyTV a(5);
    CMyPhone b(10);

    ::PrintID(&a);
    ::PrintID(&b);

    return 0;
}