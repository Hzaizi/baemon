#include<stdio.h>

/*�ݹ�*/
/*��һ�������ڵ�Ԫ������*/

/*����Ҫ��ʹ��strlen�⺯��*/
int my_strlen(char* str) {
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

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
