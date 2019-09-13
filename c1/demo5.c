#include <stdio.h>
//练习1-5 逆序打印摄氏温度转换为华氏温度的转换表
//公式： °F = °C * (9/5) + 32
int main()
{
	float c_temp,f_temp;
	int LOW = 0;
	int TOP = 300;
	int STEP = 5;

	printf("摄氏温度-华氏温度表\n");
	c_temp = TOP;
	while(c_temp >= LOW){
		f_temp = c_temp * (9.0 / 5) + 32;
		printf("%6.0f\t%6.2f\n",c_temp,f_temp); 
		c_temp -= STEP;
	}
	printf("*************************\n");
	return 0;
}
