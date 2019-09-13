#include <stdio.h>
//练习1-6 验证表达式 getchar() != EOF 的值是 0 还是 1
int main()
{
	int c;

	while((c = getchar()) != EOF){
		printf("getchar() != EOF 的值为： %d\n",(getchar() != EOF));
		putchar(c);
	}
}
