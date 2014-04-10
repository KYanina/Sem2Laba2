#ifndef FUNC_H_INCLUDED
#define FUNC_H_INCLUDED


const int n=2;
struct Time
	{
		int hour;
		int minute;
		int second;
	};

void enter (Time &x);
void output (Time x);
Time sum(Time a, Time b);
Time diff(Time a,Time b);

#endif // FUNC_H_INCLUDED
