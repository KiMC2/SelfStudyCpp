#include "stdafx.h"
#include "MyStringEx.h"

using namespace std;

int main(int argc, char *argv[])
{
    CMyString b("World"), c;
    c = "Hello" + b;
    cout << c << endl;

    return 0;
}