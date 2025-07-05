7장. 함수

7.1 개념

함수의 개념
	1.	프로그램에서 특정 작업을 수행하도록 정의된 독립적인 단위
	2.	일련의 명령어와 연산으로 이루어진 독립적인 코드블록
	3.	주어진 매개변수 입력을 바탕으로 특정 작업을 수행 → 결과를 반환하는 일련의 절차
	4.	동일한 입력을 여러 번 수행 가능하다.

함수: 입력 데이터 → 연산 → 출력 데이터

함수의 장점
	1.	코드의 재사용이 용이: 같은 코드를 여러 번 작성하지 않고 다시 사용 가능
	2.	모듈화(관리의 용이성): 코드를 논리적 단위인 모듈로 분리가 가능(기능과 책임이 명확)
	3.	가독성 향상
	4.	유지·보수가 용이: 오류 발생 시 해당 함수만 수정
	5.	추상화: 함수 이름만 보고도 기능 예측 가능
	6.	코드의 일관성 유지
	7.	매개변수가 데이터를 받고, 반환값으로 결과를 전달

⸻

함수의 종류
	•	표준 라이브러리 함수: printf, scanf 등 컴파일러가 제공
	•	사용자 정의 함수: 개발자가 직접 정의

⸻

확인문제
	1.	함수는 큰 프로그램을 (표준 라이브러리) 함수와 사용자가 직접 만들어서 사용하는 (사용자) 함수로 구분된다.
	2.	하나의 큰 프로그램을 독립적인 단위나 구성 요소로 분리하는 과정은 무엇이라고 하는가? → (모듈화)

⸻

7.2 함수 선언과 정의

함수 정의의 예시

int swap(int a, int b) {
    // int: 반환형, swap: 함수명, int a, int b: 매개변수
    // a, b는 함수 내부의 지역변수
    return 0;
}

사용자 정의 함수 구성 요소
	1.	함수명은 식별자 규칙을 따라서 작성
	2.	매개변수는 함수가 호출될 때 받을 입력값의 형식과 개수를 정의 (void로 비움도 가능)
	3.	반환형: 함수 수행 종료 후 되돌리는 값의 자료형
	4.	함수 몸체: {} 내 실행문

함수 선언 예시

#include <stdio.h>

int example(int x, char c);  // 선언

int example(int x, char c) { // 정의
    // 실행 코드
}

	•	선언: 함수의 정보(이름, 반환형, 매개변수)를 컴파일러에 알리는 용도

⸻

7.3 함수 호출 예제

1. 매개변수 X / 반환값 X

void greeting(void);

int main(void) {
    greeting();
    return 0;
}

void greeting(void) {
    printf("ABC");
    return;
}

2. 매개변수 O / 반환값 X

void greeting(int value);

int main(void) {
    greeting(100);
    return 0;
}

void greeting(int value) {
    printf("%d", value);
}

3. 매개변수 X / 반환값 O

int greeting();

int main(void) {
    int value = greeting();
    return 0;
}

int greeting() {
    printf("Hi");
    return 300;
}

4. 매개변수 O / 반환값 O

int greeting(int value);

int main(void) {
    int result = greeting(10);
    return 0;
}

int greeting(int value) {
    int sqr = value * value;
    return sqr;
}


⸻

확인문제
	1.	함수를 **(선언)**할 때 사용하는 이름인 **(함수명)**은 식별자 규칙에 따라 작성해야 하며, 코드의 가독성을 고려해 의미 있는 이름을 부여하는 것이 좋다.
	2.	**(매개변수)**는 함수가 호출될 때 받을 입력값을 지정하기 위한 변수이다.

⸻

7.4 표준 라이브러리 함수

함수를 사용하려면?
	•	해당 함수가 선언된 헤더파일을 포함해야 함

대표 함수 - rand(), srand()

#include <stdlib.h>  // rand, srand
#include <time.h>    // time

rand()
	•	0 ~ RAND_MAX 범위의 무작위 정수 반환

srand()
	•	rand의 결과를 바꾸기 위한 시드(초기값) 설정 함수
	•	동일한 시드를 주면 동일한 rand 결과 발생

srand(time(NULL));  // 현재 시간을 시드로 설정하여 실행할 때마다 다른 결과 발생


⸻

수학 함수 (math.h)

#include <math.h>

	•	삼각함수: sin(), cos(), tan()
	•	입력 값은 라디안(rad) 단위 사용

⸻

확인문제
	1.	C언어에서 자체적으로 제공되는 함수를 **(표준 라이브러리 함수)**라고 한다. 일반적으로 라이브러리 함수의 원형은 **(전처리기)**에 포함되어 있다.
	2.	난수를 생성하는 대표적인 함수는 **(rand)**와 **(srand)**이다.
	3.	<math.h>에서 제공하는 삼각 함수는 (sin), (cos), **(tan)**이다.
