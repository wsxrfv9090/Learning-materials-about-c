//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////��������
////int main()
////{
////flag:
////	printf("hehe\n");
////	printf("haha\n");
////
////	goto flag;
////	return 0;
////}
//
////�ػ�����
////ֻҪ�������������Ծͻ���һ����֮�ڹػ������������������ȡ���ػ�
//
////�ػ���cmd�����command�ǣ�shutdown -s -t 60
////                          -s��ʾ���ùػ���-t��ʾ����ʱ��ػ���60��ʾʱ��
////              ȡ���ػ�����shutdown -a��
////c�����ṩ��һ������system������ִ��ϵͳ����
////ע��gotoֻ���ڸú�������ת**
//
//
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	system("shutdown -s -t 60");
//
//again:
//	printf("��ע����Խ���1һ�����ڹػ���������ػ��������룺������\n");
//	char tmp[20] = { 0 };
//	scanf("%s", tmp);
//	if (strcmp(tmp, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	} 
//	return 0;
//}