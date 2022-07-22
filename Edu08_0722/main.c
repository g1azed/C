#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>

#pragma warning (disable:6273)


// 함수의 작성방법(함수 구조)
void/* 결과물의 형태 ex. int / char etc .. */ A/*함수이름*/(int a, int b, int c/*입력값*/) {
	/* 함수가 실행할 동작 기능 적는 칸 */
	return 0; /* 오른쪽의 내용( ex. 0 )을 함수의 수행결과로서 돌려줌 */
}
// 입력값에 자료형 무조건 각각 써줘야함 입력값없슴 안적어도 오케오케

// void : 빈 공간이라는 뜻 이럴경우엔 리턴안써줘도댐~! -> 결과물이 없다라는 뜻이라서

// 함수호출 **
 // 함수이름(입력값); -> 함수호출하는방법

// 정수 형태의 결과를 돌려주는 Plus 라는 이름의 함수
// 입력값으로 정수 2개를 요구한다
int Plus(int a, int b) {
	return a + b; // 결과물
}


void MemorySwap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
// 계산기 
void Case() {
	printf("==========================================================\n");

}
float Calculator(char operator1, float number2, float number1) {
	switch (operator1) {		// char -> 정수(문자)
	case '*': return number1 * number2;
	case '/': return number1 / number2;
	case '+': return number1 + number2;
	case '-': return number1 - number2;
	}
	return 0;
}

float ScanNumber() {
	float temp;
	printf(">>>");  scanf("%f", &temp);
	return temp;
}

char ScanOperator() {
	int temp;
	printf("1. *2. /3. +4. -\n >>>");
	scanf("%d", &temp);
	switch (temp) {
	case 1: return '*';
	case 2: return '/';
	case 3: return '+';
	case 4: return '-';
	}
	return '\0';

}

void ResultPretty(float result) {
	printf(" >>> %.2f <<< \n", result);
}

int main() {
	/*
	다차원배열

	배열이란 ? 1byte 데이터의 묶음

	함수**
		: (프로그래밍에서)  입력을 통해서 동작을 수행한 후 결과물을 되돌려주는 기능
	
	메모리스왑
	*/

	char arr[2][3] = { 1,2,3,4,5,6 }; // 다차원배열 : 배열을 묶은 배열
	arr[0][1]; // 접근은 이런식으로

	arr;
	printf("%d\n", arr);
	printf("%d\n", &arr[0][0]);

	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
	// -> 3만큼 묶인 배열이므로 주소는 3만큼 차이난다
	// 다차원배열은 이론상으로는 무한대로 묶을순 있지만, 프로그램상(비쥬얼스튜디오) 20개정도밖에 안 묶임
	
	///////////////////////////////////////////////////////////

/*	int arr[4][4];
	int** ptr = arr;*/ // 포포인터를 써서 다차원배열의 주소를 사용해야함
	// 주소 -> 숫자/ 배열의 주소-> 숫자
	// 다차원배열을 포인터로 넣을 시 1차원 배열의 주소처럼 사용할수 밖애없음


	//////////////////////////////////////////////////////////

	int gugu2[81] = { 0 };
	for (int i = 0; i < 81; i++) {
		gugu2[i] = (i / 9) * (i % 9);
	}

		// 위랑 아래 코드가 똑같은 구조임 편핸다루 

	int gugu[9][9] = { 0 };
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			gugu[i][j] = i * j;
		}
	}
	///////////////////////////////////////////////////////////

	Case();
	float result = ScanNumber();
	while (1) {
		result = Calculator(ScanOperator(), ScanNumber(), result);
		ResultPretty(result); 
		Sleep(3000); // 화면잠깐멈춰~
			system("cls");
		Case();
	} 
	return 0;


}


