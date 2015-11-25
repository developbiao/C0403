#include <stdio.h>

/*
@Desceribe:结构体数组
@Author;GongBiao
*/
int main()
{
	struct RankScores
	{
		int uid;
		char *name;
		int score;
	};

	struct RankScores records[5] = 
	{
		{999075, "GongBiao", 9993},
		{999032, "CaiYuan", 8887},
		{99906, "Walter", 7777},
		{99931, "Rose", 532},
		{99984, "Jack", 147}
		
	};

	int i;
	for(i=0; i<5; i++)
	{
		
		printf("uid:%d\tnikename:%s\tscore:%d\n", records[i].uid, records[i].name, records[i].score);
	}

	return 0;
}
