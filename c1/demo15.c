#include <stdio.h>
//练习1-15 打印摄氏温度转换为华氏温度的转换表,用函数方式
//公式： °F = °C * (9/5) + 32
//声明函数
float c2f(int temp);

int main()
{
	float c_temp,f_temp;
	int LOW = 0;
	int TOP = 100;
	int STEP = 5;

	printf("摄氏温度-华氏温度表\n");
	c_temp = LOW;
	while(c_temp <= TOP){
		printf("%6.0f\t%6.2f\n",c_temp,c2f(c_temp)); 
		c_temp += STEP;
	}
	printf("*************************\n");
	return 0;
}

//函数实现
float c2f(int c){
	return c * (9.0 / 5) + 32;	
}
