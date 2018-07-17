#include "stdafx.h"
#include "MyStringEx.h"

using namespace std;

int main(int argc, char *argv[])
{
    CMyStringEx strLeft("Hello"), strRight("World");
    cout << strLeft + strRight << endl;

    return 0;
}