#include <iostream>

using namespace std;

class CIntArray
{
public:
    CIntArray(int nSize)
    {
        m_pnData = new int[nSize];
        memset(m_pnData, 0, sizeof(int) * nSize);
    }

    ~CIntArray() { delete m_pnData; }

    int operator[](int nIndex) const
    {
        cout << "operator[] const" << endl;
        return m_pnData[nIndex];
    }

    int& operator[](int nIndex)
    {
        cout << "operator[]" << endl;
        return m_pnData[nIndex];
    }
private:
    int* m_pnData;

    int m_nSize;
};

void TestFunc(const CIntArray &arParam)
{
    cout << "TestFunc()" << endl;

    cout << arParam[3] << endl;
}

int main(int argc, char *argv[])
{
    CIntArray arr(5);
    for(int i = 0; i < 5; i++){
        arr[i] = i * 10;
    }

    TestFunc(arr);

    return 0;
}