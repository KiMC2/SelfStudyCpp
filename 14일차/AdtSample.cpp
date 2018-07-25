#include <iostream>

using namespace std;

#define DEFAULT_FARE 1000

class CPerson
{
public:
    CPerson() { }
    virtual ~CPerson() {
        cout << "virtual ~CPerson()" << endl;
    }

    virtual void CalcFare() = 0;

    virtual unsigned int GetFare() { return m_nFare; }

protected:
    unsigned int m_nFare = 0;
};

class CBaby : public CPerson
{
public:
    virtual void CalcFare() {
        m_nFare = 0;
    }
};

class CChild : public CPerson
{
public:
    virtual void CalcFare() {
        m_nFare = DEFAULT_FARE * 50 / 100;
    }
};

class CTeen : public CPerson 
{
public:
    virtual void CalcFare() {
        m_nFare = DEFAULT_FARE * 75 / 100;
    }
};

class CAdult : public CPerson
{
public:
    // 성인(20세 이상) 요금 계산
    virtual void CalcFare() {
        m_nFare = DEFAULT_FARE;   // 100%
    }
};

// 사용자 코드
int main(int argc, char* argv[])
{
    CPerson* arList[3] = { 0 };
    int nAge = 0;

    // 1. 자료 입력: 사용자 입력에 따라서 생성할 객체 선택
    for(auto &person : arList)
    {
        cout << "나이를 입력하세요: ";
        cin >> nAge;
        if(nAge < 8)
            person = new CBaby;
        else if(nAge < 14)
            person = new CChild;
        else if(nAge < 20)
            person = new CTeen;
        else
            person = new CAdult;

        person->CalcFare();
    }

    for(auto person : arList)
        cout << person->GetFare() << "원" << endl;
    
    for(auto person : arList)
        delete person;

    return 0;

}