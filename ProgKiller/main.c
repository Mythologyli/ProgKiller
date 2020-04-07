#include "global.h"

int main(void)
{
	struct prog_name* head;
	
	printf("ProgKiller version 1.50\nCopyright (c) 2020 Myth. All rights reserved.\n");
	printf("\nInput the process names of the programs you want to kill. You don't need to type \".exe\".\nType \"#\" to end.\n");

	head = read();
	if (head == NULL)
	{
		printf("\nNo input! Press any key to exit...\n");
		getchar(); getchar();
		return 0;
	}
	else
		printf("\n============ KILL LOG ============\n\n");
	
	while (1)
	{
		struct prog_name* p = head;
		for (; p != NULL; p = p->next)
		{
			kill(p->name);
		}
	}

	return 0;
}