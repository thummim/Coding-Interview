#include <stdio.h>

int main()
{
	int N = 0;
	int min = 1000000;
	int max = -1000000;

	scanf("%d", &N);
    
    int *arr = malloc(sizeof(int) * N); //배열 크기 동적할당
    
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
        
		if (arr[i] < min) min = arr[i]; //배열 안의 수를 비교하여 더 작 min에 넣어준다
		if (arr[i] > max) max = arr[i]; //배열 안의 수를 비교하여 더 크면 max에 넣어준다
	}
    
	printf("%d %d", min, max);

	return 0;
}
