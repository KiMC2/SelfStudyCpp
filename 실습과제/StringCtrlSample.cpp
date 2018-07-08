#include "stdafx.h"
#include "MyString.h"

using namespace std;

void TestFunc(const CMyString &param){
    cout << param.GetString() << endl;
}

int main(int argc, char *argv[])
{
    CMyString strData;
    strData.SetString("Hello");
    cout << strData.GetString() << endl;
    strData.SetString("Bye");
    TestFunc(strData);

    return 0;
}