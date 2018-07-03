#include <iostream>

using namespace std;

class CRefTest
{
public:
    // 참조형 멤버는 반드시 생성자 초기화 목록을 이용해 초기화한다.
    CRefTest(int &rParam) : m_nData(rParam) { }
    int GetData(void) { return m_nData; }

private:
    int &m_nData;
};

int main(int argc, char *argv[]){
    int a = 10;
    CRefTest t(a);

    cout << t.GetData() << endl;

    a = 20;
    cout << t.GetData() << endl;

    return 0;
}