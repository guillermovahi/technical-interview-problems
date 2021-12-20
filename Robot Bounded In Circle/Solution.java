public class Solution {
	public boolean isRobotBounded(String instructions)
	{
		int x = 0, y = 0, orientation = 0;
		
		for(char i : instructions.toCharArray())
		{			
			if (i == 'G') //straight
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
			else if (i == 'L') //left
				orientation = orientation > 0 ? orientation - 90 : orientation + 270;
			else //right 
				orientation = orientation == 270 ? orientation - 270 : orientation + 90; 
			i++;
		}
		if ((orientation != 0) || (x == 0 && y == 0))
			return true;
		return false;
	}
}
