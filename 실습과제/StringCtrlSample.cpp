#include "stdafx.h"
#include "MyString.h"

using namespace std;

void TestFunc(const CMyString &strParam)
{
    cout << strParam << endl;
}

int main(int argc, char *argv[])
{
    CMyString strData("Hello");

    ::TestFunc(strData);
    ::TestFunc(CMyString("World"));

    return 0;
}