#include "MyString.h"

CMyString::CMyString()
    : m_pszData(NULL)
    , m_nLength(0)
{

}

CMyString::CMyString(const CMyString &rhs)
    : m_pszData(NULL)
    , m_nLength(0)
{
    this->SetString(rhs.GetString());
}

CMyString::CMyString(const char *pszParam)
    : m_pszData(NULL)
    , m_nLength(0)
{
    SetString(pszParam);
}

CMyString::~CMyString()
{
    Release();
}

CMyString CMyString::operator+(const CMyString &rhs)
{
    CMyString result;

    result.Append(m_pszData);
    result.Append(rhs.m_pszData);

    return result;
}

CMyString& CMyString::operator+=(const CMyString &rhs)
{
    Append(rhs.m_pszData);

    return *this;
}

const char* CMyString::GetString() const
{
    return m_pszData;
}

int CMyString::GetLength() const
{
    return m_nLength;
}

int CMyString::Append(const char * pszParam)
{
    if(pszParam == NULL)
        return 0;

    int nLenParam = strlen(pszParam);

    if(nLenParam == 0)
        return 0;

    // 세트된 문자열이 없다면 새로 문자열을 할당한 것과 동일하게 처리함
    if(m_pszData == NULL){
        SetString(pszParam);

        return m_nLength;
    }

    // 현재 문자열의 길이 백업
    int nLenCur = m_nLength;

    // 두 문자열을 합쳐서 저장할 수 있는 메모리를 새로 할당함
    char *pszResult = new char[nLenCur + nLenParam + 1];

    // 문자열 조합
    pszResult = strcat(pszResult, m_pszData);
    pszResult = strcat(pszResult, pszParam);
    
    // 기존 문자열 삭제 및 멤버 정보 갱신
    Release();
    m_pszData = pszResult;
    m_nLength = nLenCur + nLenParam;

    return m_nLength;
}

CMyString& CMyString::operator=(const CMyString &rhs){
    if(this != &rhs)
        this->SetString(rhs.GetString());

    return *this;
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