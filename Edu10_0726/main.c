#include "../headers/Custom.h"

int main() {
	/*

	동적 + 할당
		정적할당 -> 변수생성, 자동으로 할당해제 , 변수이름으로 개별인식
		변수를 만드는것은 정적할당이다.
		변수 하나를 만든다면 < 변수할당 / 할당해제>  가 동시에 이루어진다

		동적할당 -> 자동으로 할당해제 X , 변수이름X -> 주소로 관리해야함

	*/

	// 동적할당함수
	//int* p = (int*)malloc(sizeof(int)*10); // memory allocation  
		//sizeof: 배열?의 크기
	//포인터에 저장을해놔야 동적할당한 것에 접근이 가능하닉가 무조건 포인터에 저장***
	//free(p); 
	// 저 주소에있는 동적할당변수를 해제해라 (정적은 해제X)

	//int cnt;
	//scanf("%d\n", &cnt);
	//int* p = (int*)malloc(sizeof(int) * cnt);
	//for (int i = 0; i < cnt; ++i) {
	//	p[i] = i;
	//	printf("%d\n", p[i]);
	//}
	//free(p);


	// N개의 숫자를 입력받고 입력ㅂ다은 숫자 중 
	// 가장 큰수와 가장 작은 수를 구하는 프로그램

	// N개의 숫자를 입력받고 입력받은 숫자 중 가장 큰수와 가장 작은 수 제외한 나머지의 총합 출력
	// N개의 숫자를 입력받고 입력받은 숫자 중 짝수의 가장 큰수와 홀수의 가장 큰수를 출력
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


	// 파일 입출력
	//FILE* fp = fopen("../datas/data.txt", "rt");
	//	//Mode(옵션)
	//	// read(열고자 하는 파일이 없을때 에러) rt
	//	// write(열고자 하는 파일이 있든없든 삭제 후 생성 wt
	//	// append (열고자 하는 파일이 있으면 열고 없으면 생성 at
	//	// text(글자) , binary(이진법)
	//FILE* fwp = fopen("../datas/result.txt", "wt");
	//// 파일 열고 제어할수 있어야한다
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

	////fprintf(fp, "%d where is my house\n", 1); // 메모장에 출력


	//fclose(fp); // 파일 닫는 작업** (+저장기능)
	//fclose(fwp);

	// 파일에서 숫자 2개씩 n번을 읽어오고 두 숫자의 사칙연산 결과( +.-.*.%)를 다른 파일에 저장하는 프로그램


	FILE* fp = fopen("../datas/lineinput.txt", "rt");
	char result[500];
	while (!feof(fp)) {
		fgets(result, 500, fp);
		strip(result);
		printf("%s\n", result);
	} // fgets : 한줄을 읽어와라(최대 500글자)

	fclose(fp);

}