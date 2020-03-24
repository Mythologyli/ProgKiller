#include "global.h"

int main(void)
{
	char* prog_name = (char*)malloc(MAX_NAME_LONG * sizeof(char));
	
	printf("ProgKiller version 0.11\nCopyright (c) 2020 Myth. All rights reserved.\n");
	
	printf("\nInput the process name of the program you want to kill:\n");
	scanf("%s", prog_name);

	while (1)
	{
		kill(prog_name);
	}

	return 0;
}