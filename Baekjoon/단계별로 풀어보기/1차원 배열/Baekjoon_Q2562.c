#include <stdio.h>

int main()
{
	int num = 0;
	int arr[9];
	int max = 0;
	int count = 0;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);

		if (arr[i] > max) max = arr[i];   // 배열 안의 수를 비교하여 최대값을 찾는다
		if (max == arr[i]) count = i + 1; // 최대값이 존재하는 위치가 배열의 몇 번째인지 기록
	}

	printf("%d\n", max);
	printf("%d", count);
    
    return 0;
}
