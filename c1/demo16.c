#include <stdio.h>
//练习 1-16 打印任意长度的输入行长度,不会写了。暂停吧，开始学习第二章。。。/(ㄒoㄒ)/~~

int getline(char line[]);
int main()
{

	int len;
	char line[];
	while ((len = getline(line)) > 0){
		printf("行长度: %d\n",len);
	}
	return 0;
}

//实现函数
int getline(char line[]){
	//只要不是换行符，不是 EOF 那就一直读取
	int c;
	int i = 0;
	while ((c = getchar()) != EOF && c != '\n'){
		line[i] = c;
		i++;
	}
	if (c == '\n'){
		line[i] = c;
		i++;
	}
	line[i] = '\0'

	return i;
}
