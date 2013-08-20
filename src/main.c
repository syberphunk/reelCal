#include <stdio.h>
#include <math.h>

int main(void)
{
	int rowCount = 0;
	float filRadius = 65.0f;
	float innerRadius = 25.0f;
	float filDiameter = 1.75f;
	float filStrandsHigh = (filRadius - innerRadius) / filDiameter;
	float estLength = 0.0f;	
	float reelWidth = 85.91f;
	float filStrandsWide = reelWidth / filDiameter;
	
	for(rowCount = 0; (rowCount <= filStrandsHigh) && (filRadius >= innerRadius); rowCount++)
	{
		estLength += (M_PI * (2* filRadius)) * filStrandsWide;
		filRadius = filRadius - filDiameter;
	}
	estLength = estLength/1000;
	printf("Estimated length: %0.2f\n",estLength);

	return 0;
}
