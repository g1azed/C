#include "../headers/Custom.h"

int main() {
	/*

	���� + �Ҵ�
		�����Ҵ� -> ��������, �ڵ����� �Ҵ����� , �����̸����� �����ν�
		������ ����°��� �����Ҵ��̴�.
		���� �ϳ��� ����ٸ� < �����Ҵ� / �Ҵ�����>  �� ���ÿ� �̷������

		�����Ҵ� -> �ڵ����� �Ҵ����� X , �����̸�X -> �ּҷ� �����ؾ���

	*/

	// �����Ҵ��Լ�
	//int* p = (int*)malloc(sizeof(int)*10); // memory allocation  
		//sizeof: �迭?�� ũ��
	//�����Ϳ� �������س��� �����Ҵ��� �Ϳ� ������ �����ϴа� ������ �����Ϳ� ����***
	//free(p); 
	// �� �ּҿ��ִ� �����Ҵ纯���� �����ض� (������ ����X)

	//int cnt;
	//scanf("%d\n", &cnt);
	//int* p = (int*)malloc(sizeof(int) * cnt);
	//for (int i = 0; i < cnt; ++i) {
	//	p[i] = i;
	//	printf("%d\n", p[i]);
	//}
	//free(p);


	// N���� ���ڸ� �Է¹ް� �Է¤����� ���� �� 
	// ���� ū���� ���� ���� ���� ���ϴ� ���α׷�

	// N���� ���ڸ� �Է¹ް� �Է¹��� ���� �� ���� ū���� ���� ���� �� ������ �������� ���� ���
	// N���� ���ڸ� �Է¹ް� �Է¹��� ���� �� ¦���� ���� ū���� Ȧ���� ���� ū���� ���
	//RANDOMSEED;

	//int Cnt = ScanInt();
	//MAL(int, p, Cnt); // 	int* p = (int*)malloc(sizeof(int) * 10 );

	//FOR(i, Cnt)
	//	p[i] = Random(10, 100);
	//FOREND;

	//	int sum = 0;
	//FOR(i, Cnt)
	//	sum += p[i];
	//FOREND;

	//int big = p[0], tiny = p[0];
	//	FOR(i, Cnt)
	//	big = BIG(big, p[i]);
	//	tiny = SMALL(tiny, p[i]);
	//	FOREND;

	//int bigodd = p[0], bigeven = p[0];
	//	FOR(i, Cnt)
	//		if (p[i] % 2 == 1)  bigodd = BIG(bigodd, p[i]);
	//		else				bigeven = BIG(bigeven, p[i]);
	//	FOREND;

	//printf("BIG : %d\n, SMALL : %d\n", big, tiny);
	//printf("SUM : %d\n", sum - big - tiny);
	//printf("BIGODD : %d\n BIGEVEN : %d\n ", bigodd, bigeven);

	//MALR(p); // free(p);


	// ���� �����
	//FILE* fp = fopen("../datas/data.txt", "rt");
	//	//Mode(�ɼ�)
	//	// read(������ �ϴ� ������ ������ ����) rt
	//	// write(������ �ϴ� ������ �ֵ���� ���� �� ���� wt
	//	// append (������ �ϴ� ������ ������ ���� ������ ���� at
	//	// text(����) , binary(������)
	//FILE* fwp = fopen("../datas/result.txt", "wt");
	//// ���� ���� �����Ҽ� �־���Ѵ�
	//int temp;
	//int temp2;
	//while (!feof(fp)) {
	//	fscanf(fp, "%d %d", &temp, &temp2);
	//	fprintf(fwp, "%2d+%2d =%3d\n", temp, temp2 , temp+temp2);
	//	fprintf(fwp, "%2d-%2d =%3d\n", temp, temp2, temp - temp2);
	//	fprintf(fwp, "%2d*%2d =%3d\n", temp, temp2, temp * temp2);
	//	fprintf(fwp, "%2d/%2d =%3d\n", temp, temp2, temp / temp2);
	//}
	////feof(fp); // end of file

	////fprintf(fp, "%d where is my house\n", 1); // �޸��忡 ���


	//fclose(fp); // ���� �ݴ� �۾�** (+������)
	//fclose(fwp);

	// ���Ͽ��� ���� 2���� n���� �о���� �� ������ ��Ģ���� ���( +.-.*.%)�� �ٸ� ���Ͽ� �����ϴ� ���α׷�


	FILE* fp = fopen("../datas/lineinput.txt", "rt");
	char result[500];
	while (!feof(fp)) {
		fgets(result, 500, fp);
		strip(result);
		printf("%s\n", result);
	} // fgets : ������ �о�Ͷ�(�ִ� 500����)

	fclose(fp);

}