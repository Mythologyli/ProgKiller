#include "global.h"

int kill(char* prog_name)
{    
	char cmd[CMD_PART_LOND + 1 + MAX_NAME_LONG + 1] = "taskkill /f /im ";

	strcat(strcat(cmd, prog_name), " >nul 2>nul && if errorlevel 0 echo %date% %time%  Kill!"); /*组成完整的CMD*/
    
	system(cmd); 

	return 1;
}