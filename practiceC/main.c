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


//int main() {
//	int ch;
//
//	while (1) {
//		ch = getchar();
//		if (ch == EOF)
//			break;
//		putchar(ch);
//	}
//	return 0;
//}


//int main() {
//	char* str = "Simple String";
//
//	printf("1. puts test ------ \n");
//	puts(str);
//	puts("So Simple String");
//
//	printf("2. fputs test ------ \n");
//	fputs(str, stdout); printf("\n");
//	fputs("So Simple String", stdout); printf("\n");
//
//	printf("3. end of main ---- \n");
//	return 0;
//}


//int main(void) {
//	char str[7];
//	int i;
//
//	for (i = 0; i < 3; i++) {
//		fgets(str, sizeof(str), stdin);
//		printf("Read %d: %s \n", i + 1, str);
//	}
//
//	return 0;
//}


//void ClearLineFromReadBuffer(void) {
//	while (getchar() != '\n');
//}
//
//int main(void) {
//	char perID[7];
//	char name[10];
//
//	fputs("주민번호 앞 6자리 입력: ", stdout);
//	fgets(perID, sizeof(perID), stdin);
//	ClearLineFromReadBuffer();
//
//	fputs("이름 입력: ", stdout);
//	fgets(name, sizeof(name), stdin);
//
//	printf("주민번호: %s\n", perID);
//	printf("이름: %s\n", name);
//	return 0;
//}


//#include <string.h>
//
//void RemoveBSN(char str[]) {
//	int len = strlen(str);
//	str[len - 1] = 0;
//}
//
//int main(void) {
//	char str[100];
//	printf("문자열 입력: ");
//	fgets(str, sizeof(str), stdin);
//	printf("길이: %d, 내용: %s \n", strlen(str), str);
//
//	RemoveBSN(str);
//	printf("길이: %d, 내용: %s \n", strlen(str), str);
//	return 0;
//}


//struct point {
//	int xpos;
//	int ypos;
//};
//
//int main(void) {
//	struct point pos1 = { 1, 2 };
//	struct point pos2 = { 100, 200 };
//	struct point* pptr = &pos1;
//
//	(*pptr).xpos += 4;
//	(*pptr).ypos += 5;
//	printf("[%d, %d] \n", pptr->xpos, pptr->ypos);
//
//	pptr = &pos2;
//	pptr->xpos += 1;
//	pptr->ypos += 2;
//	printf("[%d, %d] \n", (*pptr).xpos, (*pptr).ypos);
//	return 0;
//}


//struct point {
//	int xpos;
//	int ypos;
//};
//
//struct circle {
//	double radius;
//	struct point* center;
//};
//
//int main() {
//	struct point cen = { 2, 7 };
//	double rad = 5.5;
//
//	struct circle ring = { rad, &cen };
//	printf("원의 반지름: %g \n", ring.radius);
//	printf("원의 중심 [%d, %d] \n", (ring.center)->xpos, (ring.center)->ypos);
//	return 0;
//}


//struct point {
//	int xpos;
//	int ypos;
//	struct point* ptr;
//};
//
//int main(void) {
//	struct point pos1 = { 1, 1 };
//	struct point pos2 = { 2, 2 };
//	struct point pos3 = { 3, 3 };
//
//	pos1.ptr = &pos2;
//	pos2.ptr = &pos3;
//	pos3.ptr = &pos1;
//
//	printf("Connection to Points\n");
//	printf("[%d, %d] and [%d, %d] \n",
//		pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos);
//	printf("[%d, %d] and [%d, %d] \n",
//		pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos);
//	printf("[%d, %d] and [%d, %d] \n",
//		pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos);
//
//	return 0;
//}


//typedef struct point {
//	int xpos;
//	int ypos;
//} Point;
//
//void ShowPosition(Point pos) {
//	printf("[%d, %d] \n", pos.xpos, pos.ypos);
//}
//
//Point GetCurrentPosition(void) {
//	Point cen;
//	printf("Input current pos: ");
//	scanf_s("%d %d", &cen.xpos, &cen.ypos);
//	return cen;
//}
//
//int main(void) {
//	Point curPos = GetCurrentPosition();
//	ShowPosition(curPos);
//	return 0;
//}


//typedef struct person {
//	char name[20];
//	char phoneNum[20];
//	int age;
//} Person;
//
//void ShowPersonInfo(Person man) {
//	printf("name: %s \n", man.name);
//	printf("phone: %s \n", man.phoneNum);
//	printf("age: %d \n", man.age);
//}
//
//Person ReadPersonInfo(void) {
//	Person man;
//	printf("name? "); scanf_s("%s", man.name, sizeof(man.name));
//	printf("phone? "); scanf_s("%s", man.phoneNum, sizeof(man.name));
//	printf("age? "); scanf_s("%d", &man.age);
//	return man;
//}
//
//int main() {
//	Person man = ReadPersonInfo();
//	ShowPersonInfo(man);
//	return 0;
//}

// Call-by-reference
//typedef struct point {
//	int xpos;
//	int ypos;
//} Point;
//
//void OrgSymTrans(Point* ptr) {
//	ptr->xpos = (ptr->xpos) * -1;
//	ptr->ypos = (ptr->ypos) * -1;
//}
//
//void ShowPosition(Point pos) {
//	printf("[%d, %d] \n", pos.xpos, pos.ypos);
//}
//
//int main(void) {
//	Point pos = { 7, -5 };
//	OrgSymTrans(&pos);
//	ShowPosition(pos);
//	OrgSymTrans(&pos);
//	ShowPosition(pos);
//	return 0;
//}


//typedef struct point {
//	int xpos;
//	int ypos;
//} Point;
//
//int main() {
//	Point pos1 = { 1, 2 };
//	Point pos2;
//	pos2 = pos1;
//
//	printf("SIZE: %d \n", sizeof(pos1));
//	printf("[%d, %d] \n", pos1.xpos, pos1.ypos);
//	printf("SIZE: %d \n", sizeof(pos2));
//	printf("[%d, %d] \n", pos2.xpos, pos2.ypos);
//	return 0;
//}


//typedef struct point {
//	int xpos;
//	int ypos;
//} Point;
//
//Point AddPoint(Point pos1, Point pos2) {
//	Point pos = { pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos };
//	return pos;
//}
//
//Point MinPoint(Point pos1, Point pos2) {
//	Point pos = { pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos };
//	return pos;
//}
//
//int main() {
//	Point pos1 = { 5, 6 };
//	Point pos2 = { 2, 9 };
//	Point result;
//
//	result = AddPoint(pos1, pos2);
//	printf("[%d, %d] \n", result.xpos, result.ypos);
//	result = MinPoint(pos1, pos2);
//	printf("[%d, %d] \n", result.xpos, result.ypos);
//	return 0;
//}


//typedef struct student {
//	char name[20];
//	char stdnum[20];
//	char school[20];
//	char major[20];
//	int year;
//} Student;
//
//void ShowStudentInfo(Student* sptr) {
//	printf("학생 이름: % \n", sptr->name);
//	printf("학생 고유번호: %s \n", sptr->stdnum);
//	printf("학교 이름: %s \n", sptr->school);
//	printf("선택 전공: %s \n", sptr->major);
//	printf("학년: %d \n", sptr->year);
//}
//
//int main() {
//	Student arr[7];
//	int i;
//
//	for (i = 0; i < 7; i++) {
//		printf("이름: "); scanf_s("%s", arr[i].name, sizeof(arr[i].name));
//		printf("번호: "); scanf_s("%s", arr[i].stdnum, sizeof(arr[i].stdnum));
//		printf("학교: "); scanf_s("%s", arr[i].school, sizeof(arr[i].school));
//		printf("전공: "); scanf_s("%s", arr[i].major, sizeof(arr[i].major));
//		printf("학년: "); scanf_s("%d", &arr[i].year, sizeof(arr[i].year));
//	}
//
//	for (i = 0; i < 7; i++)
//		ShowStudentInfo(&arr[i]);
//	return 0;
//}


//typedef struct point {
//	int xpos;
//	int ypos;
//} Point;
//
//typedef struct circle {
//	Point cen;
//	double rad;
//} Circle;
//
//void ShowCircleInfo(Circle* cptr) {
//	printf("[%d, %d] \n", (cptr->cen).xpos, (cptr->cen).ypos);
//	printf("radius: %g \n\n", cptr->rad);
//}
//
//int main() {
//	Circle c1 = { {1, 2}, 3.5 };
//	Circle c2 = { 2, 4, 3.9 };
//	ShowCircleInfo(&c1);
//	ShowCircleInfo(&c2);
//	return 0;
//}


//typedef struct sbox {
//	int mem1;
//	int mem2;
//	double mem3;
//} SBox;
//
//typedef union ubox {
//	int mem1;
//	int mem2;
//	double mem3;
//} UBox;
//
//int main(void) {
//	SBox sbx;
//	UBox ubx;
//	printf("%p %p %p \n", &sbx.mem1, &sbx.mem2, &sbx.mem3);
//	printf("%p %p %p \n", &ubx.mem1, &ubx.mem2, &ubx.mem3);
//	printf("%d %d \n", sizeof(SBox), sizeof(UBox));
//	return 0;
//}


//typedef union ubox {
//	int mem1;
//	int mem2;
//	double mem3;
//} UBox;
//
//int main() {
//	UBox ubx;
//	ubx.mem1 = 20;
//	printf("%d \n", ubx.mem2);
//
//	ubx.mem3 = 7.15;
//	printf("%d \n", ubx.mem1);
//	printf("%d \n", ubx.mem2);
//	printf("%g \n", ubx.mem3);
//	return 0;
//}


//typedef struct dbshort {
//	unsigned short upper;
//	unsigned short lower;
//} DBShort;
//
//typedef union rdbuf {
//	int iBuf;
//	char bBuf[4];
//	DBShort sBuf;
//} RDBuf;
//
//int main() {
//	RDBuf buf;
//	printf("정수 입력: "); scanf_s("%d", &(buf.iBuf));
//
//	printf("상위 2바이트: %u \n", buf.sBuf.upper);
//	printf("하위 2바이트: %u \n", buf.sBuf.lower);
//	printf("상위 1바이트 아스키 코드: %c \n", buf.bBuf[0]);
//	printf("하위 1바이트 아스키 코드: %c \n", buf.bBuf[3]);
//	return 0;
//}


//typedef enum syllable {
//	Do=1, Re=2, Mi=3, Fa=4, So=5, La=6, Ti=7
//} Syllable;
//
//void Sound(Syllable sy) {
//	switch (sy) {
//	case Do:
//		puts("Do"); return;
//	case Re:
//		puts("Re"); return;
//	case Mi:
//		puts("Mi"); return;
//	case Fa:
//		puts("Fa"); return;
//	case So:
//		puts("So"); return;
//	case La:
//		puts("La"); return;
//	case Ti:
//		puts("Ti"); return;
//	}
//	puts("Daaaa");
//}
//
//int main() {
//	Syllable tone;
//	for (tone = Do; tone <= Ti; tone += 1)
//		Sound(tone);
//	return 0;
//}


//char* ReadUserName(void) {
//	char name[30];
//	printf("What's your name? ");
//	gets(name);
//	return name;
//}
//
//int main() {
//	char* name1;
//	char* name2;
//	name1 = ReadUserName();
//	printf("name1: %s \n", name1);
//	name2 = ReadUserName();
//	printf("name2: %s \n", name2);
//	return 0;
//}


//int main() {
//	int* ptr1 = (int*)malloc(sizeof(int));
//	int* ptr2 = (int*)malloc(sizeof(int) * 7);
//	int i;
//
//	*ptr1 = 20;
//	for (i = 0; i < 7; i++)
//		ptr2[i] = i + i;
//
//	printf("%d \n", *ptr1);
//	for (i = 0; i < 7; i++)
//		printf("%d ", ptr2[i]);
//
//	free(ptr1);
//	free(ptr2);
//	return 0;
//}


//#include <stdlib.h>
//
//// A new malloc memory address will be created everytime this func is called.
//char* ReadUserName(void) {
//	char* name = (char*)malloc(sizeof(char) * 30);
//	printf("What's your name? ");
//	gets(name);
//	return name;
//}
//
//int main() {
//	char* name1;
//	char* name2;
//	name1 = ReadUserName();
//	printf("name1: %s \n", name1);
//	name2 = ReadUserName();
//	printf("name2: %s \n", name2);
//
//	printf("again name1: %s \n", name1);
//	printf("again name2: %s \n", name2);
//	free(name1);
//	free(name2);
//	return 0;
//}


// p.558