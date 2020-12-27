#include <stdio.h>
#include <stdlib.h>

int pointer_test()
{
	int ia;
	int *pi;
	char *pc;
	//int a[3];

	printf("&ia = %p\n", &ia);
	printf("&pi = %p\n", &pi);
	printf("&pc = %p\n", &pc);
	//printf("&a[0] = %p\n", &a[0]);
	//printf("&a[1] = %p\n", &a[1]);
	//printf("&a[2] = %p\n", &a[2]);

	ia = 0x12345678;
	pi = &ia;
	pc = (char *)&ia;
	printf("ia = 0x%x\n", ia);
	printf("pi = %p\n", pi);
	printf("pc = %p\n", pc);
	printf("len(int) = %d\n", sizeof(int));
	printf("len(int *) = %d\n", sizeof(int *));
	printf("len(char *) = %d\n", sizeof(char *));
	
	printf("*pi = 0x%x\n", *pi);
	printf("pc = %p\t", pc);	printf("*pc = 0x%x\n", *pc); pc = pc + 1;
	printf("pc = %p\t", pc);	printf("*pc = 0x%x\n", *pc); pc = pc + 1;
	printf("pc = %p\t", pc);	printf("*pc = 0x%x\n", *pc); pc = pc + 1;
	printf("pc = %p\t", pc);	printf("*pc = 0x%x\n", *pc); 
	return 0;
}
int main()
{
	pointer_test();
	system("pause");
	return 0;
}
