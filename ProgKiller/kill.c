#include "global.h"

int kill(char* prog_name)
{    
	char cmd[CMD_PART_LOND + MAX_NAME_LONG + 100] = "taskkill /f /im ";

	strcat(strcat(cmd, prog_name), " >nul 2>nul"); /*组成完整的CMD*/
    
	system(cmd); 

	return 1;
}