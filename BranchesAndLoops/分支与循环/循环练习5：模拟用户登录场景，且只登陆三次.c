//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//
////��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ����ʾ��¼�ɹ���������ξ�����������˳�����
//
//
//int main()
//{
//	printf("please unter your username: wsxrfv9090\n");
//	char password[] = {"Davy20020214hqz@."};
//	for(int i = 1; i < 4; i++)
//	{
//		printf("please enter your password: ");
//		char typedpassword[20] = { 0 };//����char typedpasswordҪ��һ����С���ƣ���Ȼ�ᱨ��run-time check failure #2 - stack around the variable ��typedpassword"was corrupted.
//		                               //��ʱ�������Ϊʲô��
//		scanf("%s", typedpassword);
//		if (strcmp(typedpassword, password) == 0)//�ñȽϺ�����Ҫ����ͷ�ļ�string.h��һλһλ�ıȽ�asc��ֵ��ֻҪ����ĳһλ����ĳһλ����ĳ�ַ�������ĳ�ַ���
//		{
//			printf("login in success!");
//			break;
//		}
//		else if (strcmp(typedpassword, password) == 1)
//		{
//			if (i <= 2)
//			{
//				int n = 3 - i;
//				printf("incorrect password, please try again, you have %d chance remaining\n", n);
//			}
//			else if (i == 3)
//			{
//				system("cls");
//				printf("you have entered you own password wrong for three times you dumb ass! fuck off! stop wasting my time!");
//				break;
//			}
//		}
//	}
//	return 0;
//}