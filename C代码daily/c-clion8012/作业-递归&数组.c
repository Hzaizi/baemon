#include<stdio.h>

/*�ݹ�*/
/*��һ�������ڵ�Ԫ������*/

/*����Ҫ��ʹ��strlen�⺯��*/
//int my_strlen(char* str) {
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

/*��һ�������ڵ�Ԫ�������������β�*/
//void reverse_str(char* str) {
//	char temp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str+1) > 1) {
//		reverse_str(str + 1);
//	}
//	*(str + len - 1) = temp;
//}
//
//int main() {
//	char arr[] = "aeioumonster";
//	reverse_str(arr);
//	printf("%s\n", arr);
//	return 0;
//}



/*��һ�������ڵ�Ԫ��������������β�*/
//void reverse_str(char* str,int left,int right) {
//	char temp = str[left];
//	str[left] = str[right];
//	str[right] = temp;
//	if(left<right)
//	{
//		reverse_str(str, left+1, right-1);
//	}
//}
//
//int main() {
//	char arr[] = "aeioumonster";
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	reverse_str(arr,left,right);
//	printf("%s\n", arr);
//	return 0;
//}



/*��һ�������ڵ�Ԫ������,�޵ݹ�*/
//void reverse_str(char* str) {
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while(left < right) {
//		char temp = str[left];
//		str[left] = str[right];
//		str[right] = temp;
//		left++;
//		right--;
//	}
//}
//
//int main() {
//	char arr[] = "aeioumonster";
//	reverse_str(arr);
//	printf("%s\n", arr);
//	return 0;
//}



/*����һ����ÿһλ֮�ͣ��ݹ�*/
//int digitsum(int num) {
//	if (num > 9) {
//		return num % 10 + digitsum(num / 10);
//	}
//	else {
//		return num;
//	}
//}
//
//int main() {
//	int i;
//	scanf("%d", &i);
//	int sum = digitsum(i);
//	printf("%d\n", sum);
//}



/*�ݹ�ʵ��n��k�η�*/
//double my_pow(int n,int k) {
//	if (k > 0) {
//		return n * my_pow(n,k-1);
//	}
//	else if(k == 0) {
//		return 1;
//	}
//	else if(k < 0) {
//		return 1.0 / my_pow(n, -k);
//	}
//}
//
//int main() {
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n,&k);
//	double num = my_pow(n,k);
//	printf("%.3lf\n", num);
//}



/*������A�е����ݺ�B�е����ݽ��н���������һ����*/
//void swep(int* arr1,int* arr2,int len) {
//	int i = 0;
//	for (int i = 0; i < len; i++)
//	{
//		int temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//}
//
//int main (){
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int len = sizeof(arr1) / sizeof(int);
//	swep(arr1, arr2, len);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//}



/*����һ����������*/
/*ʵ�ֺ���init������ʼ������Ϊ0*/
/*ʵ��print������ӡ�����ÿһ��Ԫ��*/
/*ʵ��reverse���������������Ԫ�ص�����*/
//void init(int* arr, int len) {
//	int i = 0;
//	for (int i = 0; i < len; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int* arr,int len) {
//	int i = 0;
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int* arr,int len) {
//	int left = 0;
//	int right = len - 1;
//	while (left < right) {
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int len = sizeof(arr) / sizeof(int);
//	print(arr,len);
//	reverse(arr,len);
//	print(arr, len);
//	init(arr,len);
//	print(arr, len);
//}


/*��n��̨�ף�ÿһ��������һ��Ҳ���������ף��ж������߷�������n,���������*/
//int fib(int n) {
//	if (n <= 2) {
//		return n;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int num = fib(n);
//	printf("%d\n", num);
//	return 0;
//}



/*����*/
/*��һ���������У��������ظ�������������ɾ��ָ����ĳһ��������*/
/*���ɾ��ָ������֮������У�������δ��ɾ�����ֵ�ǰ��λ��û�з����ı䡣*/
/*��һ������һ������(0��N��50)��*/
/*�ڶ�������N�������������ÿո�ָ���N��������*/
/*������������Ҫ����ɾ����һ��������*/
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr[6] = {0};
//	int len = sizeof(arr) / sizeof(int);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	scanf("%d", &del);
//	int j = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] != del) {
//			arr[j] = arr[i];
//			j++;
//		}
//	}
//	for (int i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}


/*����*/
/*����n���ɼ����������n���ɼ�����߷�������ͷ����Ĳ*/
/*���У���һ��Ϊn����ʾn���ɼ����������10000��*/
/*�ڶ���Ϊn���ɼ���������ʾ����Χ0~100�����Կո������*/
/*һ�У����n���ɼ�����߷�������ͷ����Ĳ*/
/*��һ��*/
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr[6] = {0};
//	int len = sizeof(arr) / sizeof(int);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	int min = arr[0];
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//		if (arr[i] < min) {
//			min = arr[i];
//		}
//	}
//	printf("%d\n", max-min);
//}
/*�ڶ���*/
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr[6] = { 0 };
//	int len = sizeof(arr) / sizeof(int);
//	int max = 0;
//	int min = 100;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//		if (arr[i] < min) {
//			min = arr[i];
//		}
//	}
//	printf("%d\n", max - min);
//}



//��֧����
/*ʵ����ĸ�Ĵ�Сдת�����������������*/
/*�������룬ÿһ�������д��ĸ��*/
/*���ÿ�����������Ӧ��Сд��ĸ��*/
/*��һ��*/
//int main() {
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		if (ch >= 'a' && ch <= 'z') {
//			printf("%c\n", ch - 32);
//		}
//		else{
//			printf("%c\n", ch + 32);
//		}
//		getchar();
//	}
//	return 0;
//}
/*�ڶ���*/
//int main() {
//	char ch = 0;
//scanf��ȡ�ɹ���ʱ�򣬷���ֵΪ��ȡ�����ݵĸ���
//scanf��ȡʧ�ܵ�ʱ�򣬷���ֵΪEOF
//	while (scanf("%c", &ch)==1)
//	/*while (scanf("%c", &ch)!=EOF)*/
//	{
//		if (ch >= 'a' && ch <= 'z') {
//			printf("%c\n", ch - 32);
//		}
//		else if (ch >= 'A' && ch <= 'Z') {
//			printf("%c\n", ch + 32);
//		}
//	}
//	return 0;
//}
/*������*/
//int main() {
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		if (islower(ch)) {
//			printf("%c\n",toupper(ch));
//		}
//		else if (isupper(ch)) {
//			printf("%c\n",tolower(ch));
//		}
//	}
//	return 0;
//}



//��֧����
/*�ж�������ַ��ǲ�����ĸ*/
/*�������룬ÿһ������һ���ַ���*/
/*���ÿ�����룬�������ռһ��*/
/*��һ��*/
//int main() {
//	char ch = 0;
//	while (scanf("%c", &ch) == 1) {
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
//			printf("%c is an alphabet.\n", ch);
//		}
//		else {
//			printf("%c is not an alphabet.\n", ch);
//		}
//		getchar();
//	}
//}
/*�ڶ���*/
//int main() {
//	char ch = 0;
//	/*��%cǰ���һ���ո񡣱�ʾ������һ���ַ�ǰ�����пհ��ַ�*/
//	while (scanf(" %c", &ch) == 1) {
//		/*if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))*/ 
//		/*�⺯��isalpha(ch)*/
//		if(isalpha(ch))
//		{
//			printf("%c is an alphabet.\n", ch);
//		}
//		else {
//			printf("%c is not an alphabet.\n", ch);
//		}
//	}
//}


//��֧����
/*�ҵ����ķ���*/
/*3��������0-100�����ÿո�ֿ�*/
//int main() {
//	int i = 0;
//	int scores = 0;
//	int max = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", &scores);
//		if (scores > max) {
//			max = scores;
//		}
//	}
//	printf("%d\n", max);
//}


/*ѭ��*/
/*����ˮ�ɻ��� - Lily Number������������֣����м��ֳ���������*/
/*����1461 ���Բ�ֳɣ�1��461��,��14��61��,��146��1)*/
/*������в�ֺ�ĳ˻�֮�͵�����������һ��Lily Number*/
/*���5λ���е����� Lily Number*/
//#include<math.h>
//int main() {
//	int i = 0;
//	for (int i = 10000; i <= 99999; i++)
//	{
//		int j = 0;
//		int sum = 0;
//		for (int j = 1; j <= 4; j++)
//		{
//			int cnum = (double)pow(10, j);
//			sum += (i / cnum)*(i % cnum);
//		}
//		if (sum == i) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}