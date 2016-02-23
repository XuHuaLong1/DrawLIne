#include <stdio.h>
#include <vector>

class Point
{
public:
	int GetX() const;
	int GetY() const;
	void Init(int x,int y);
	Point():_x(0),_y(0) {};
	Point(int x,int y):_x(x),_y(y) {}
	Point(const Point& rhs) { _x = rhs.GetX();_y = rhs.GetY();}
  Point&	operator = (const Point& rhs) {_x = rhs.GetX();_y = rhs.GetY();}
private:
	int _x;
	int _y;
};

class DrawLine
{
public:
	DrawLine(int sx,int sy,int ex,int ey) :_start(sx,sy),_end(ex,ey){}
	DrawLine(const Point& start,const Point& end):_start(start),_end(end){}
	void Draw();
private:
	Point _start;
	Point _end;
};


