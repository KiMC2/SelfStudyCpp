#include "stdafx.h"
#include "MyStringEx.h"

using namespace std;

int main(int argc, char *argv[])
{
    CMyStringEx strTest;
    strTest.SetString("멍멍이아들");
    cout << strTest << endl;

    return 0;
}