#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_PROG_NUM 20 /*���̵��������*/
#define MAX_NAME_LONG 20 /*�����������̶�*/
#define CMD_PART_LOND 84 /*CMD�������������ĳ���*/

struct prog_name /*���������������*/
{
	char name[MAX_NAME_LONG];
	struct prog_name* next;
};

struct prog_name* read(void); /*������������޽��������룬����NULL���н��������룬����head*/

int kill(char* prog_name); /*������Ϊprog_name�Ľ���*/