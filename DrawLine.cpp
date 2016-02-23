#include "DrawLine.h"
#include <math>

void DrawLine::Draw();
{
	printf("DrawLine:");
	printf("From (%d %d) To (%d %d)\n",_start.x,_start,y,_end,x,_end.y);
  printf("(%d,%d)->",_start.x,_start.y);

	int difx = _end.x - _start.x;
	int dify = _end.y - _start.y;
	int dirx = difx ? 1 : -1;
	int diry = dify ? 1 : -1;
	difx = std::abs(difx);
	dify = std::abs(dify);
	int cnt = 0;
	if(difx >= dify)
	{
		while(_start.x != _end.x)
		{
			_start.x += dirx;
			_cnt += dify;
			if((cnt<<1) >= difx)
			{
				_start.y += diry;
				_cnt -= dify;
			}
			printf("(%d,%d)->",_start,x,_start.y);
		}
	}
	else 
	{
	  while(_start.y != _end.y)
		{
			_start.y += diry;
			_cnt += difx;
			if((cnt<<1) >= dify)
			{
				_start.x += dirx;
				_cnt -= difx;

			}
			printf("(%d,%d)->",_start.x,_start.y);
		}
	}
	printf("(%d,%d)\n",_end.x,_end.y);
	
}
