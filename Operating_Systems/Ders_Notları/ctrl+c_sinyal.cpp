#include<windows.h>
#include<signal.h>
#include<stdio.h>

int i=0 ;

void bitir(int param)
{
	i++;
	printf("%d. ctrl+c yakalandý...",i);

}

int main()
{
	while(1)
	{
		signal(SIGINT,bitir);
	}
	
	return 4;
}

