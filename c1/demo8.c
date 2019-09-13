#include <stdio.h>
//练习 1-8 编写一个统计空格、制表符与换行符个数的程序

#define SPACE ' '
#define TAB '\t'
#define NEW_LINE '\n'
int main()
{
	int input_char;
	int c_space = 0;
	int c_tab = 0;
	int c_newline = 0;
	
	while((input_char = getchar()) != EOF){
		if(input_char == SPACE){
			++c_space;
		}else if (input_char == TAB) {
			++c_tab;
		}else if (input_char == NEW_LINE) {
			++c_newline;
		}	
		
	}

	printf("空格数：%d\n制表符数：%d\n行数：%d\n",c_space,c_tab,c_newline);
	
	return 0;
}
