// Revival of C

#include <stdio.h>

//int main() {
//	printf("Hello, git");
//	return 0;
//}

// p.50

//int main() {
//	int num1 = 3;
//	int num2 = 4;
//	int result = num1 + num2;
//
//	return 0;
//}

//int main(void) {
//	int num1 = 10;
//	int num2 = 12;
//	int result1, result2, result3;
//
//	result1 = (num1 == num2);
//	result2 = (num1 <= num2);
//	result3 = (num1 > num2);
//
//	printf("result1: %d \n", result1);
//	printf("result2: %d \n", result2);
//	printf("result3: %d \n", result3);
//	return 0;
//}

//int main() {
//	int num1 = 15;
//	int num2 = 20;
//	int num3 = ~num1;
//	printf("Result of AND: %d \n", num3);
//	return 0;
//}

// p.134

//int main() {
//	char sel;
//	printf("M: morning, A: afternoon, E: evening \n");
//	printf("Type: ");
//	scanf_s("%c", &sel);
//
//	switch (sel) {
//	case 'M':
//	case 'm':
//		printf("Morning \n");
//		break;
//	case 'A':
//	case 'a':
//		printf("Afternoon \n");
//		break;
//	case 'E':
//	case 'e':
//		printf("Evening \n");
//		break;
//	}
//	return 0;
//}

//int Add(int num1, int num2) {
//	return num1 + num2;
//}
//
//void ShowAddResult(int num) {
//	printf("Result: %d \n", num);
//}
//
//int ReadNum(void) {
//	int num;
//	scanf_s("%d", &num);
//	return num;
//}
//
//void HowToUseThisProg(void) {
//	printf("Type two numbers.\n");
//	printf("Start: ");
//}
//
//int main() {
//	int result, num1, num2;
//	HowToUseThisProg();
//	num1 = ReadNum();
//	num2 = ReadNum();
//	result = Add(num1, num2);
//	ShowAddResult(result);
//	return 0;
//}

// p.274

//int main(void) {
//	int arr[3] = { 0, 1, 2 };
//	printf("Name of the Array: %p \n", arr);
//	printf("First: %p \n", &arr[0]);
//	printf("Second: %p \n", &arr[1]);
//	printf("Third: %p \n", &arr[2]);
//
//	return 0;
//}

//int main() {
//	int arr[3] = { 15, 25, 35 };
//	int* ptr = arr;
//
//	printf("%d %d \n", ptr[0], arr[0]);		// ptr == address, arr == address. So,
//	printf("%d %d \n", ptr[1], arr[1]);		// able to express the value as arr[0].
//	printf("%d %d \n", ptr[2], arr[2]);		// this means the same as *arr.
//	printf("%p %p \n", ptr, arr);			// arr[0] == *arr
//	printf("%p %p \n", &ptr[1], &arr[1]);
//	printf("%d %d \n", *ptr, *arr);
//	return 0;
//}

//int main() {
//	int* ptr1 = 0x0010;
//	double* ptr2 = 0x0010;
//
//	printf("%p %p \n", ptr1 + 1, ptr1 + 2);		// size of int is increased.
//	printf("%p %p \n", ptr2 + 1, ptr2 + 2);		// size of double is increased.
//
//	printf("%p %p \n", ptr1, ptr2);
//	ptr1++;
//	ptr2++;
//	printf("%p %p \n", ptr1, ptr2);
//	return 0;
//}

//int main() {
//	int arr[3] = { 11, 22, 33 };
//	int* ptr = arr;
//	printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));
//	// == ptr[0], ptr[1], ptr[2]
//	// == arr[0], arr[1], arr[2]
//
//	printf("%d ", *ptr); ptr++;
//	printf("%d ", *ptr); ptr++;
//	printf("%d ", *ptr); ptr--;
//	printf("%d ", *ptr); ptr--;
//	printf("%d ", *ptr); printf("\n");
//	return 0;
//}

// p.300

//int main() {
//	char str1[] = "My String";
//	char* str2 = "Your String";
//	printf("%s %s \n", str1, str2);
//
//	str2 = "Our String";
//	printf("%s %s \n", str1, str2);
//
//	str1[0] = 'X';
//	//str2[0] = 'X';
//	printf("%s %s \n", str1, str2);
//	return 0;
//}


//int main() {
//	int num1 = 10, num2 = 20, num3 = 30;
//	int* arr[3] = { &num1, &num2, &num3 };
//
//	printf("%d \n", *arr[0]);
//	printf("%d \n", *arr[1]);
//	printf("%d \n", *arr[2]);
//
//	return 0;
//}


//int main(void) {
//	char* strArr[3] = { "Simple", "String", "Array" };
//	printf("%s \n", strArr[0]);
//	printf("%s \n", strArr[1]);
//	printf("%s \n", strArr[2]);
//
//	return 0;
//}


//void ShowArayElem(int* param, int len) {
//	int i;
//	for (i = 0; i < len; i++)
//		printf("%d ", param[i]);
//	printf("\n");
//}
//
//int main() {
//	int arr1[3] = { 1,2,3 };
//	int arr2[5] = { 4, 5, 6, 7, 8 };
//	ShowArayElem(arr1, sizeof(arr1) / sizeof(int));
//	ShowArayElem(arr2, sizeof(arr2) / sizeof(int));
//	return 0;
//}


//void ShowArayElem(int* param, int len) {
//	int i;
//	for (i = 0; i < len; i++)
//		printf("%d ", param[i]);
//	printf("\n");
//}
//
//void AddArayElem(int* param, int len, int add) {
//	int i;
//	for (i = 0; i < len; i++)
//		param[i] += add;
//}
//
//int main() {
//	int arr[3] = { 1, 2, 3 };
//	AddArayElem(arr, sizeof(arr) / sizeof(int), 1);
//	ShowArayElem(arr, sizeof(arr) / sizeof(int));
//
//	AddArayElem(arr, sizeof(arr) / sizeof(int), 2);
//	ShowArayElem(arr, sizeof(arr) / sizeof(int));
//
//	AddArayElem(arr, sizeof(arr) / sizeof(int), 3);
//	ShowArayElem(arr, sizeof(arr) / sizeof(int));
//
//	return 0;
//}


//void Swap(int* ptr1, int* ptr2) {
//	int temp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = temp;
//}
//
//int main() {
//	int num1 = 10;
//	int num2 = 20;
//	printf("num1 num2: %d %d \n", num1, num2);
//	Swap(&num1, &num2);
//	printf("num1 num2: %d %d \n", num1, num2);
//	return 0;
//}


//int main() {
//	int num = 20;
//	int* ptr = &num;
//	*ptr = 30;
//	printf("%p \n", ptr);
//
//	return 0;
//}


//void SwapIntPtr(int* p1, int* p2) {
//	int* temp = p1;
//	p1 = p2;
//	p2 = temp;
//}
//
//int main() {
//	int num1 = 10, num2 = 20;
//	int* ptr1, * ptr2;
//	ptr1 = &num1, ptr2 = &num2;
//	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
//
//	SwapIntPtr(ptr1, ptr2);
//	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
//	return 0;
//}


//void SwapIntPtr(int** dp1, int** dp2) {
//	int* temp = *dp1;
//	*dp1 = *dp2;
//	*dp2 = temp;
//}
//
//int main(void) {
//	int num1 = 10, num2 = 20;
//	int* ptr1, * ptr2;
//	ptr1 = &num1, ptr2 = &num2;
//	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
//
//	SwapIntPtr(&ptr1, &ptr2);
//	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
//	return 0;
//}


//int main() {
//	int num1 = 10, num2 = 20, num3 = 30;
//	int* ptr1 = &num1;
//	int* ptr2 = &num2;
//	int* ptr3 = &num3;
//
//	int* ptrArr[] = { ptr1, ptr2, ptr3 };
//	int** dptr = ptrArr;
//
//	printf("%d %d %d \n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));
//	printf("%d %d %d \n", *(dptr[0]), *(dptr[1]), *(dptr[2]));
//	return 0;
//}


//int main(void) {
//	int arr1[2][2] = {
//		{1, 2}, 
//		{3, 4}
//	};
//
//	int arr2[3][2] = {
//		{1, 2},
//		{3, 4},
//		{5, 6}
//	};
//
//	int arr3[4][2] = {
//		{1, 2},
//		{3, 4},
//		{5, 6},
//		{7, 8}
//	};
//
//	int(*ptr)[2];
//	int i;
//
//	ptr = arr1;
//	printf("** Show 2,2 arr1 **\n");
//	for (i = 0; i < 2; i++)
//		printf("%d %d \n", ptr[i][0], ptr[i][1]);
//
//	ptr = arr2;
//	printf("** Show 3,2 arr2 **\n");
//	for (i = 0; i < 3; i++)
//		printf("%d %d \n", ptr[i][0], ptr[i][1]);
//
//	ptr = arr3;
//	printf("** Show 4,2 arr3 **\n");
//	for (i = 0; i < 4; i++)
//		printf("%d %d \n", ptr[i][0], ptr[i][1]);
//	return 0;
//}


//int main(void) {
//	int num1 = 10, num2 = 20, num3 = 30, num4 = 40;
//	int arr2d[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int i, j;
//
//	int* whoA[4] = { &num1, &num2, &num3, &num4 };
//	int(*whoB)[4] = arr2d;
//
//	printf("%d %d %d %d \n", *whoA[0], *whoA[1], *whoA[2], *whoA[3]);
//	for (i = 0; i < 2; i++) {
//		for (j = 0; j < 4; j++)
//			printf("%d ", whoB[i][j]);
//		printf("\n");
//	}
//	return 0;
//}


//void ShowArr2DStyle(int(*arr)[4], int column) {
//	int i, j;
//	for (i = 0; i < column; i++) {
//		for (j = 0; j < 4; j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//	printf("\n");
//}
//
//int Sum2DArr(int arr[][4], int column) {
//	int i, j, sum = 0;
//	for (i = 0; i < column; i++)
//		for (j = 0; j < 4; j++)
//			sum += arr[i][j];
//	return sum;
//}
//
//int main(void) {
//	int arr1[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int arr2[3][4] = { 1, 1, 1, 1, 3, 3, 3, 3, 5, 5, 5, 5 };
//
//	ShowArr2DStyle(arr1, sizeof(arr1) / sizeof(arr1[0]));
//	ShowArr2DStyle(arr2, sizeof(arr2) / sizeof(arr2[0]));
//	printf("Sum of arr1: %d \n", Sum2DArr(arr1, sizeof(arr1) / sizeof(arr1[0])));
//	printf("Sum of arr2: %d \n", Sum2DArr(arr2, sizeof(arr2) / sizeof(arr2[0])));
//	return 0;
//}


//void SimpleAdder(int n1, int n2) {
//	printf("%d + %d = %d \n", n1, n2, n1 + n2);
//}
//
//void ShowString(char* str) {
//	printf("%s \n", str);
//}
//
//int main(void) {
//	char* str = "Function Pointer";
//	int num1 = 10, num2 = 20;
//
//	void (*fptr1)(int, int) = SimpleAdder;
//	void (*fptr2)(char*) = ShowString;
//
//	fptr1(num1, num2);
//	fptr2(str);
//	return 0;
//}


//int WhoIsFirst(int age1, int age2, int (*cmp)(int n1, int n2)) {
//	return cmp(age1, age2);
//}
//
//int OlderFirst(int age1, int age2) {
//	if (age1 > age2)
//		return age1;
//	else if (age1 < age2)
//		return age2;
//	else
//		return 0;
//}
//
//int YoungerFirst(int age1, int age2) {
//	if (age1 < age2)
//		return age1;
//	else if (age1 > age2)
//		return age2;
//	else
//		return 0;
//}
//
//int main(void) {
//	int age1 = 20;
//	int age2 = 30;
//	int first;
//
//	printf("입장순서 1 \n");
//	first = WhoIsFirst(age1, age2, OlderFirst);
//	printf("%d or %d : %d \n", age1, age2, first);
//
//	printf("입장순서 2 \n");
//	first = WhoIsFirst(age1, age2, YoungerFirst);
//	printf("%d or %d : %d \n", age1, age2, first);
//	return 0;
//}


// ** 함수 포인터 개인 연습 **
//int Func(int* ptr1, int* ptr2, int (*cmp)(int* n1, int* n2)) {
//	cmp(ptr1, ptr2);
//}
//
//int Swap(int* n1, int* n2) {
//	int temp = *n1;
//	*n1 = *n2;
//	*n2 = temp;
//}
//
//int PlusOne(int* n1, int* n2) {
//	*n1 += 1;
//	*n2 += 1;
//}
//
//int main() {
//	int num1 = 10;
//	int num2 = 100;
//
//	printf("num1: %d \nnum2: %d\n\n", num1, num2);
//
//	printf("** Swap **\n");
//	Func(&num1, &num2, Swap);
//	printf("num1: %d \nnum2: %d\n\n", num1, num2);
//
//	printf("** PlusOne **\n");
//	Func(&num1, &num2, PlusOne);
//	printf("num1: %d \nnum2: %d\n\n", num1, num2);
//
//	return 0;
//}


//void SoSimpleFunc(void) {
//	printf("I'm so simple");
//}
//
//int main(void) {
//	int num = 20;
//	void* ptr;
//
//	ptr = &num;
//	printf("%p \n", ptr);
//
//	ptr = SoSimpleFunc;
//	printf("%p \n", ptr);
//	return 0;
//}


//int main(int argc, char* argv[]) {
//	int i = 0;
//	printf("전달된 문자열의 수: %d \n", argc);
//
//	for (i = 0; i < argc; i++)
//		printf("%d번째 문자열: %s \n", i + 1, argv[i]);
//	return 0;
//}


//void ShowAllString(int argc, char* argv[]) {
//	int i;
//	for (i = 0; i < argc; i++)
//		printf("%s \n", argv[i]);
//}
//
//int main(void) {
//	char* str[3] = {
//		"C Programming",
//		"C++ Programming",
//		"Java Programming"
//	};
//	ShowAllString(3, str);
//	return 0;
//}


//int main(void) {
//	int ch1, ch2;
//
//	ch1 = getchar();
//	ch2 = fgetc(stdin);
//
//	putchar(ch1);
//	fputc(ch2, stdout);
//	return 0;
//}


// p.421