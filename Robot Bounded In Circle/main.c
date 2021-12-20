#include <stdbool.h>

bool isRobotBounded(char * instructions){

	int i = 0;
	int orientation = 0;
	int x = 0, y = 0;

	while(instructions[i] != '\0' && i < 100)
	{			
		if (instructions[i] == 'G') //straight
		{
			if (orientation == 0)
				y++;
			else if(orientation == 180)
				y--;
			else if(orientation == 90)
				x++;
			else
				x--;
		}
		else if (instructions[i] == 'L') //left
			orientation = orientation > 0 ? orientation - 90 : orientation + 270;
		else //right 
			orientation = orientation == 270 ? orientation - 270 : orientation + 90; 
		i++;
	}

	if ((orientation != 0) || (x == 0 && y == 0))
		return true;
	return false;
}
