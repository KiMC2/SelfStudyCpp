#include "stdafx.h"
#include "MyString.h"

class CMyStringEx : public CMyString
{
public:
    using CMyString::CMyString;

    CMyStringEx();
    ~CMyStringEx();
    void OnSetString(char *pszData, int nLength);
    int Find(const char *pszParam);
};