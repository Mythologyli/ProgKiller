#include "global.h"

int main(void)
{
	int prog_num = 0; /*������*/
	char* prog_name[MAX_PROG_NUM] = { NULL }; /*��������ʽ�����������*/

	printf("ProgKiller version 1.00\nCopyright (c) 2020 Myth. All rights reserved.\n");
	printf("\nInput the process name of the program you want to kill. You don't need to type \".exe\".\nType \"#\" to end.\n");

	for (int i = 0; i < MAX_PROG_NUM; i++)
	{
		prog_name[i] = (char*)malloc((MAX_NAME_LONG + 1) * sizeof(char));
		
		scanf("%s", prog_name[i]);

		if (strcmp(prog_name[i], "#") == 0) /*����"#"ʱ����������*/
		{
			prog_num = i;
			break;
		}
		else strcat(prog_name[i], ".exe"); /*���.exe��׺*/
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