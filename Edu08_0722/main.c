#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>

#pragma warning (disable:6273)


// �Լ��� �ۼ����(�Լ� ����)
void/* ������� ���� ex. int / char etc .. */ A/*�Լ��̸�*/(int a, int b, int c/*�Է°�*/) {
	/* �Լ��� ������ ���� ��� ���� ĭ */
	return 0; /* �������� ����( ex. 0 )�� �Լ��� �������μ� ������ */
}
// �Է°��� �ڷ��� ������ ���� ������� �Է°����� ����� ���ɿ���

// void : �� �����̶�� �� �̷���쿣 ���ϾȽ��൵��~! -> ������� ���ٶ�� ���̶�

// �Լ�ȣ�� **
 // �Լ��̸�(�Է°�); -> �Լ�ȣ���ϴ¹��

// ���� ������ ����� �����ִ� Plus ��� �̸��� �Լ�
// �Է°����� ���� 2���� �䱸�Ѵ�
int Plus(int a, int b) {
	return a + b; // �����
}


void MemorySwap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
// ���� 
void Case() {
	printf("==========================================================\n");

}
float Calculator(char operator1, float number2, float number1) {
	switch (operator1) {		// char -> ����(����)
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
	�������迭

	�迭�̶� ? 1byte �������� ����

	�Լ�**
		: (���α׷��ֿ���)  �Է��� ���ؼ� ������ ������ �� ������� �ǵ����ִ� ���
	
	�޸𸮽���
	*/

	char arr[2][3] = { 1,2,3,4,5,6 }; // �������迭 : �迭�� ���� �迭
	arr[0][1]; // ������ �̷�������

	arr;
	printf("%d\n", arr);
	printf("%d\n", &arr[0][0]);

	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
	// -> 3��ŭ ���� �迭�̹Ƿ� �ּҴ� 3��ŭ ���̳���
	// �������迭�� �̷л����δ� ���Ѵ�� ������ ������, ���α׷���(�����Ʃ���) 20�������ۿ� �� ����
	
	///////////////////////////////////////////////////////////

/*	int arr[4][4];
	int** ptr = arr;*/ // �������͸� �Ἥ �������迭�� �ּҸ� ����ؾ���
	// �ּ� -> ����/ �迭�� �ּ�-> ����
	// �������迭�� �����ͷ� ���� �� 1���� �迭�� �ּ�ó�� ����Ҽ� �۾־���


	//////////////////////////////////////////////////////////

	int gugu2[81] = { 0 };
	for (int i = 0; i < 81; i++) {
		gugu2[i] = (i / 9) * (i % 9);
	}

		// ���� �Ʒ� �ڵ尡 �Ȱ��� ������ ���ڴٷ� 

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
		Sleep(3000); // ȭ��������~
			system("cls");
		Case();
	} 
	return 0;


}


