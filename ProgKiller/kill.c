#include "global.h"

int kill(char* prog_name)
{    
	char cmd[16 + MAX_NAME_LONG + 1] = "taskkill /f /im ";

	strcat(cmd, prog_name);
    
	system(cmd);

	return 1;
}