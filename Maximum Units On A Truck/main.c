
void sort_max(int **boxTypes, int boxTypesSize)
{
    int aux1, aux2;
    
    for(int i = 0; i < boxTypesSize; i++)
    {
        for(int j = i+1; j < boxTypesSize; j++)
        {
            if(boxTypes[i][1] < boxTypes[j][1])
            {
                aux1 = boxTypes[i][0];
                aux2 = boxTypes[i][1];
                
                boxTypes[i][0] = boxTypes[j][0];
                boxTypes[i][1] = boxTypes[j][1];
                
                boxTypes[j][0] = aux1;
                boxTypes[j][1] = aux2;
            }
        }
    }
}


int maximumUnits(int** boxTypes, int boxTypesSize, int* boxTypesColSize, int truckSize){
    int units = 0;
    int boxes_used = 0;
    
    sort_max(boxTypes, boxTypesSize);
    
    for(int i = 0; i < boxTypesSize; i++)
    {
        for(int j = 0; j < boxTypes[i][0]; j++)
        {
            if(boxes_used == truckSize)
                return units;
            else
            {
                units += boxTypes[i][1];
                boxes_used++;
            }
            
        }
    }
    return units;
    
}