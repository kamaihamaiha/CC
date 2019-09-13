#include  <stdio.h>

//练习 1-9 将输入复制到输出，并将连续的多个空格用一个空格表示
#define SPACE ' '
#define FLAG_SPACE 1
#define FLAG_NOT_SPACE 0
int main()
{
	int c;
	//记录前一个字符是否是空格的标记
	int pre_space_flag = FLAG_NOT_SPACE;
	while((c = getchar()) != EOF){
		if (c == SPACE){
			if(pre_space_flag == FLAG_NOT_SPACE){
				//不是连续空格，可以输出
				putchar(c);
			}
			//标记为空格
			pre_space_flag = FLAG_SPACE;
		}else{
			//标记为不是空格，给下次判断使用
			pre_space_flag = FLAG_NOT_SPACE;
			putchar(c);
		}
	}
	

	return 0;
}
