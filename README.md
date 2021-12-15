# STUDY


### C언어의 동적할당
___
1. 동적할당?
- 프로그램 실행중에 동적으로 메모리를 할당하는 것
- 동적으로 메모리를 할당할때 Heap(힙)영역에 할당
- <stlib.h>헤더 파일을 include 해야함
- 함수 동작은 매개변수에 해당하는 size_t 만큼의 크기만큼 메모리를 할당

성공하면 : 할당한 메모리의 첫번째 주소 리턴 / 
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

### STL vector 
___
1. vector : 자동으로 메모리가 할당되는 배열
- <vector> 헤더파일 include 후 사용가능
- 선언
    ```vector<[데이터타입]> [배열명];```
- 생성자
    
    
    비어있는 vector v 생성
    ```
    vector<int> v;
    ```
    크기가 5인 vector v 생성
    ```
    vector<int> v(5);
    ```
    2로 초기화된 5개의 원소를 가지는 vector v를 생성
    ```
    vector<int> v(5, 2);
    ```
    v2는 v1 vector를 복사해서 생성
    ```
    vector<int> v1(5, 2);
    vector<int> v2(v1);
    ```
    
### vector 정렬: ```sort()``` 함수
___
1.sort() 함수 사용
    ```sort([시작 위치],[종료 위치])``` : 시작 위치부터 종료 위치까지 요소를 정렬한다.

EX) 로또 최저 순위, 최고 순위    
    ```sort(lottos.begin(), lottos.end());```
    lottos vector의 첫 요소부터 마지막 요소까지 정렬
    
    
### string erase 함수
___
1.  ```erase()``` 함수: string 객체의 중간의 어느값을 삭제한다. 

    
### 벡터의 중복 제거
___
1. ```sort()```함수 이용하여 정렬 
2. ```v.earse(unique())```이용하여 정렬
```
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

vector<string> s;

int main()
{
	s.push_back("a");
	s.push_back("b");
	s.push_back("a");
	s.push_back("c");
	s.push_back("b");
	s.push_back("a");
	s.push_back("b");
	
	printf("막넣은 백터s\n");
	for(int i=0;i<s.size();i  )
		cout<<s[i]<<"\t";
	printf("\n\n");
	
	printf("정렬 sort(s.begin(), s.end());\n");
	sort(s.begin(), s.end());
	for(int i=0;i<s.size();i  )
		cout<<s[i]<<"\t";
	printf("\n\n");

	printf("백터.erase(unique(s.begin(),s.end()),s.end())\n");
	s.erase(unique(s.begin(),s.end()),s.end());
	for(int i=0;i<s.size();i  )
		cout<<s[i]<<"\t";
	printf("\n\n");
}
```
    
### 탐색 알고리즘
___
1. 맵(map) (또는 사전) : 자료를 저장하고 키를 이용해 원하는 자료를 빠르게 찾을 수 있도록 하는 자료구조 (키를 가진 레코드의 집합)
- 키를 가진 레코드, 또는 엔트리 (키-값 쌍)을 테이블에 저장한다. 
- 각 키는 유일하고 맵에 저장되는 키와 값의 자료형은 모두 가능  

    
    
