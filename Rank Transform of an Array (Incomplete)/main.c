#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int* arrayRankTransform(int* arr, int arrSize, int* returnSize)
{
    int *arr_returned = malloc(arrSize * sizeof(int));
	int *arr_copy = malloc(arrSize * sizeof(int));
	
	for( int n = 0 ; n < arrSize; n++ ) 
		arr_copy[n] = arr[n];
  	
	int map[arrSize][2];

	int k = -1;
	int min = arr[k];

	while(++k < arrSize)
	{
		map[k][0] = arr[k];
		map[k][1] = k;
	}

	qsort(arr, arrSize, sizeof(int), cmpfunc);

	for(int i = 0; i < arrSize; i++)
	{
		for(int j = 0; j < arrSize; j++)
		{
			if(arr[i] == map[j][0])
				map[j][1] = i + 1;
		}
	}

	for(int i = 0; i < arrSize; i++)
	{
		for(int j = 0; j < arrSize; j++)
		{
			if(arr_copy[i] == map[j][0])
				arr_returned[i] = map[j][1];
		}
	}
	

    return arr_returned;
}


int main(void)
{
	int *array = malloc(12);
	array[0] = 100;
	array[1] = 100;
	array[2] = 100;

	int i = -1;
	while(++i < 3)
		printf("%d ", array[i]);
	printf("\n");
	int num = 5;
	
	int *return2 = arrayRankTransform(array, 3, &num);

	i = -1;
	while(++i < 3)
		printf("%d ", return2[i]);
	

	return 0;
}