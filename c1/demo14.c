#include <stdio.h>
#include <unistd.h>
//练习 1-14 编写一个程序，打印输入中各个字符出现的次数的直方图

#define MAX_CHAR_COUNT 128
int main()
{
	int c;
	//存放每个字符出现次数
	int chars[MAX_CHAR_COUNT];
	for (int i = 0;i < MAX_CHAR_COUNT;i ++){
		chars[i] = 0;
	}
	
	while ((c = getchar()) != EOF){
		++chars[c];	
	}

	for (int j = 0;j < MAX_CHAR_COUNT; j++){
		
		if (j >= 20 && j <= 127){
			//打印可见字符
			printf("%5c - %d\t",j,chars[j]);
			for (int k = 0;k < chars[j]; k++){
				putchar('#');
			}
			putchar('\n');
			usleep(100 * 1000);
		}
	}

	return 0;
}
