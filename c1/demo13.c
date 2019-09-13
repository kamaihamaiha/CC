#include <stdio.h>

//练习 1-13 编写一个程序，打印单词的水平直方图
#define OUT 0
#define IN 1
#define MAX_WORD_COUNT 10
int main()
{
	int state;
	int c;
	int word_count = 0;
	int word_length = 0;
	int words[MAX_WORD_COUNT]; /*存放不同长度的单词个数 */
	state = OUT;

	/*初始化数组*/
	for (int i = 0; i < MAX_WORD_COUNT; ++i){
		words[i] = 0;
	}
	
	while((c = getchar()) != EOF){
		if(c == ' ' || c == '\t' || c == '\n'){
			if(state == IN){
				state = OUT;
				word_count ++;
				
				if (word_count < MAX_WORD_COUNT){
					++words[word_length];
					word_length = 0;
				} else {
					break;
				}
			}
		}else{
			if(state == OUT){
				state = IN;
			}
			++word_length;
		}
	}

	printf("the count of words is: %d\n",word_count);
	printf("*************************horizontal****\n");
	for (int i = 0; i < MAX_WORD_COUNT; i++){
		printf("%5d - %3d ",i,words[i]);
		for (int j = 1; j <= words[i]; j++){
			putchar('#');
		}
		putchar('\n');
	}
	printf("*************************virtical****\n");
	for (int i = 0;i < MAX_WORD_COUNT; i++){
		printf("%4d",i);
	}
	printf("\n");
	for (int i = 0;i < MAX_WORD_COUNT; i++){
		printf("%4c",'|');
	}
	printf("\n");
	for (int i = 0;i < MAX_WORD_COUNT; i++){
		printf("%4d",words[i]);
	}
	printf("\n");
	//print every word count by #
	int over = 0;
	while (1){
		for (int i = 0;i < MAX_WORD_COUNT; i++){
			if (words[i] > 0){
				over = 1;
				printf("%4c",'#');
				--words[i];
			} else {
				printf("%4c",' ' );
			}
		}
		printf("\n");
		if (over == 0){
			break;
		} else {
			over = 0;
		}

	}
	return 0;
}
