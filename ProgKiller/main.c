#include "global.h"

int main(void)
{
	int prog_num = 0; /*进程数*/
	char* prog_name[MAX_PROG_NUM] = { NULL }; /*以数组形式储存进程名称*/

	printf("ProgKiller version 1.00\nCopyright (c) 2020 Myth. All rights reserved.\n");
	printf("\nInput the process name of the program you want to kill. You don't need to type \".exe\".\nType \"#\" to end.\n");

	for (int i = 0; i < MAX_PROG_NUM; i++)
	{
		prog_name[i] = (char*)malloc((MAX_NAME_LONG + 1) * sizeof(char));
		
		scanf("%s", prog_name[i]);

		if (strcmp(prog_name[i], "#") == 0) /*输入"#"时，结束输入*/
		{
			prog_num = i;
			break;
		}
		else strcat(prog_name[i], ".exe"); /*添加.exe后缀*/
    }
	
	while (1)
	{
		for (int i = 0; i < prog_num; i++)
		{
			kill(prog_name[i]);
		}
	}

	return 0;
}