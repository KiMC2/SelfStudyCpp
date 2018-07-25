#include <iostream>

using namespace std;

// 자료구조 클래스
class CNode
{
    // friend 클래스 선언
    friend class CMyList;

public:
    explicit CNode(const char *pszName)
    {
        strcpy(m_szName, pszName);
    }

private:
    // 단일 연결 리스트로 관리할 데이터
    char m_szName[32];
    CNode *pNext = nullptr;
};

class CMyList
{
public:
    CMyList() : m_HeadNode("Dummy Head") { }
    ~CMyList()
    {
        // 리스트에 담긴 데이터들을 모두 출력하고 삭제
        CNode *pNode = m_HeadNode.pNext;
        CNode *pDelete = nullptr;

        while(pNode)
        {
            pDelete = pNode;
            pNode = pNode->pNext;
            delete pDelete;
        }
        m_HeadNode.pNext = nullptr;
    }

    void AddNewNode(const char *pszName){
        CNode *pNode = new CNode(pszName);

        pNode->pNext = m_HeadNode.pNext;
        m_HeadNode.pNext = pNode;
    }

    void Print()
    {
        CNode *pNode = m_HeadNode.pNext;
        while(pNode)
        {
            cout << pNode->m_szName << endl;
            pNode = pNode->pNext;
        }
    }
private:
    CNode m_HeadNode;
};

class CMyUI
{
public:
    // 메뉴 출력 및 사용자 입력 확인
    int PrintMenu()
    {
        system("cls");
        cout << "[1]Add\t" << "[2]Print\t" << "[0]Exit\n:";
        cout.flush();
        int nInput = 0;
        cin >> nInput;

        return nInput;       
    }

    void Run()
    {
        char szName[32];
        int nInput = 0;

        while((nInput = PrintMenu()) > 0)
        {
            switch(nInput)
            {
            case 1: // Add
                cout << "이름: ";
                cout.flush();
                cin >> szName;
                m_list.AddNewNode(szName);
                break;
            case 2: // Print
                m_list.Print();
                break;
            default:
                break;
            }
        }
    }
private:
    // UI 클래스 내부에 자료구조가 포함된다.
    CMyList m_list;
};

int main(int argc, char* argv[])
{
    CMyUI ui;
    ui.Run();
    return 0;
}