#include <stdio.h>
#include <stdlib.h>
//���������������Լ��
//����1��������̽�ķ�������2��ʼ��̽����̽��num1��num2�н�С���Ǹ�����
int MaxFactor(int num1, int num2){
	int i = 2;
	int max;
	while(i<=num1&&i<=num2){
		if (num1%i == 0 && num2%i == 0){
			max = i;
		}
		i += 1;
	}
	return max;
}
int main(){
	int num1;
	int num2;
	printf("����������������");
	scanf("%d %d", &num1, &num2);
	printf("���Լ��Ϊ��%d\n", MaxFactor(num1, num2));
	system("pause");
	return 0;
}
//���������Ӵ�С����
//int main(){
//	int arr[3]= { 0 };
//	printf("����������������");
//	scanf("%d %d %d", &arr[0],&arr[1],&arr[2]);
//	int max;
//	int min;
//	if (arr[0] > arr[1]){
//		max = arr[0];
//		min = arr[1];
//	}else{
//		max = arr[1];
//		min = arr[0];
//	}
//	if (arr[2] > max){
//		printf("%d %d %d\n", arr[2], max, min);
//	}
//	else if(arr[2]<min){
//		printf("%d %d %d\n", max, min, arr[2]);
//	}
//	else{
//		printf("%d %d %d\n", max, arr[2], min);
//	}
//	system("pause");
//	return 0;
//}
//��10�������е����ֵ
//int main(){
//	
//	int arr[10]={ 1, 43, 23, 54, 6, -9, 45, 23, 43, 5 };
//	int max = arr[0];
//	int i = 1;
//	while ( i < 10){
//		if (max < arr[i]){
//			max = arr[i];
//		}
//		i += 1;
//	}
//	printf("max = %d\n", max);
//	system("pause");
//	return 0;
//}

//����1��������������ֵ��������ʱ������ƽʱ��������Ҫ������ɶ��Խϸߣ�
//int main(){
//	int num1 = 10;
//	int num2 = 20;
//	int tem;
//	tem = num1;
//	num1 = num2;
//	num2 = tem;
//	printf("num1=%d,num2=%d", num1, num2);
//	system("pause");
//	return 0;
//}
//����2��������������ֵ����������ʱ����,�˷����п��������
//int main(){
//	int num1;
//	int num2;
//	printf("����������������");
//	scanf("%d%d", &num1, &num2);
//	num1 = num1 + num2;
//	num2 = num1 - num2;
//	num1 = num1 - num2;
//	printf("num1=%d num2=%d\n", num1, num2);
//	system("pause");
//	return 0;
//}
//����3��������������ֵ����������ʱ���������ö����ư�λ���
//���˷����������,��λ�����Ҫ��λ��
//int main(){
//	int num1;
//	int num2;
//	printf("����������������");
//	scanf("%d%d", &num1, &num2);
//	num1 = num1^num2;
//	num2 = num1^num2;
//	num1 = num1^num2;
//	printf("num1=%d,num2=%d\n", num1, num2);
//	system("pause");
//	return 0;
//}
