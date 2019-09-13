#include <stdio.h>

//字符统计
//注意，编译执行程序时，输入字符后，按下回车。在 Linux 下按下 ctrl + d。就能让 getchar() 读到 EOF。程序才可以正确执行。
int main()
{
	long count;
	count = 0;
	while(getchar() != EOF){
		++count;
	}
	printf("字符个数： %ld\n",count);
	return 0;
}
