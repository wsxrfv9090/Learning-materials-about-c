#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

//写一个猜数字游戏
//1.自动产生一个1-100之间的数字
//2.猜数字
//  a.猜对了：就恭喜你，游戏结束；
//  b.猜错了：会告诉你你猜大了还是猜小了直到猜对了。
//3.猜对后游戏会自动重新自动产生数字让你猜


void game()//
{
	//system("cls");
	do
	{
		printf("Let the Game start!!!!\nType your guess here: ");
		srand((unsigned int)time(NULL));
		int random = rand() % 100 + 1;
		printf("%d\n", random);
		int input2;
		scanf("%d", &input2);
		do
		{
			if (input2 < random)
			{
				system("cls");
				printf("Bigger\nYour last guess: %d\nTry again: ", input2);
				scanf("%d", &input2);
			}
			else if (input2 > random)
			{
				system("cls");
				printf("Smaller\nYour last guess: %d\nTry again: ", input2);
				scanf("%d", &input2);
			}
		} while (input2 != random);
		system("cls");
		printf("Congrats! You've got it! The answer is %d\nWould you like to try again?\n(Y/N)", random);
		char input3;
		scanf("%s", &input3);
		if (strcmp(input3, "Y") == 0)
			continue;
		else if (strcmp(input3, "Y") > 0)
			break;
	} while (1);
}

int main()
{
	printf("Sublime Game designed by Davy!\nDo you want to start your game?\n1.YES! Let's go!!!\n2.NO! I'll pass!\nType your answer here: ");
	int input1 = 0;
	do
	{
		scanf("%d", &input1);
		if (input1 == 1)
		{
			system("cls");
			game();
			break;
		}
		else if (input1 == 2)
		{
			printf("Okay, maybe next time.");
			break;
		}
		else
		{
			system("cls");
			printf("%d is not an option, please try again!\n\n", input1);
			printf("Sublime Game designed by Davy!\nDo you want to start your game?\n1.YES! Let's go!!!\n2.NO! I'll pass!\nType your answer here: ");
		}
	} while (input1 != 2);
	return 0;
}