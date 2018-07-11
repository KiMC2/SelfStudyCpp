#include "stdafx.h"
#include "MyString.h"

using namespace std;

int main(int argc, char *argv[])
{
    CMyString strLeft("Kim");
    CMyString strRight("Mincheol");
    CMyString strResult;

    strResult = strLeft + strRight;
    cout << strResult << endl;
    cout << strLeft << endl;

    strLeft += CMyString("World");
    cout << strLeft << endl;

    return 0;
}