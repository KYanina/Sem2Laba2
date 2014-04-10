#include <iostream>
#include "func.h"
using namespace std;

void convert(Time &x)
{

    {
            x.minute+=x.second/60;
            x.second=x.second%60;
            x.hour+=x.minute/60;
            x.minute=x.minute%60;
    }
}


void enter(Time &x)
{
	cout<<"Enter time(seconds amd minutes less then 60)"<<endl;
	{
		cin>>x.hour>>x.minute>>x.second;
	}
convert(x);

}
void output (Time x)
{
	{
		cout<<x.hour<<":"<<x.minute<<":"<<x.second<<endl;
	}
}


Time sum(Time a, Time b)
{
	Time res;
	res.hour=a.hour+b.hour;
	res.minute=a.minute+b.minute;
	res.second=a.second+b.second;
	convert(res);
	return res;

}

Time diff(Time a, Time b)
{
	Time res;
	a.second=a.second+a.minute*60+a.hour*3600;
	b.second=b.second+b.minute*60+b.hour*3600;
	res.hour=0;
	res.minute=0;

	if(a.second>=b.second)
	{
		res.second=a.second-b.second;
	}

	else
	{

		res.second=b.second-a.second;
		cout<<"The negative time period,  the difference between second and the first time entered is: "<<endl;
	}
	convert(res);

	return res;
}

