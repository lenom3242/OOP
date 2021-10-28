#include <iostream>
using namespace std;
class Day {
	int year, month, day;
public:
	void incYear() {
		year++;
	}
	void incMonth() {
		if (month == 12)
		{
			year++;
			month = 1;
		}
		else
		month++;
	}
	void incDay() {
		if (day == 30)
		{
			incMonth();
			day = 1;
		}
		else
			day++;
	}
	void output() {
		if (day < 10) {
			cout << "0" << day << ".";
		}
		else
			cout << day << ".";
		if (month < 10)
		{
			cout << "0" << month << ".";
		}
		else
			cout << month << ".";
		cout << year << endl;
	}
	Day(int nday=1, int nmonth=1, int nyear=2021) : day(nday), month(nmonth), year(nyear) {
		if (nday > 30 || nday < 1)
			day = 1;
		if (nmonth > 12 || nmonth < 1)
			month = 1;
	}
};
class Time: private Day {
	int hour, minute;
public:
	void incHour() {
		if (hour == 23)
		{
			incDay();
			hour = 0;
		}
		else
		hour++;
	}
	void incMinute() {
		if (minute == 59)
		{
			incHour();
			minute = 0;
		}
		else minute++;
	}
	void time() {
		output();
		cout << hour << ":";
		if (minute < 10) {
			cout << "0";
			cout << minute << endl;
		}
		else
			cout << minute << endl;
	}
	Time(int nhour=0, int nminute=0, int nday=1, int nmonth=1, int nyear=2021) : hour(nhour), minute(nminute), Day(nday, nmonth, nyear) {
		if (nhour > 23)
			hour = 0;
		if (nminute > 59)
			minute = 0;
	}
};
void main() {
	Time super(23,50,30,12,2020);
	for (int i = 1; i < 3001; i++)
	{
		super.incMinute();
		if (!(i % 30 && i!=0)) {
			super.time();
		}
	}
}