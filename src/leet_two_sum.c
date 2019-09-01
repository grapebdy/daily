#include <stdio.h>
#include <libleet.h>

int main()
{
	printf("%s:%d\n", __func__, __LINE__);
	lib_test();
	return 0;
}
