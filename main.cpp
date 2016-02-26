#include "DrawLine.h"
#include <cstdio>
#include <stdlib.h>
int main()
{
	DrawLine DrLine;
	printf("Please input Points like: (1,1) (2,2): ");
	int sx,sy,ex,ey;
	scanf("(%d,%d) (%d,%d)",&sx,&sy,&ex,&ey);
	DrLine.Init(sx,sy,ex,ey);
	DrLine.Draw();
	return 0;
}
