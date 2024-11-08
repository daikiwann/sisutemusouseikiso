#include <stdio.h>

int main(void)
{
	int n;
	int a;
	printf("バナナを何本食べましたか");
	scanf("%d",&n);
	
	printf("バナナを何本食べたいですか");
	scanf("%d",&a);
	if(n<a)
	{
		printf("まだいけます");
	}
	else if(n>a)
		{printf("満腹です");
		}
	else if(n==a)
	{
		printf("満足です");
	}
return 0;
}