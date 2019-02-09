#include <stdio.h>
#include <stdlib.h>
//求两个整数的最大公约数
//方法1：基于试探的方法：从2开始试探，试探到num1和num2中较小的那个数字
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
	printf("请输入两个整数：");
	scanf("%d %d", &num1, &num2);
	printf("最大公约数为：%d\n", MaxFactor(num1, num2));
	system("pause");
	return 0;
}
//三个整数从大到小排序
//int main(){
//	int arr[3]= { 0 };
//	printf("请输入三个整数：");
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
//求10个整数中的最大值
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

//方法1：交换两个数的值，采用临时变量（平时工作中需要，代码可读性较高）
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
//方法2：交换两个数的值，不采用临时变量,此方法有可能溢出。
//int main(){
//	int num1;
//	int num2;
//	printf("请输入两个整数：");
//	scanf("%d%d", &num1, &num2);
//	num1 = num1 + num2;
//	num2 = num1 - num2;
//	num1 = num1 - num2;
//	printf("num1=%d num2=%d\n", num1, num2);
//	system("pause");
//	return 0;
//}
//方法3：交换两个数的值，不采用临时变量，采用二进制按位异或
//（此方法不会溢出,按位异或不需要进位）
//int main(){
//	int num1;
//	int num2;
//	printf("请输入两个整数：");
//	scanf("%d%d", &num1, &num2);
//	num1 = num1^num2;
//	num2 = num1^num2;
//	num1 = num1^num2;
//	printf("num1=%d,num2=%d\n", num1, num2);
//	system("pause");
//	return 0;
//}
