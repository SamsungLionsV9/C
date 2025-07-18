---
10.1 포인터의 개요
---

*포인터의 개념
```
포인터: 메모리의 주소, 포인터를 사용하여 메모리의 주소를 이용하면 데이터를 저장하거나 값에 접근할 수 있다.
데이터 전체를 이동하면 비효율적이나, 해당 데이터의 주소만을 공유하여 전달이 가능하다.

예시)
Char A = 'A'(1바이트로 저장됨)
-> 메모리에서는 고유의 주소가 바이트 단위로 구성되며, 이 주소로 메모리에 접근이 가능하다.
메모리 주소는 보통 16진수로 표현된다.
```

*변수의 메모리 주소
```
프로그램에서 변수 선언 -> 컴파일러가 비어있는 메모리 공간을 확보 -> 해당 변수가 차지하는 크기에 맞게 저장된다.

메모리 주소는 시스템에 따라서 달라질수 있고, 할당은 순차적이지 않다(오히려 가변적이다.)
변수는 랜덤한 곳에 할당된다. 예를 들어 주소 1에 정수 b가 할당되고, 주소 6에 문자 a, 주소 9에 실수 c가 할당될수도 있는거다.

```

*포인터 주소 연산자 &
```
&변수명
&address
-> 위 방식대로 하면 메모리 주소의 번지를 가져올 수 있다.
```

*포인터 변수
```
메모리 주소를 저장하는 변수
-> 포인터는 다른 변수의 주소를 가리키는 특성이 있어 간접적으로 다른 변수의 값을 읽거나 수정이 가능하다.

사용시 다른 변수와 마찬가지로 포인터 변수를 선언해야한다.
```

* 포인터 간접연산자(*)
```
포인터를 선언하려면 포인터가 가리키는 변수명 앞에 간접 연산자 또는 역참조 연산자 *을 표기해야한다.
자료형 *변수명
int *p;
-> 변수의 메모리 주소를 int형으로 저장하고 int형태의 변수 주소를 받을 때 사용한다.
```
포인터 간접연산자의 예시
```
int a = 100;
int *p, *q;
p = &a;
q = &a;

-> 정수형 변수 a를 선언하고 100으로 초기화하고
정수형 포인터 변수 p를 선언한다.
그리고 포인터 변수 p에다가 변수 a의 주소를 저장한다.
q에도 변수 a의 주소를 저장한다.
이처럼 저장할때 &를 사용하여 저장이 가능하고, 저장할 포인터 변수를 지정하려면 *변수 이런식으로 적어주면 된다.
```

```
int *p = &x; => int *p(포인터 변수 선언), p = &x;(포인터 변수 초기화)
이렇게 두개의 식으로 나눌 수 있다.
```

*자료형 맞추기
```
int a; -> int *x;
char b; -> char *y;
double c; -> double *z;
```

*메모리 주소의 크기와 포인터의 연관성
```
*포인터 변수는 메모리 주소를 저장한다. 메모리 주소의 크기는 자료형에 상관없이 8바이트를 할당한다. 즉, 포인터 변수는 8바이트이다.
```

*포인터를 사용해야하는 이유
```
1. 함수의 인자(매개변수)로 메모리 주소가 전달이 가능하므로 편리하다.
2. 배열명은 기본적으로 첫 번째 요소의 주소를 가리키는 포인터다.
3. 문자열 처리는 문자 배열 또는 문자 포인터로 처리한다.
4. 데이터 구조 구현(연결 리스트, 트리, 그래프)등의 구조는 포인터를 통해 원소간 연결을 표현할 수 있다.
```

---
** 확인 문제**
---
```
1. 포인터 변수 앞에 붙이는 간접 연산자는 (*), (포인터 간접 연산자)라고도 불리며, 포인터 변수에 저장된 메모리 주소를 참조하여 해당 주소에 저장된 값을 반환한다.
2. 32비트 운영체제에서는 포인터의 메모리 주소의 크기인 (4바이트)가 할당되고, 64비트 운영체제에서는 포인터에 메모리 주소의 크기인 (8바이트)가 할당된다.
```

---
10.2 포인터 연산
---

*포인터 연산의 예시
```
int i = 10;
int *p;

p = &i;
p++;

int형의 p는 4바이트인데, 이걸 한번 주소값을 이동한다고 되어있으므로, p++;이런식으로
그렇다면 포인터가 증가하는 값은 (1*4)바이트가 증가한다.

이는 반드시 자료형에 기반해서 증가해야한다.

i++ -> i의 값이 1증가해서 11
p++ -> 포인터가 다음 int 변수 주소로 이동함, p가 가리키는 주소만 바뀜
```
```
double i = 10;
double *p;

p = &i;
p++;

double형의 경우 8바이트이므로 원래 주소대비 8바이트를 더한다.
```

```
int i = 10;
int *p;

p = &i;
(*p)++; //포인터 변수 p가 가리키는 '변수 i의 값'을 10에서 11로 증가
*p++;  //포인터 변수 p가 가지고 있는 변수 i의 '주소값'을 헤당 자료형의 크기만큼(4바이트:int)만큼 이동
```

*포인터 증감 연산
```
*p++: //*p와 p++의 결합 -> *(p++)과 같은 의미
*++p; //++p와 *p의 결합 -> *(++p)와 같은 의미

*p++: p의 증가는 *p가 지정된 후에 현재 p가 가리키는 값을 반환 시키고 그 반환받은 값을 증가시킴
*++p: 포인터 변수 p를 증가시킨 다음 증가된 p의 값을 반환(int형을 예시로 두면, 4바이트만큼 증가한 값을 반환)

주의점: (*p)+1 -> 값을 변경하진 않고 그 반환받은 값에 1만 더한다.
```

---
**확인문제**
---

```
1. (포인터 증감 연산)은 메모리 주소에 직접 접근하고 조작하기 위해 주로 사용되며, 그 대상은 (포인터 변수)이다. (포인터 변수)는 변수의 메모리 주소를 저장하는 변수로 특정 데이터 유형의 주소를 가리킨다.
```

---
10.3 void형 포인터
---
-> void형 포인터는 다양한 자료형의 주소를 저장 가능하다.

```
void *pointer; //char, short, int 뭐든 저장 가능
```

*void형 포인터의 특징
```
1. 정해진 유형 부재
- void형 포인터는 특정 테이터 유형에 고정되지 않음

2. 연산 제한
- 직접적으로 역참조하거나 산술 연산 수행 불가

3. 메모리 할당
- malloc(), calloc()등의 메모리 할당 함수는 void*형 포인터를 반환한다. -> 어떤 자료형으로도 사용이 가능함

4. 함수 인자
- void형 포인터는 함수 인자로 널리 사용되며, 어떠한 자료형도 받을 수 있다.
```

예시)
```
int m_int;
char m_char;
void *mp;

mp = &m_int;
mp = &m_char
-> 모든 자료형이 받아지는걸 확인할 수 있다.
```

---
10.4 포인터와 함수
---
```
*포인터를 이용한 함수 호출은 매개변수를 함수에 전달할 때 값에 의한(call by value)과, 참조에 의한(call by reference) 두가지로 나뉜다. 포인터의 경우는 참조에 의한 전달 방식이다.

-> 왜 참조에 의한 전달을 할까? 그것은 이제 함수 내에서 포인터를 사용해서 메모리의 값을 직접 변경할 수 있으므로 호출된 곳의 변수에 영향이 있어서다.

값에 의한 전달을 왜 안쓰는걸까?
-> 함수 호출이 기본적으로 값에 의한 전달 방식이기 때문에 함수 호출 시 인자의 값만 복사되어 전달되므로
실제로는 값의 변경이 있어도 원본 변수 자체는 변경되지 않는다.
```

*참조에 의한 전달 예시 코드
```c
#include <stdio.h>

void swap(int*, int*);

int main(void){
    
    int a, b;
    a = 10;
    b = 20;
    
    printf("before swap(): a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("after swap() : a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int *a, int *b){
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
    
    printf("in swap(): a = %d, b = %d\n", a, b);
}

-> 이처럼 참조에 의한 전달에서는 변수의 값이 복사본이 아닌 원본이 직접 전달하기 때문에 값이 변경될 수 있다.
-> 원본 변수가 전달되는 것처럼 동작하므로, 호출된 함수 내에서 매개변수의 값 변경시 원본 변수의 값도 변경된다.
-> 원본 변수의 값을 직접 전달하려면 포인터를 사용해야한다. 또 포인터로 받아온 주소로 원본 변수의 값을 직접 수정이 가능하다.
```

---
**확인문제**
---
```
1. swap()함수는 변수 a와 b의 값을 서로 바꾸기 위해 매개변수로 전달받은 값을 직접 수정한다. 이와 같은 방식의 호출을 무엇이라고 하는가?
-> 매개변수로 전달받은 값은 원본이므로 값에 의한 전달(call by reference)이다. 직접 수정하는건 포인터를 이용해서 값을 수정하는것이므로 참조에 의한 전달이다.

2. main()함수에서 포인터를 사용하여 변수를 전달하는 방식은 값에 의한 전달과 비교하여 어떤 차이점이 있는가? 포인터를 사용할 때 변수의 원본을 수정할 수 있는 이유는 무엇인가?
-> 포인터는 참조에 의한 전달(call by reference)의 방식으로 작동하기 때문에, 복사본이 아닌 원본을 통하여 전달하므로 값을 수정하면
메모리에 변경된 것이 반영이 되는 원리이다.
```


---
10.5 포인터와 배열
---
```
배열명 = 배열의 첫 번째 주소를 나타냄(밀접한 연관성)
배열은 포인터처럼 취급되며, 포인터 연산을 사용하여 배열 요소를 순회/요소에 접근 등이 가능하다.

배열명은 첫 번째 배열 요소의 주솟값을 가진 포인터 상수를 가리킨다.
-배열명을 간접 참조할 때는 해당 배열의 첫 번째 요소를 간접 참조한다.

예를들어, a라는 배열이 있는데, 이를 통해서 나타내보면 a == &a[0]이 둘이 같다는걸 의미한다.
(중요)
*a: 배열 a의 0번째 인덱스이다.
a[i]: 배열 a의 i번째 인덱스이다.
*p는 포인터 p가 가리키는 값
p는 배열 a의 첫번째 요소를 가리킴 -> *p = a[0], 즉 포인터 p에 그대로 전달되어서 p를 통해서 a의 원본에 접근할 수 있어서 같은
값이라고 본다.
```

*인덱스연산 = 포인터연산
```
포인터를 통해서
int *ptr = a;
...
*(ptr+i); 를 통하여 초기 번지수인 ptr에다가 인덱스 값 i를 더해서 찾는 요소 값을 출력하면 된다.
```

---
*확인문제
---
```
1. 배열명은 첫 번째 배열 요소의 (주소)를 가리킨다.


2. *(ptr + 2)의 값은?
  int arr[5] = {10, 20, 30, 40, 50}
  int *ptr = arr;
printf("%d", *(ptr + 2));
-> arr[2] = 30
```











