#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define En printf("\n")
#define intinput(text, value) printf(text);scanf("%d", &value);
#define floatinput(text, value) printf(text);scanf("%f", &value);
#define charinput(text, value) printf(text);scanf("%s", &value);

int main() {


// ����� ����
// ��� : ������ ����

	printf("3\n", 3); // ���ڸ� �����(�߰���� : 3) ���
	// �߰�������� � �ൿ�� ������ ������� �ʾ���

	printf("(%d)\n", 3); // %d : ���ڰ� �ƴ϶� �߰�������� ������ ����� %d ��ġ�� �־����~ 
	printf("(%d)(%d)", 7,7);
	// => (7)(-641) ���
	// ��ǥ�ڿ� ���ڰ� ������ �̻��� ���� ���

	printf("(%d)(%d) \n", 7, 9);
	//=> (7) (9)


// ���� : ���� �� �ִ� ����


	// �����̸� : �ĺ� ������ ��ü��
	int Distance; //  Distance : �����̸� -> ��ȭ�� ������ ����
	Distance = 3; // Distancs ������ ���ڸ� 3���� �����ض�\

	printf("%d \n", Distance); // => 3

	Distance = 9;
	printf("%d \n", Distance);  // => 9

		// �̸���Ģ
		// 1. ������ ��ҹ��� �� ����, �����(_)�� ����
		// 2. ���ڴ� ù ���ڷ� �� �� ����
		// 3. ���� �Ұ���



	//�ڷ���(=�ڷ�������)
	int a = 198; // �Ҽ����� ���� ������ ���º���
	float b = 198.987; // �Ҽ����� �ִ� ������ ���º���

// %d �� �Ҽ����� ���� ���ڸ� ȭ�鿡 ���� ���
// %f �� �Ҽ����� �ִ� ���ڸ� ȭ�鿡 ���� ���
// %s �� ���ڸ� ȭ���� ���

	printf("%d", a);
	En;
	printf("%f", b);
	En;
	En;
	En;

	// Q : ���� ��������� ȭ�鿡 ����h~

	//int Birth = 20000730;
	//printf("������� : %d", Birth);

	//En;
	//float weight = 10.333;
	//printf("������ : %f", weight);

	//En;
	//// ���ڸ� ����ϴ� ��
	//// -> ������ ����
	//char Name[100] = "ȫ����"; // ���ȣ�� ū ���ڸ� ���� ���� -> �迭��ﶧ �˷��ٰ���
	//printf("�̸� : %s", Name);
	//En;


	//�Է� : ���� Ű���忡 ģ ����
	//int BirthDay;
	//scanf_s("����� ������ : %d", &BirthDay); // & ���������!!
	//printf("����: %d", BirthDay);

	//char MyName[100];
	//scanf_s( "%s", MyName); // char ���϶� �տ� & �Ⱥ���
	//printf("�̸� : %s", MyName);

	//int year, month, day;
	//printf("�¾ ��: "); scanf("%d", &year);
	//printf("�¾ ��: ");  scanf("%d", &month);
	//printf("�¾ ��¥ : "); scanf("%d", &day);


	//char gender[200], name[300];
	//printf("���� : ");  scanf("%s", gender);
	//printf("�̸� : "); scanf("%s", name);

	//float kg;
	//printf("������ :  %5.2f"); scanf("%f", &kg);

	//printf("������� : %5d/%d/%d", year, month, day); En;
	//printf("���� : %5s", gender); En;
	//printf("�̸�: %s", name); En;
	//printf("������ : %5.2f", kg); En;

	// % ~ f,s,d ���� ~�� ���ڸ� ������ �׸�ŭ ���Ⱑ �Ǽ� ��µ�
	// %06f �� ���� ����ĭ�� 0�� �־ ���
	// %-6f �� ���� �����ʿ� ������ �׸�ŭ �����, ���� ����


	/*
	�̸�   :     ȫ����
	����   :		23��
	����   :	   ����
	����   : 2000/07/30
	������ :		 00
	Ű     :      164.3
	*/

	char Name[100], Gender[100];
	int Age, Year, Month, Day, Kg;
	float Height;

	printf("�̸�:  "); scanf("%s", Name);
	printf("����:  "); scanf("%d", &Age);
	printf("����:  "); scanf("%s", Gender);
	printf("�¾ ��:  "); scanf("%d", &Year);
	printf("�¾ ��:  "); scanf("%d", &Month);
	printf("�¾ ��:  "); scanf("%d", &Day);
	floatinput("Ű : ", Height);
	intinput("������ : ", Kg);


	printf("�̸� : %10s", Name); En;
	printf("���� : %10d��", Age); En;
	printf("���� : %10s", Gender); En;
	printf("���� : %4d/%2d/%2d", Year, Month, Day); En;
	printf("Ű   : %10f", Height); En;
	printf("������ : %10d", Kg); En;


	// 5��° �ٷ� ����
	//int kg;
	//intinput("������ : ", kg); // �� ���ٰ� �Ȱ��� �ǹ��̴�
	//printf("������: "); scanf("%d", &kg);






}