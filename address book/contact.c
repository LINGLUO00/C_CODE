#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
//静态版本
//void initcontact(contact* pc)
//{
//	pc->sz = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}

int CheckCapacity(contact* pc);
void Loadcontact(contact* pc)
{
	FILE* pf = fopen("contact.dat", "rb");
	if (pf == NULL)
	{
		perror("Loadcontact::fopen");
		return;
	}
	people tmp = { 0 };
	while (fread(&tmp,sizeof(people),1,pf))
	{
		CheckCapacity(pc);

		pc->data[pc->sz] = tmp;
		pc->sz++;
	}


	fclose(pf);
	pf = NULL;
}
//动态
void initcontact(contact* pc)
{
	pc->sz = 0;
	pc->data = malloc(DEFAULT_SZ * sizeof(people));
	if (pc->data == NULL)
	{
		perror("通讯录初始化失败");
	}
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;
	//加载已有的信息
	Loadcontact(pc);
}

static int Findbyname(const contact* pc,char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}
//静态
//void Addcontact(contact* pc)
//{
//	if (pc->sz == MAX)
//	{
//		printf("通讯录已满，无法增加\n");
//		return;
//	}
//	printf("请输入名字:>");
//	scanf("%s", (pc->data[pc->sz]).name);
//	printf("年龄:>");
//	scanf("%d", &(pc->data[pc->sz].age));
//	printf("性别:>");
//	scanf("%s", (pc->data[pc->sz]).sex);
//	printf("电话:>");
//	scanf("%s", (pc->data[pc->sz]).tele);
//	printf("地址:>");
//	scanf("%s", (pc->data[pc->sz]).addr);
//	(pc->sz)++;
//	printf("添加成功");
//}

//动态
int CheckCapacity(contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		people *ptr = (people*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(people));
		if (ptr == NULL) 
		{
			perror("CheckCapacity");
			return 0;
		}
		else
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("增容成功，容量为: %d\n", pc->capacity);
			return 1;
		}
	}
	return 1;
}
//动态
void Addcontact(contact* pc)
{
	if (0 == CheckCapacity(pc))//检测容量
	{
		printf("扩容失败");
		return;
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", (pc->data[pc->sz]).name);
		printf("年龄:>");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("性别:>");
		scanf("%s", (pc->data[pc->sz]).sex);
		printf("电话:>");
		scanf("%s", (pc->data[pc->sz]).tele);
		printf("地址:>");
		scanf("%s", (pc->data[pc->sz]).addr);
		(pc->sz)++;
		printf("添加成功\n");
	}
}

void Showcontact(const contact* pc)
{
	int i = 0;
	printf("%-8s %-4s %-5s %-12s %-30s\n", "姓名", "年龄", "性别", "电话", "地址");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-8s %-4d %-5s %-12s %-30s\n", 
			pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
	}
}

void Delcontact(contact* pc)
{
	char name[MAX_NAME] = { 0 };
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法删除\n");
		return;
	}
	printf("删除人的名字:>");
	scanf("%s", name);
	int i = 0;
	int pos = Findbyname(pc, name);
	if (pos == -1)
	{
		printf("删除的人不存在\n");
		return;
	}
	for (i = pos; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("删除成功\n");
}

void Searchcontact(const contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入名字:>");
	scanf("%s", name);
	int pos = Findbyname(pc, name);
	if (pos == -1)
	{
		printf("查找的人不存在\n");
		return;
	}
	
	printf("%-8s %-4s %-5s %-12s %-30s\n", "姓名", "年龄", "性别", "电话", "地址");
	printf("%-8s %-4d %-5s %-12s %-30s\n",
		pc->data[pos].name, 
		pc->data[pos].age,
		pc->data[pos].sex,
		pc->data[pos].tele,
		pc->data[pos].addr);
}


void Modifycontact(contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入名字:>");
	scanf("%s", name);
	int pos = Findbyname(pc, name);
	if (pos == -1)
	{
		printf("修改的人不存在\n");
		return;
	}
	printf("请输入名字:>");
	scanf("%s", (pc->data[pc->sz]).name);
	printf("年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("性别:>");
	scanf("%s", (pc->data[pc->sz]).sex);
	printf("电话:>");
	scanf("%s", (pc->data[pc->sz]).tele);
	printf("地址:>");
	scanf("%s", (pc->data[pc->sz]).addr);
	printf("修改成功\n");

}
static int Cmpbyname(const void* p1, const void* p2)
{
	return strcmp(((people*)p1)->name, ((people*)p2)->name);
}
void Sortcontact(contact* pc)
{

	qsort(pc->data, pc->sz, sizeof(people), Cmpbyname);
	printf("排序成功");
}

void Deleteontact(contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}


//保存
void Savecontact(contact* pc)
{
	FILE* pf = fopen("contact.dat", "wb");
	if (pf == NULL)
	{
		perror("Savecontact::fopen");
		return;
	}
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->data + i, sizeof(people), 1, pf);
	}




	fclose(pf);
	pf = NULL;
	printf("已保存");
}