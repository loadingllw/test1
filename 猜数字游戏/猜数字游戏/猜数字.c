#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("**************************\n");
	printf("***   1.play  0.exit   ***\n");
	printf("**************************\n");
}
//RAND_MAX-32767
void game()
{
	int b = 0;
	int c = 0;                                                             
	  b = rand()%100+1;                                          
	//printf("%d\n", b);
	  while (1)
	  {
		  printf("������֣�>");
			  scanf("%d", &c);
			  if (c > b)
			  {
				  printf("�´���\n");
			  }
			  else if (c < b)
			  {
				  printf("��С��\n");
			  }
			  else
			  {
				  printf("congratulation\n");
				  break;
			  }

	  }
}




int main()
{
	int a = 0;
	srand((unsigned int)time(NULL));                          //ʱ���������    //��ǰ�������ʱ��-1970.1.1 0��0��0  ��   //�����ֻ��Ҫ���� һ�μ���
	do
	{
		menu();
		printf("������>: ");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
				break;
		case 0:
			printf("������Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;

		}
	} while (a);
    return 0;
}