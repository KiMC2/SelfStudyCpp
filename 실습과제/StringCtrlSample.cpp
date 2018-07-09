#include "stdafx.h"
#include "MyString.h"

using namespace std;

int main(int argc, char *argv[])
{
    CMyString strData, strTest;
    strData.SetString("Hello");
    strTest.SetString("World");

    CMyString strNewData(strData);
    cout << strNewData.GetString() << endl;

    // 단순 대입 연산자 호출
    strNewData = strTest;
    cout << strNewData.GetString() << endl;

    return 0;
}