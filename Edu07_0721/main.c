#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include<time.h>

#define PINT int*
typedef int _int;
typedef int* pint;

int main() {
	//  ������ -> ���ڸ� �����ϴ� ����
		
	/*
		����� ���� -> �ּ�
		�ּҴ� ������ ����~~!
			
		��ǻ�Ͱ� ����� ��(����)�� ã�ư��� ��� -> �ּ� : �� ù��°�κ��� ��ĭ�� �������ִ°�
		��ǻ��' 0�� �ּ� : ��ǻ���� ���ýý���

		�ּҸ� Ȱ���ؼ� �� �� �ִ� ��!
		1. �迭�� �ּ���ġ�� �� �� �ֽ�
			-> �ּ���ġ�� �˾ƾ��ϴ� ���� : �����Ҷ����� ������ġ�� �ٲ�µ�, �׷��� �Է¹޴� ��ǻ�������� ����ؼ�... �ϰ�����
			������ ��¥ ����� ��

		�ڷ��������̸� : int* p 
		* -> ������~~!~!
		�ּҰ� ����Ű�� ��ġ�� ������ int,char,.. ��� ~~���̴� �׸��� *�� �׳� �������̴� �긦 ã�ư��� �� �ڷ���(int, char, bool etc) �� �ִ�
		�ּҾ��� ���µ� �������ش�. �������� ũ��� ����


	*/

	int a = 5;
	&a; // �� ������ ���° ĭ���� (��� �ּ����� ��Ÿ��)
	printf("%d\n", &a);

	int b[2] = { 1, 2 };
	printf("%d\n", b);
	printf("%d\n", b+1);
	// +1 �� �ּ� �ϳ��ڷ� �Ű����� �ƴ�, �����Ϳ뷮��ŭ(���⼭�� 1BYTE)�� ��ĭ ��
	printf("%d\n", &b[0]);
	printf("%d\n", &b[1]); 

	int* p = &a; //int �ڷ����� �ּҸ� ��� ������ *
	char* q = &a;
	printf("%d\n", *&a); // -> *�� &�� ���Ǿ� a�� ����
	printf("%d\n", p);
	printf("%d\n", q); 
	// �����ʹ�! �׳� �ּҶ�� ǥ���ϱ� ���� ���°�

	p = &b;
	printf("%d\n", p);


	// �����͹迭
	int z, v, c;
	int* ptr[3];

	ptr[0] = &z;
	ptr[1] = &v;
	ptr[2] = &c;
	// �迭�� �����ֱ� ������ ������� ��ġ�� ����������
	//for (int i = 0; i < 3; i++) {
	//	scanf("%d\n", ptr[i]);
	//	// �����Ͱ� �������ִ� �ּҸ� �����а� �Ӷ�,,�Ӷ�,,, ���� �迭�� ���� ��ü�� �����ų� ���������а�,,,, ������
	//}

	printf("-----------------------\n");
	///////////////////////////////////////////////////////////////////////////
	// �Ѹ� �Է��ϴ� ����
	//int score[5]; //����
	//int index[5]; //�й�
	//int grade[5]; //�г�

	//for (int i = 0; i < 5; i++) {
	//	scanf("%d\n" ,&score[i]);
	//	scanf("%d\n", &index[i]);
	//	scanf("%d\n", &grade[i]);
	//} // �ݺ����� ����� �л����� �Է¹���
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
	//printf("������ �ּ��� ������ ==== \n");
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
	// 1~1000 ������� ������ ���ڰ� 10000���� �迭�� ����ִ�
	// ���� ¦�� ¦�� ¦�� ������ �� ���ڸ� ã��(�������� ������ ���� 1����ã�Ƶ� �ȴ�)
	// �� ���ڸ� ù��° - �ι�° - ����° ������ ����ϴ� ���α׷�
	// +  �� ���ڸ� ������ ��� ���ڸ� ����ϴ� ���α׷�
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

	//////////////////////////////////////////// ��Ǯ��
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

	//  �������� �ּ�......�ִ�.. �굵 ��¶�� ����(����)�а�.........
	int a = 10;
	int* p = &a;
	int** pp = &p; // �������� ������-> ��������
	// a == *p == **pp
	// &a == p == &pp
	// &a != &p == pp
	// &a != &p != &pp

	int*** ppp = &pp; // ����������
	// �������� �� ������ �̷л����δ� ���Ѵ�� �������� �־� �ٵ� ����? �׷����ұ�?

	int a = 10;
	int* p = &a;
	a = &p; // ����

	/////////////////////////////////////////////////////////////////////////////////

	// ������ �ٲ㾲�¹�
	// 1. ��ũ��
// #define PINT int*

	PINT a;

	//2. ���̸�����
//typedef int _int
	_int a;



	










}