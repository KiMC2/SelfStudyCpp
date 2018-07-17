#include <iostream>

using namespace std;

// 제작자 - 초기 개발자
class CMyData
{
public:
    CMyData() { cout << "CMyData()" << endl; }
    int GetData() { return m_nData; }
    void SetData(int nParam) { m_nData = nParam; }

protected:
    void PrintData() { cout << "CMyData::PrintData()" << endl; }

private:
    int m_nData;
};

// 제작자 - 후기 개발자
class CMyDataEx : public CMyData
{
public:
    CMyDataEx() { cout << "CMyDataEx()" << endl;}
    void TestFunc()
    {
        PrintData();
        SetData(5);
        cout << CMyData::GetData() << endl;
    }
};

int main(int argc, char *argv[])
{
    CMyDataEx data;
    CMyData data2;

    data.SetData(10);
    cout << data.GetData() << endl;
    //data2.PrintData(); Error

    data.TestFunc();

    return 0;
}