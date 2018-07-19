#include "MyStringEx.h"

CMyStringEx::CMyStringEx()
{

}

CMyStringEx::~CMyStringEx()
{

}

void CMyStringEx::OnSetString(char *pszData, int nLength)
{
    if(strcmp(pszData, "멍멍이아들") == 0)
    {
        strcpy(pszData, "*착한사람*");
    }
}

// int CMyStringEx::SetString(const char* pszParam)
// {
//     int nResult;
//     if(strcmp(pszParam, "멍멍이아들") == 0)
//         nResult = CMyString::SetString("착한사람");
//     else
//         nResult = CMyString::SetString(pszParam);

//     return nResult;
// }

int CMyStringEx::Find(const char *pszParam){
    if(pszParam == NULL || GetString() == NULL)
        return -1;
    
    const char *pszResult = strstr(GetString(), pszParam);

    if(pszResult != NULL)
        return pszResult - GetString();

    return -1;
}