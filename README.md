# STUDY


###C언어의 동적할당
___
1. 동적할당?
- 프로그램 실행중에 동적으로 메모리를 할당하는 것
- 동적으로 메모리를 할당할때 Heap(힙)영역에 할당
- <stlib.h>헤더 파일을 include 해야함
- 함수 동작은 매개변수에 해당하는 size_t 만큼의 크기만큼 메모리를 할당하고
성공하면 : 할당한 메모리의 첫번째 주소 리턴
실패하면 : NULL 리턴
- 메모리 누수를 막기 위해 반드시 해제


2. malloc(), free()
```
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
    // 리턴할 값은 메모리를 동적 할당해주세요
    char* answer = (char*)malloc(sizeof(char)*5);
    if(num%2==0){
        answer="Even";
    }
    else{
        answer="Odd";
    }
    return answer;
}
```
