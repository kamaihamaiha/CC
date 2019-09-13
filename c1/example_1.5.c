#include <stdio.h>
//例子1.5 字符输入/输出

int main()
{
	char c;
	printf("请输入字符，按 'q' 结束\n");
	while(c != 'q'){
		c = getchar();
		putchar(c);
	}
	printf("\nover!\n");
	return 0;
}
