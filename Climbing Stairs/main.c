
int climbStairs(int n){
    int one = 1, two = 1;
    int aux;
    
    for(int i = 0; i < n - 1; i++)
    {
        aux = one;
        one += two;
        two = aux;
    }
    return one;
}