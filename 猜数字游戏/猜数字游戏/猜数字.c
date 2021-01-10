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
		  printf("请猜数字：>");
			  scanf("%d", &c);
			  if (c > b)
			  {
				  printf("猜大了\n");
			  }
			  else if (c < b)
			  {
				  printf("猜小了\n");
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
	srand((unsigned int)time(NULL));                          //时间戳的引入    //当前计算机的时间-1970.1.1 0：0：0  秒   //随机数只需要引用 一次即可
	do
	{
		menu();
		printf("请输入>: ");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
				break;
		case 0:
			printf("结束游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;

		}
	} while (a);
    return 0;
}