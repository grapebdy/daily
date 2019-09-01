#include <stdio.h>
#include <libleet.h>

int main()
{
	int numbers[100] = {3, 3, 2, 7, 11, 15};
	int *ret;
	int retsize;
	int target = 6;

	ret = twoSum(numbers, 6, target, &retsize);
	if (ret == NULL) {
		printf("%s:%d twoSum failed\n", __func__, __LINE__);
		return -1;
	}
	printf("TwoSum retsize[%d], index[%d, %d]\n", retsize, ret[0], ret[1]);

	free(ret);
	return 0;
}
