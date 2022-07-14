#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define En printf("\n")
#define intinput(text, value) printf(text);scanf("%d", &value);
#define floatinput(text, value) printf(text);scanf("%f", &value);
#define charinput(text, value) printf(text);scanf("%s", &value);

int main() {


// 상수와 변수
// 상수 : 고정된 숫자

	printf("3\n", 3); // 글자를 띄워라(추가기능 : 3) 명령
	// 추가기능으로 어떤 행동을 할지는 명령하지 않았음

	printf("(%d)\n", 3); // %d : 글자가 아니라 추가기능으로 가져온 상수를 %d 위치에 넣어줘라~ 
	printf("(%d)(%d)", 7,7);
	// => (7)(-641) 출력
	// 쉼표뒤에 숫자가 부족해 이상한 숫자 출력

	printf("(%d)(%d) \n", 7, 9);
	//=> (7) (9)


// 변수 : 변할 수 있는 숫자


	// 변수이름 : 식별 가능한 개체명
	int Distance; //  Distance : 변수이름 -> 변화가 가능한 숫자
	Distance = 3; // Distancs 변수의 숫자를 3으로 변경해라\

	printf("%d \n", Distance); // => 3

	Distance = 9;
	printf("%d \n", Distance);  // => 9

		// 이름규칙
		// 1. 영문자 대소문자 및 숫자, 언더바(_)만 가능
		// 2. 숫자는 첫 글자로 올 수 없다
		// 3. 띄어쓰기 불가능



	//자료형(=자료의형태)
	int a = 198; // 소수점이 없는 숫자의 형태변수
	float b = 198.987; // 소수점이 있는 숫자의 형태변수

// %d 는 소수점이 없는 숫자를 화면에 띄우는 기능
// %f 는 소수점이 있는 숫자를 화면에 띄우는 기능
// %s 는 글자를 화면의 띄움

	printf("%d", a);
	En;
	printf("%f", b);
	En;
	En;
	En;

	// Q : 나의 생년월일을 화면에 띄워봦~

	//int Birth = 20000730;
	//printf("생년월일 : %d", Birth);

	//En;
	//float weight = 10.333;
	//printf("몸무게 : %f", weight);

	//En;
	//// 글자를 출력하는 법
	//// -> 숫자의 집합
	//char Name[100] = "홍수지"; // 대괄호에 큰 숫자를 적는 이유 -> 배열배울때 알려줄거임
	//printf("이름 : %s", Name);
	//En;


	//입력 : 내가 키보드에 친 내용
	//int BirthDay;
	//scanf_s("당신의 생일은 : %d", &BirthDay); // & 붙혀줘야함!!
	//printf("생일: %d", BirthDay);

	//char MyName[100];
	//scanf_s( "%s", MyName); // char 형일땐 앞에 & 안붙힘
	//printf("이름 : %s", MyName);

	//int year, month, day;
	//printf("태어난 해: "); scanf("%d", &year);
	//printf("태어난 달: ");  scanf("%d", &month);
	//printf("태어난 날짜 : "); scanf("%d", &day);


	//char gender[200], name[300];
	//printf("성별 : ");  scanf("%s", gender);
	//printf("이름 : "); scanf("%s", name);

	//float kg;
	//printf("몸무게 :  %5.2f"); scanf("%f", &kg);

	//printf("생년월일 : %5d/%d/%d", year, month, day); En;
	//printf("성별 : %5s", gender); En;
	//printf("이름: %s", name); En;
	//printf("몸무게 : %5.2f", kg); En;

	// % ~ f,s,d 사이 ~에 숫자를 넣으면 그만큼 띄어쓰기가 되서 출력됨
	// %06f 를 쓰면 띄어쓰기칸에 0을 넣어서 출력
	// %-6f 로 쓰면 오른쪽에 공백이 그만큼 생긴다, 왼쪽 정렬


	/*
	이름   :     홍수지
	나이   :		23세
	성별   :	   여자
	생년   : 2000/07/30
	몸무게 :		 00
	키     :      164.3
	*/

	char Name[100], Gender[100];
	int Age, Year, Month, Day, Kg;
	float Height;

	printf("이름:  "); scanf("%s", Name);
	printf("나이:  "); scanf("%d", &Age);
	printf("성별:  "); scanf("%s", Gender);
	printf("태어난 해:  "); scanf("%d", &Year);
	printf("태어난 달:  "); scanf("%d", &Month);
	printf("태어난 일:  "); scanf("%d", &Day);
	floatinput("키 : ", Height);
	intinput("몸무게 : ", Kg);


	printf("이름 : %10s", Name); En;
	printf("나이 : %10d세", Age); En;
	printf("성별 : %10s", Gender); En;
	printf("생년 : %4d/%2d/%2d", Year, Month, Day); En;
	printf("키   : %10f", Height); En;
	printf("몸무게 : %10d", Kg); En;


	// 5번째 줄로 인해
	//int kg;
	//intinput("몸무게 : ", kg); // 는 밑줄과 똑같은 의미이다
	//printf("몸무게: "); scanf("%d", &kg);






}