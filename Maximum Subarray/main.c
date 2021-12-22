int maxSubArray(int* nums, int numsSize)
{
    int max = 0;
    int aux = 0;
    int i = -1;
    int j;
    int aux_nums_size;

    while(++i < numsSize)
    {
        aux_nums_size = 0;
        while(aux_nums_size < numsSize)
        {        
            aux = 0;
            j = i;
            
            while(j < aux_nums_size)
                aux += nums[j++];
	
            if(aux > max)
                max = aux;
            aux_nums_size++;
        }        
    }
    return max;
}