#include <stdio.h>

//行数统计
//注意，编译执行程序时，输入字符后，按下回车。在 Linux 下按下 ctrl + d。就能让 getchar() 读到 EOF。程序才可以正确执行。
int main()
{
	int count;
	int c;
	count = 0;
	while((c = getchar()) != EOF){
		if(c == '\n'){
			++count;
		}
	}
	printf("行数： %d\n",count);
	return 0;
}
