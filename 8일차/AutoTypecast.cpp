#include <iostream>

using namespace std;

class CTestData
{
public:
    explicit CTestData(int nParam) : m_nData(nParam) { }

    // CTestData 클래스는 int 자료형으로 변환될 수 있다!
    operator int(void) { return m_nData; }

    int GetData() const { return m_nData; }
    void SetData(int nParam) { m_nData = nParam; }

private:
    int m_nData = 0;
};

int main(int argc, char *argv[])
{
    CTestData a(10);
    
    cout << a.GetData() << endl;

    cout << a << endl;  // explicit operator int(void)로 할경우 Error
                        // 묵시적 변환을 허용하지 않겠다.
    cout << (int) a << endl;
    cout << static_cast<int>(a) << endl;

    return 0;
}