#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int select_number(char *s)
{
    if(strlen(s) == 1)
    {
        if(s[0] == 'I')
			return 1;
		else if(s[0] == 'V')
			return 5;
		else if(s[0] == 'X')
			return 10;
		else if(s[0] == 'L')
			return 50;
		else if(s[0] == 'C')
			return 100;
		else if(s[0] == 'D')
			return 500;
		else
			return 1000;
    }
	else
	{
		if(s[0] == 'I' && s[1] == 'V')
			return 4;
		else if(s[0] == 'I' && s[1] == 'X')
			return 9;
		else if(s[0] == 'X' && s[1] == 'L')
			return 40;
		else if(s[0] == 'X' && s[1] == 'C')
			return 90;
		else if(s[0] == 'C' && s[1] == 'D')
			return 400;
		else
			return 900;
	}
}


int romanToInt(char * s){
    
    int number = 0;
    int i = 0;
    int j = 1;
	char *num_to_evaluate_1;
	char *num_to_evaluate_2;

    while(s[i])
	{
		if((s[i+1] != '\0') && (s[i+1] == ('V' || 'X' || 'L' || 'C' || 'D' || 'M')))
		{
			num_to_evaluate_2 = (char *) malloc(3 * sizeof(char));
			num_to_evaluate_2[0] = s[i++];
			num_to_evaluate_2[1] = s[i++];
			num_to_evaluate_2[2] = '\0';
			number += select_number(num_to_evaluate_2);
		}
		else
		{
			num_to_evaluate_1 = (char *) malloc(2 * sizeof(char));
			num_to_evaluate_1[0] = s[i++];
			num_to_evaluate_1[1] = '\0';
			number += select_number(num_to_evaluate_1);
		}	
	}
    
    return number;
}

int main(void)
{
	char *string = (char *) malloc(8);
	string[0] = 'M';
	string[1] = 'C';
	string[2] = 'M';
	string[3] = 'X';
	string[4] = 'C';
	string[5] = 'I';
	string[6] = 'V';
	string[7] = '\0';
	//MCMXCIV"
	int number = 0;

	number = select_number(string);
	printf("HOLA");
	printf("%d",number);

	return 0;
}