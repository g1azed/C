#include <stdio.h> 
//->  ��� X / ����� ������ �˷��ִ� �뵵 


// Program �̶�~? 

// ��ǻ�� => ���� �� �����ϸ� ���ϴ�  --> ���α׷���
// ��ǻ�͸��� ��� = ����     ���θ��� ����� �ڲ� �ϴ����� ���¸���
// �츮�� ��ǻ�Ϳ��� ����� ������ ��� = ���α׷��־�� ( C��� )

//Ư������
// \n Enter
// \t ���� tab
// \b �����ִ� ��ġ�� �� ���ڸ� ����� backspace
// \a Alarm  ��ǻ��' Ư����ǰ�� �˶� -> �︱���ɼ� ����
// \" ���ڿ����� ����ǥ�� ����ϱ� ���� ����ǥ
// \\ \�� ����ϱ�����

// ��ó���� -> ��ǻ�Ϳ��� ������ ��ɰ� �ƹ� �������, ��ũ��(�ڵ����� ����ġȯ)
// A -> B�� ġȯ
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
	printf("\t printf(\" ȫ���� \\n \"); \n ");
	printf("\t printf(\" Woman \\n \"); \n ");
	printf("\t printf(\" Kaywon Art University \\n \"); \n ");
	printf("\t printf(\" 22061126 \\n \"); \n ");
	printf("\t return 0; \\n \n ");
	printf(" }  ");

	NL;

	TT;
	PRINTNL("ȫ����");
	TT;
	PRINTNL("����");
	TT;
	PRINTNL("�б�");
	TT;
	PRINTNL("�й�");




}
//int main() { // ������ (�����Լ�)
//
//	printf("#include <stdio.h> \n\n\n\n"); 
//	printf("int main(){ \n");
//	printf("\t printf(\"ȫ����\");\b  \n");
//	printf("\t printf(\"WOMAN\"); \n");
//	printf("\t printf(\"Kaywon Art University\"); \n");
//	printf("\t printf(\"22061126\"); \n");
//	//printf("return 0; \n\n");
//	printf("}\n");
//
//	// ���๮�� = ���� = �ٹٲ�
//
//	// ����� ����
//
//	return 0;
//	// {} ���۰� ���� �˸��� �߰�ȣ
//} 
// ���� =>
// â���� �ַ�Ǻ��� ctrl + shift + B
// ����� => ����������ʰ� ���� ctrl + f5

// ����� ���������� ������ ������ �߿��ϴ�!
// => ���������� , ���������� �Ʒ��� ���� TopDown

// ������ = �������̱⶧���� ������ ������ �ȉ�