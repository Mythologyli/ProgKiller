#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_PROG_NUM 20 /*进程的最大数量*/
#define MAX_NAME_LONG 20 /*进程名的最大程度*/
#define CMD_PART_LOND 27 /*CMD不包括进程名的长度*/

int kill(char* prog_name); /*结束名为prog_name的进程*/