#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include<time.h>

#define PINT int*
typedef int _int;
typedef int* pint;

int main() {
	//  포인터 -> 숫자를 저장하는 변수
		
	/*
		저장된 숫자 -> 주소
		주소는 무조건 숫자~~!
			
		컴퓨터가 저장된 램(변수)를 찾아가는 방식 -> 주소 : 맨 첫번째로부터 몇칸이 떨어져있는가
		컴퓨터' 0번 주소 : 컴퓨터의 부팅시스템

		주소를 활용해서 할 수 있는 것!
		1. 배열의 주소위치를 알 수 있슴
			-> 주소위치를 알아야하는 이유 : 실행할때마다 변수위치가 바뀌는데, 그렇게 입력받는 컴퓨터입장을 고려해서... 니가뭔데
			어려븐놈 진짜 웃기네 너

		자료형변수이름 : int* p 
		* -> 포인터~~!~!
		주소가 가르키는 위치의 변수가 int,char,.. 등등 ~~형이다 그리고 *은 그냥 포인터이다 얘를 찾아가면 그 자료형(int, char, bool etc) 이 있다
		주소안의 형태도 지정해준다. 포인터의 크기는 동일


	*/

	int a = 5;
	&a; // 이 변수가 몇번째 칸인지 (어느 주소인지 나타냄)
	printf("%d\n", &a);

	int b[2] = { 1, 2 };
	printf("%d\n", b);
	printf("%d\n", b+1);
	// +1 은 주소 하나뒤로 옮겨져라가 아닌, 데이터용량만큼(여기서는 1BYTE)의 한칸 뒤
	printf("%d\n", &b[0]);
	printf("%d\n", &b[1]); 

	int* p = &a; //int 자료형의 주소를 담는 포인터 *
	char* q = &a;
	printf("%d\n", *&a); // -> *과 &가 상쇄되어 a만 남음
	printf("%d\n", p);
	printf("%d\n", q); 
	// 포인터는! 그냥 주소라고 표현하기 위해 쓰는것

	p = &b;
	printf("%d\n", p);


	// 포인터배열
	int z, v, c;
	int* ptr[3];

	ptr[0] = &z;
	ptr[1] = &v;
	ptr[2] = &c;
	// 배열로 묶여있기 때문에 순서대로 위치가 잡혀있을것
	//for (int i = 0; i < 3; i++) {
	//	scanf("%d\n", ptr[i]);
	//	// 포인터가 가지고있는 주소를 받으닉가 머라,,머라,,, 위에 배열에 넣은 객체를 넣은거나 마찬가지닉가,,,, 에휴쿵
	//}

	printf("-----------------------\n");
	///////////////////////////////////////////////////////////////////////////
	// 한명씩 입력하는 동작
	//int score[5]; //성적
	//int index[5]; //학번
	//int grade[5]; //학년

	//for (int i = 0; i < 5; i++) {
	//	scanf("%d\n" ,&score[i]);
	//	scanf("%d\n", &index[i]);
	//	scanf("%d\n", &grade[i]);
	//} // 반복문을 사용해 학생정보 입력받음
	//int* selectscore = 0;
	//int* selectindex = 0;
	//int* selectgrade = 0;

	//int select;
	//scanf("%d\n", &select);
	//switch (select) {
	//case 1:
	//	selectscore = &score[0];
	//	selectindex = &index[0];
	//	selectgrade = &grade[0];
	//	break;

	//case 2:
	//	selectscore = &score[1];
	//	selectindex = &index[1];
	//	selectgrade = &grade[1];
	//	break;

	//case 3:
	//	selectscore = &score[2];
	//	selectindex = &index[2];
	//	selectgrade = &grade[2];
	//	break;

	//case 4:
	//	selectscore = &score[3];
	//	selectindex = &index[3];
	//	selectgrade = &grade[3];
	//	break;

	//case 5:
	//	selectscore = &score[4];
	//	selectindex = &index[4];
	//	selectgrade = &grade[4];
	//	break;
	//}
	//printf("선택한 주소의 데이터 ==== \n");
	//printf("%d / %d / %d\n", *selectscore, *selectindex, *selectgrade);

	//srand(time(0));
	//int arr[100];
	//for (int i = 0; i < 100; i++) {
	//	arr[i] = rand() % 100 + 1;
	//}

	//int* find = 0;
	//for (int i = 0; i < 100; i++) {
	//	if (arr[i] == 50) {
	//		find = &arr[i];
	//	}
	//}
	//printf("%d - %d - %d\n", *(find - 1), *(find + 0), *(find + 1));

	printf("-----------------------\n");

	/////////////////////////////////////////////////////////
	// 1~1000 까ㅣ지의 무작위 숫자가 10000개의 배열에 들어있다
	// 그중 짝수 짝수 짝수 순으로 된 숫자를 찾고(여러개가 있으면 그중 1개만찾아도 된다)
	// 그 숫자를 첫번째 - 두번째 - 세번째 순으로 출력하는 프로그램
	// +  그 숫자를 제외한 모든 숫자를 출력하는 프로그램
	// 
	//srand(time(0));
	//int arr2[10000];
	//int* find2 = 0;
	//for (int i = 0; i < 1000; i++) {
	//	arr2[i] = rand() % 2;
	//	if (arr2[i] % 2 == 0) {
	//		find2 = &arr2[i];
	//	}

	//}
	////printf("%d\n", &find2);
	//printf("%d - %d - %d\n", *(find2 - 1), *(find2 + 0), *(find2 + 1));

	//////////////////////////////////////////// 쌤풀이
	srand(time(0));
	int arr2[10000];

	for (int i = 0; i < 10000; i++) {
		arr2[i] = rand() % 1000 + 1;
	}

	int* find2[100] = {0};
	int findindex = 0;
	for (int i = 0; i < 10000-2; i++) {
		if ((arr2[i] % 2 == 0) && (arr2[i + 1] % 2 == 0) && (arr2[i + 2] % 2 == 0)) {
			i += 2;
		}
		else {
			if (findindex < 100) {
				find2[findindex] = &arr2[i];
				++findindex;
			}
		}
		arr2[i] = rand() % 1000 + 1;

	}
	for (int i = 0; i < findindex; i++) {
		printf("%d - %d - %d\n", *(find2[i] +0), *(find2[i] + 1), *(find2[i] + 2));
	}

	//////////////////////////////////////////////////////////////////////////////////

	//  포인터의 주소......있다.. 얘도 어쨋든 숫자(변수)닉가.........
	int a = 10;
	int* p = &a;
	int** pp = &p; // 포인터의 포인터-> 포포인터
	// a == *p == **pp
	// &a == p == &pp
	// &a != &p == pp
	// &a != &p != &pp

	int*** ppp = &pp; // 포포포인터
	// 포인터의 별 갯수는 이론상으로는 무한대로 붙힐수는 있씀 근데 굳이? 그래야할까?

	int a = 10;
	int* p = &a;
	a = &p; // 가능

	/////////////////////////////////////////////////////////////////////////////////

	// 포인터 바꿔쓰는법
	// 1. 매크로
// #define PINT int*

	PINT a;

	//2. 형이름변형
//typedef int _int
	_int a;



	










}