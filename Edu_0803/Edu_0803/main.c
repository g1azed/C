#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
#include<windows.h>
#include<stdarg.h>
#include<time.h>
#include<conio.h>
#include<string.h>


	// 원형큐, 순환큐
#define MAX_SIZE 101
#define MIN_TIME 0.3
#define MAX_TIME 30.0
struct Order {
	char name[40]; //주문자
	int price; //주문가격
	char productname[40]; //주문물품
};
int Push(struct Order* arr, int* begin, int* end, int number, struct Order* data) {
	if (*end + 1 == *begin || *begin + MAX_SIZE - 1 == *end) return;
	memcpy(&arr[(*end)], data, sizeof(struct Order));
	arr[(*end)] = number;
	++(*end);
	if (*end == MAX_SIZE) *end = 0;
	return 1;
}
struct Order* Pop(struct Order* arr, int* begin, int* end) {
	if (*begin == *end) return 0;
	static struct Order* result;
	memcpy(&result, &arr[(*begin)]);
	int result = arr[(*begin)];
	++(*begin);
	return result;
}
double GetTime() {
	static double timer = 0;
	static double newtimer = 0;

	timer = newtimer;
	newtimer = (double)clock() / CLOCKS_PER_SEC;
	return newtimer - timer;
}
double RandomOrderTime(double min, double max) {
	return Random((int)(min * 1000), (int)(max * 1000)) / 1000.0;
}
int Random(int min, int max) {
	return rand() % (max - min + 1) + min;
}
struct Order* RandomOrder() {
	static struct Order result;
	switch (Random(0, 4)) {
	case 0: (result.name, "이름일"); break;
	case 1: (result.name, "이름둘"); break;
	case 2: (result.name, "이름셋"); break;
	case 3: (result.name, "이름넷"); break;
	case 4: (result.name, "이름다"); break;
	}
	result.price = Random(1, 35) * 1000 + Random(0, 60) * 50;

	switch (Random(0, 4)) {
	case 0:strcpy(result.productname, "물품종류1"); break;
	case 1:strcpy(result.productname, "물품종류2"); break;
	case 2:strcpy(result.productname, "물품종류3"); break;
	case 3:strcpy(result.productname, "물품종류4"); break;
	case 4:strcpy(result.productname, "물품종류5"); break;
	}
	return &result;
}
int main() {
	srand(time(0));
	struct Order* arr[MAX_SIZE];
	double begin = 0, end = 0, isrunner = 1;
	long totalprice = 0L;
	double timer = 0, ordertime = RandomOrderTime(MIN_TIME, MAX_TIME);

	GetTime(); GetTime();
	while (1) {
		timer += GetTime();
		if (timer > ordertime) {
			if (!Push(arr, &begin, &end, RandomOrder()))
				printf("손님더이상못받ㅏ\n");
			timer -= ordertime;
			ordertime = RandomOrderTime(0.5, 30.0);
		}
		if (_kbhit()) { // keyboard hit -> 키보드 입력감지 기능
			int count = 0;
			switch (_getch())
			{
			case 'a': count = 1; break;
			case 's': count = 5; break;
			case 'd': count = MAX_SIZE; break;
			case 'q': isrunner = 0; break;
			case 'r': printf("총 %d원 \n", totalprice); break;
			default: break;
			}
			for (int i = 0; i < count; i++) {
				struct Order* result = Pop(arr, &begin, &end);

				if (result != 0) {
					totalprice += result->price;
					printf("계산서: %30s /%7d/ %20s\n", result->productname, result->name);
				}
				else break;
			}

			//printf("%d > ", Pop(arr, &begin, &end));
		}
	}


	double starttime, endtime;
	starttime = (double)clock() / CLOCKS_PER_SEC;  // CLOCKS_PER_SEC  시간체크함수 1/1000

	//for (int j = 0; j < 10000; ++j) {
	//	int begin = 0, end = 0;
	//	for (int i = 0; i < MAX_SIZE; ++i) {
	//		Push(arr, &begin, &end, i + 1);
	//	}
	//	for (int i = 0; i < MAX_SIZE; ++i) {
	//		printf("%d > ", Pop(arr, &begin, &end));
	//	}
	//}
	endtime = (double)clock() / CLOCKS_PER_SEC;
	printf("\n%If \n", endtime - starttime);
}

//struct Node {
//	int number;
//	struct Node* next;
//};
//struct Node* CreateNode() {
//	struct Node* result = (struct Node*)malloc(sizeof(struct Node));
//	memset(result, 0, sizeof(struct Node));
//	return result;
//
//}
//void Push(struct Node** start,struct Node** end, int n) {
//	if (*start == 0) {
//		*start = CreateNode();
//		*end = *start;
//		(*start)->number = n;
//	}
//	else {
//		(*end)->next = CreateNode();
//		(*end)->next->number = n;
//		(*end) = (*end)->next;
//	}
//}
//
//int Pop(struct Node** start, struct Node** end) {
//	int result;
//	if (*start == *end) { // 데이터가 하나라는 소리
//		result = (*start)->number;
//		free(*start);
//		*start = 0;
//		*end = 0;
//	}
//	else {
//		result = (*start)->number;
//		struct Node* temp = *start;
//		*start = (*start)->next;
//		free(temp);
//	}
//	return result;
//}
//int main() {
//	struct Node* start = 0;
//	struct Node* end = 0;
//	Push(&start, &end, 2);
//	Push(&start, &end, 4);
//	Push(&start, &end, 6);
//
//	printf("%d\n", Pop(&start, &end));
//	printf("%d\n", Pop(&start, &end));
//	printf("%d\n", Pop(&start, &end));
//}