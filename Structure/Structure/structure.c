#include <stdio.h>

struct Stu
{
	char name[20];
	int age;
	double score;
};

int main()
{
	struct Stu s = { "Davy", 21, 100 };
	printf("%s %d %lf", s.name, s.age, s.score);
	return 0;
}