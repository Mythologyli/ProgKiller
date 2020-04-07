#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_PROG_NUM 20 /*进程的最大数量*/
#define MAX_NAME_LONG 20 /*进程名的最大程度*/
#define CMD_PART_LOND 84 /*CMD不包括进程名的长度*/

struct prog_name /*储存进程名的链表*/
{
	char name[MAX_NAME_LONG];
	struct prog_name* next;
};

struct prog_name* read(void); /*输入进程名；无进程名输入，返回NULL；有进程名输入，返回head*/

int kill(char* prog_name); /*结束名为prog_name的进程*/