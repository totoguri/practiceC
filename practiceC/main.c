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

int main() {
	char str1[] = "My String";
	char* str2 = "Your String";
	printf("%s %s \n", str1, str2);

	str2 = "Our String";
	printf("%s %s \n", str1, str2);

	str1[0] = 'X';
	//str2[0] = 'X';
	printf("%s %s \n", str1, str2);
	return 0;
}