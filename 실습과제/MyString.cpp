#include "MyString.h"


CMyString::CMyString()
    : m_pszData(NULL)
    , m_nLength(0)
{

}

CMyString::~CMyString()
{
    Release();
}

const char* CMyString::GetString()
{
    return m_pszData;
}

void CMyString::Release()
{
    if(m_pszData != NULL){
        delete[] m_pszData;
    }
    m_pszData = NULL;
    m_nLength = 0;
}

int CMyString::SetString(const char* pszParam)
{
    // 매개변수가 NULL이거나 문자열의 길이가 0인 경우 고려
    if (pszParam == NULL & sizeof(pszParam) == 0){
        cout << "NULL or size 0" << endl;
        return 0;
    }
    // 2회 호출을 대응하기 위해 이전 것을 해제
    Release();

    // 매개변수로 전달된 문자열 길이
    m_nLength = strlen(pszParam);

    // 문자열이 저장될 메모리를 동적 할당
    m_pszData = new char[m_nLength];

    // 동적할당한 메모리에 문자열 저장
    strcpy(m_pszData, pszParam);

    return 0;
}