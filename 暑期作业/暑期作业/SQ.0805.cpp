#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//enum ENUM_A{
//	X1,
//	Y1,
//	Z1 = 5,
//	A1,
//	B1
//};
//enum ENUM_A enumA = Y1;
//enum ENUM_A enumB = B1;
//
//int main(){
//	printf("%d,", enumA);
//	printf("%d\n", enumB);
//	system("pause");
//	return 0;
//}

//int Change(int *pX){
//	int y = 8;
//	y = y - *pX;
//	pX = &y;
//	return 0;
//}
//
//int main(){
//	int xx = 3;
//	int *pY = &xx;
//	Change(pY);
//	printf("%d\n", *pY);
//	system("pause");
//	return 0;
//}

//int main(){
//	char arr[2][4];
//	strcpy((char *)arr, "you");
//	strcpy(arr[1], "me");
//	arr[0][3] = '&';
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}

//int fun(int x){
//	int count = 0;
//	while (x){
//		count++;
//		x = x & (x - 1);
//	}
//	return count;
//}
//
//int main(){
//	printf("fun(2017)=%d\n", fun(2019));
//	system("pause");
//	return 0;
//}

//#define CIR(r) r*r
//void main(){
//	int a = 1;
//	int b = 2;
//	int t;
//	t = CIR(a + b);
//	printf("%d\n", t);
//	system("pause");
//}

//unsigned long g_ulGlobal = 0;
//void GlobalInit(unsigned long ulArg){
//	ulArg = 0x01;
//	return;
//}
//
//void main(){
//	GlobalInit(g_ulGlobal);
//	printf("%lu", g_ulGlobal);
//	system("pause");
//	return;
//}

//int fun(int a, int b){
//	if (a > b)
//		return(a + b);
//	else
//		return(a - b);
//}
//
//int main(){
//	int x = 3, y = 8, z = 6, r;
//	r = fun(fun(x, y), 2 * z);
//	printf("%d\n", r);
//	system("pause");
//	return 0;
//}

//int f(int a){
//	int b = 0;
//	static int c = 3;
//	a = c++, b++;
//	return(a);
//}
//
//int main(){
//	int a = 2, i, k;
//	for (i = 0; i < 2; i++){
//		k = f(a++);
//	}
//	printf("%d\n", k);
//	system("pause");
//	return 0;
//}

//int x = 3;
//void inc(){
//	static int x = 1;
//	x *= (x + 1);
//	printf("%d\n", x);
//	return;
//}
//
//int main(){
//	int i;
//	for (i = 1; i < x; i++){
//		inc();
//	}
//	system("pause");
//	return 0;
//}