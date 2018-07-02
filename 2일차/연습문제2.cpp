#include <iostream>
#include <typeinfo>       // operator typeid

using namespace std;

// auto는 타입을 추정해주는 것으로 가장 적합한(메모리 절약에 좋은) 타입을 자동으로 정해주는 것 같다.
// 또한 길어지는 타입 이름을 줄여주는 역할도 해주는 것 같다.

int main(int argc, char* argv[]){
    int i;
    auto ai = i;

    char c;
    auto ac = c;

    long l;
    auto al = l;

    double d;
    auto ad = d;

    cout << "'i' type is " << typeid(i).name() << endl;
    cout << "'ai' type is " << typeid(ai).name() << endl;

    cout << "'c' type is " << typeid(c).name() << endl;
    cout << "'ac' type is " << typeid(ac).name() << endl;

    cout << "'l' type is " << typeid(l).name() << endl;
    cout << "'al' type is " << typeid(al).name() << endl;

    cout << "'d' type is " << typeid(d).name() << endl;
    cout << "'ad' type is " << typeid(ad).name() << endl;

    return 0;
}
    