#include <stdio.h>

//练习 1-12 编写一个程序，以每行一个单词的形式打印输出
#define OUT 0
#define IN 1
int main()
{
	int state;
	int c;
	state = OUT;
	
	while((c = getchar()) != EOF){
		if(c == ' ' || c == '\t' || c == '\n'){
			state = OUT;
			putchar('\n');
		}else{
			if(state == OUT){
				state = IN;
			}
			putchar(c);
		}
	}
	return 0;
}
