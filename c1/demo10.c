#include <stdio.h>
//练习 1-10 编写一个将输入复制到输出的程序，并将其中的制表符替换为 \t ,把回退符替换为 \b,把反斜杠替换为 \\

#define SPACE ' '
#define TAB '\t'
#define BACK '\b'
#define BACK_SLANT '\\'
int main()
{
	int input_char;
	int c_space = 0;
	int c_tab = 0;
	int c_newline = 0;
	
	while((input_char = getchar()) != EOF){
		if (input_char == TAB) {
			putchar('\\');
			putchar('t');
		}else if (input_char == BACK) {
			putchar('\\');
			putchar('b');
		}else if (input_char == BACK_SLANT){
			putchar('\\');
			putchar('\\');
		}else{
			putchar(input_char);
		}
		
	}

	
	return 0;
}
