#include "stdafx.h"
#include "MyString.h"

class CMyStringEx : public CMyString
{
public:
    using CMyString::CMyString;

    CMyStringEx();
    ~CMyStringEx();
    int SetString(const char* pszParam);
    int Find(const char *pszParam);
};