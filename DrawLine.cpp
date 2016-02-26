#include "DrawLine.h"

int abs(int x)
{
	return x >= 0 ? x : 0;
}

void DrawLine::Draw()
{
	printf("DrawLine:");
	printf("From (%d %d) To (%d %d)\n",_start.GetX(),_start.GetY(),_end.GetX(),_end.GetY());
  printf("(%d,%d)",_start.GetX(),_start.GetY());

	int difx = _end.GetX() - _start.GetY();
	int dify = _end.GetY() - _start.GetY();
	int dirx = difx ? 1 : -1;
	int diry = dify ? 1 : -1;
	difx = abs(difx);
	dify = abs(dify);
	int cnt = 0;
	if(difx >= dify)
	{
		while(_start.GetX() != _end.GetX())
		{
			_start.SetX(_start.GetX()+dirx); 
			cnt += dify;
			if((cnt<<1) >= difx)
			{
			  _start.SetY(_start.GetY()+diry);	
				cnt -= difx;
			}
			printf("->(%d,%d)",_start.GetX(),_start.GetY());
		}
	}
	else 
	{
	  while(_start.GetY() != _end.GetY())
		{
			_start.SetY(_start.GetY()+diry);
			cnt += difx;
			if((cnt<<1) >= dify)
			{
				_start.SetX(_start.GetX()+dirx);
				cnt -= dify;

			}
			printf("->(%d,%d)",_start.GetX(),_start.GetY());
		}
	}
	printf("\n");
}
