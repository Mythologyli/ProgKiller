#include "global.h"

struct prog_name* read(void)
{
	struct prog_name* head = NULL, * tail = NULL, * p;
	char name[MAX_PROG_NUM];

	scanf("%s", name);
	if (strcmp(name, "#") == 0) return NULL; /*�޽��������룬����NULL*/
	while (strcmp(name, "#") != 0)
	{
		p = (struct prog_name*) malloc(sizeof(struct prog_name));
		strcat(strcpy(p->name, name), ".exe"); /*���沢���.exe��׺*/
		p->next = NULL;

		if (head == NULL)
			head = p;
		else tail->next = p;
		tail = p;

		scanf("%s", name);
	}

	return head; /*�н��������룬����head*/
}