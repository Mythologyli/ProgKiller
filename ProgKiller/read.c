#include "global.h"

struct prog_name* read(void)
{
	struct prog_name* head = NULL, * tail = NULL, * p;
	char name[MAX_PROG_NUM];

	scanf("%s", name);
	if (strcmp(name, "#") == 0) return NULL; /*无进程名输入，返回NULL*/
	while (strcmp(name, "#") != 0)
	{
		p = (struct prog_name*) malloc(sizeof(struct prog_name));
		strcat(strcpy(p->name, name), ".exe"); /*储存并添加.exe后缀*/
		p->next = NULL;

		if (head == NULL)
			head = p;
		else tail->next = p;
		tail = p;

		scanf("%s", name);
	}

	return head; /*有进程名输入，返回head*/
}