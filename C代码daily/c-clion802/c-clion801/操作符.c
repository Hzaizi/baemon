#include<stdio.h>

/*������*/
//int main() {
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = (++c, c++, ++a, a++);
//	b += a++ + c;
//	printf("a=%d b=%d c=%d\n", a, b, c);
//}

/*������������С������*/
/*��һ��*/
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = (a > b ? a : b);
//	while (1) {
//		if ((m % a == 0) && (m % b == 0))
//		{
//			break;
//		}
//		m++;
//	}
//	printf("%d\n", m);
//}
/*�ڶ���*/
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m=1;
//	while (a * m % b) {
//		m++;
//	}
//	printf("%d\n", a*m);
//}


/*��һ�仰�ĵ��ʽ��е��ã���㲻���á�*/
/*���� I like beijing. �����������Ϊ��beijing. like I*/
//#include<string.h>
//void reverse(char* left,char* right) {
//	while (left<right) {
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	char arr[101] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	reverse(arr, arr + len - 1);
//	char* start = arr;
//	while (*start) {
//		char* end = start;
//		while (*end != ' ' && *end != '\0') {
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end != '\0') {
//			end++;
//		}
//		start = end;
//	}
//	printf("%s\n", arr);
//}



/*��ӡ���飬��ʹ���±꣬ʹ��ָ��*/
//void print(int* arr, int len) {
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(int);
//	print(arr, len);
//	return 0;
//}


/*�����ַ���*/
//#include<string.h>
//void reverse(char* arr) {
//	char* left = arr;
//	char* right = arr + strlen(arr) - 1;
//	while (left < right) {
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	char arr[] = "lyhlovec";
//	reverse(arr);
//	printf("%s \n", arr);
//}
//#include<string.h>
//void reverse(char* left,char* right) {
//	while (left < right) {
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	char arr[] = "lyh love c";
//	reverse(arr, arr + strlen(arr) - 1);
//	printf("%s \n", arr);
//}



/*��ӡsum=a+aa+aaa+aaaa+aaaaa+......��aΪ���֣�*/
/*like:sum=5+55+555+5555+55555+......*/
//int main() {
//	int num;
//	int n;
//	scanf("%d %d", &num,&n);
//	int temp = num;
//	int sum = num;
//	int i = 0;
//	for (i = 1; i < n; i++)
//	{
//		sum += num * 10 + temp;
//		num = num * 10 + temp;
//		printf("%d ", sum);
//	}
//	printf("%d\n", sum);
//}
//int main() {
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//}

/*��ˮ�ɻ�������ָһ����λ�������ĸ�λ���ֵ������͵����䱾��*/
/*���磺153=1^3+5^3+3^3�� ����Ҫ�����������1��100000��Χ�ڵ�ˮ�ɻ���*/
//#include<math.h>
//int main() {
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int count = 0;
//		int num = i;
//		int sum = 0;
//		while (num) {
//			num /= 10;
//			count++;
//		}
//		num = i;
//		while (num) {
//			sum += pow(num % 10, count);
//			num /= 10;
//		}
//		if (sum == i) {
//			printf("%d ", i);
//		}
//	}
//}



/*��ӡ����*/
//int main() {
//	int row = 0;
//	scanf("%d", &row);
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < row-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < row-1; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * (row-1-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int n = 0;
//	while (scanf("%d", &n) != EOF) {
//		for (int i = 0; i < n+1; i++)
//		{
//			for (int j = 0; j < n-i; j++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j < i+1; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < i+1; j++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j < n-i ; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//}

/*����ˮ��һƿ1Ԫ��������ƿ��һƿ��ˮ������money�����Ժȶ���ƿ*/
//int main() {
//	int money;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty >= 2) {
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//}