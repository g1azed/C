#include <stdio.h> 
//->  명령 X / 명령의 집합을 알려주는 용도 


// Program 이란~? 

// 컴퓨터 => 계산기 라 생각하면 편하다  --> 프로그래밍
// 컴퓨터만의 언어 = 기계어     본인만의 계산을 자꾸 하는중임 나는몰랑
// 우리가 컴퓨터에게 명령을 내리는 언어 = 프로그래밍언어 ( C언어 )

//특수문자
// \n Enter
// \t 띄어쓰기 tab
// \b 현재있는 위치의 앞 글자를 지운다 backspace
// \a Alarm  컴퓨터' 특수부품의 알람 -> 울릴가능성 없슴
// \" 문자열안의 따옴표를 출력하기 위한 따옴표
// \\ \을 출력하기위함

// 전처리문 -> 컴퓨터에게 내리는 명령과 아무 상관없음, 매크로(자동으로 글자치환)
// A -> B로 치환
#define A B
// ex) define Pnt printf
#define NL printf("\n");
//#define PRINT(A,B) printf(A,B);
//#define NLPRINT(A) printf(A);printf("\n");

#define PRINTNL(A) printf(A);printf("\n");
#define TT printf("\t");

int main() {
	printf("\t#include<stdio.h> \\n\\n\\n \n");
	printf("\tint main(){ \\n \n");
	printf("\t printf(\" 홍수지 \\n \"); \n ");
	printf("\t printf(\" Woman \\n \"); \n ");
	printf("\t printf(\" Kaywon Art University \\n \"); \n ");
	printf("\t printf(\" 22061126 \\n \"); \n ");
	printf("\t return 0; \\n \n ");
	printf(" }  ");

	NL;

	TT;
	PRINTNL("홍수지");
	TT;
	PRINTNL("여성");
	TT;
	PRINTNL("학교");
	TT;
	PRINTNL("학번");




}
//int main() { // 진입점 (메인함수)
//
//	printf("#include <stdio.h> \n\n\n\n"); 
//	printf("int main(){ \n");
//	printf("\t printf(\"홍수지\");\b  \n");
//	printf("\t printf(\"WOMAN\"); \n");
//	printf("\t printf(\"Kaywon Art University\"); \n");
//	printf("\t printf(\"22061126\"); \n");
//	//printf("return 0; \n\n");
//	printf("}\n");
//
//	// 개행문자 = 엔터 = 줄바꿈
//
//	// 명령의 집합
//
//	return 0;
//	// {} 시작과 끝을 알리는 중괄호
//} 
// 실행 =>
// 창위에 솔루션빌드 ctrl + shift + B
// 디버그 => 디버그하지않고 시작 ctrl + f5

// 명령을 내릴때에는 순서가 굉장히 중요하다!
// => 절차적진행 , 위에서부터 아래로 진행 TopDown

// 진입점 = 시작점이기때문에 없으면 실행이 안됌