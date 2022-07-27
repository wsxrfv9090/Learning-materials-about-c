#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//写一个猜数字游戏
// 1.自动产生一个1-100之间的数字
// 2.猜数字
//  a.猜对了：就恭喜你，游戏结束；
//  b.猜错了：会告诉你你猜大了还是猜小了直到猜对了。
// 3.猜对后游戏会自动重新自动产生数字让你猜

void game()
{
    system("cls");

    while (1)
    {
        printf("Let the Game start!!! \n");

        srand((unsigned int)time(NULL));
        int random = rand() % 100 + 1;
        printf("result = %d\n\n", random);

        printf("Enter your guess here: ");
        int input2;

        do
        {
            scanf("%d", &input2);
            if (input2 < random)
            {
                printf("Bigger. \n\n");
            }

            if (input2 > random)
            {
                printf("Smaller. \n\n");
            }

            printf("Try again: ");
        } while (input2 != random);

        system("cls");

        printf("Congrats! You've got it! The answer is %d. \n", random);
        printf("Would you like to try again? (Y/N)\n");

        char input3;
        fflush(stdin);
        scanf("%c", &input3);

        if (input3 == 'Y')
            continue;
        if (input3 == 'N')
            break;
        else
            printf("%c is not an option, please try again! \n", input3);
    }
}

int main()
{
    char input1;

    printf("Sublime Game designed by Davy! \n\n");
    printf("Do you want to start your game? \n");
    printf("1.Yes! Let's go!!! \n");
    printf("2.No! I'll pass! \n");
	       
	do
	{
        printf("Enter your answer here: ");

        fflush(stdin);
        scanf("%c", &input1);

        if (input1 == '1')
        {
            system("cls");
            game();
            break;
        }

        if (input1 == '2')
        {
            system("cls");
            printf("Okay, maybe next time. ");
            break;
        }

        printf("%c is not an option, please try again! \n\n", input1);
	} while (input1 != '2');

	return 0;
}
