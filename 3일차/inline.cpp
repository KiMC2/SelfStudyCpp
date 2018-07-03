#include <cstdio>
#include <iostream>
using namespace std;

#define ADD(a, d)((a) + (b))    // 괄호 투성이(논리적 오류를 막기 위함

int Add(int a, int b){
    return a + b;
}

inline int AddInline(int a, int b){
    return a + b;
}

int main(int argc, char *argv[]){
    int a, b;
    scanf("%d%d", &a, &b);

    printf("ADD(): %d\n", ADD(a, b));
    printf("Add(): %d\n", Add(a, b));
    printf("AddInline(): %d\n", ADD(a, b));
}