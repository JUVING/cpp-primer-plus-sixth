#include "main.h"


/*
//mytime0.h 11-1 (712pg)
class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
	void addmin(int m);
	void addHr(int h);
	void reset(int h = 0, int m = 0);
	Time sum(const Time& t) const;
	void show() const;
};
//mytime0.cpp 11-2 (713pg)
Time::Time()
{
	hours = minutes = 0;
}
Time::Time(int h, int m = 0)
{
	hours = h;
	minutes = m;
}
void Time::addmin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}
void Time::addHr(int h)
{
	hours += h;
}
void Time::reset(int h = 0, int m = 0)
{
	hours = h;
	minutes = m;
}
Time Time::sum(const Time& t) const
{
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}
void Time::show() const
{
	cout << hours << "시간, " << minutes << "분";
}
//usetime0.cpp 11-3 (715pg)
int main()
{
	Time planning;
	Time coding(2, 40);
	Time fixing(5,55);
	Time total;

	cout << "planning time = ";
	planning.show();
	cout << endl;

	cout << "coding time = ";
	coding.show();
	cout << endl;

	cout << "fixing time = ";
	fixing.show();
	cout << endl;

	total = coding.sum(fixing);
	cout << "coding.sum(fixing) = ";
	total.show();
	cout << endl;

	return 0;
}*/


/*
//mytime1.h 11-4 (716pg)
class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
	void addmin(int m);
	void addHr(int h);
	void reset(int h = 0, int m = 0);
	Time operator+(const Time & t)const;
	void show() const;
};
//mytime1.cpp
Time::Time()
{
	hours = minutes = 0;
}
Time::Time(int h, int m = 0)
{
	hours = h;
	minutes = m;
}
void Time::addmin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}
void Time::addHr(int h)
{
	hours += h;
}
void Time::reset(int h = 0, int m = 0)
{
	hours = h;
	minutes = m;
}
Time Time::operator+(const Time& t)const
{
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}
void Time::show() const
{
	cout << hours << "시간, " << minutes << "분";
}
//usetime1 11-6 (781pg)
int main()
{
	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;

	cout << "planning time = ";
	planning.show();
	cout << endl;

	cout << "coding time = ";
	coding.show();
	cout << endl;

	cout << "fixing time = ";
	fixing.show();
	cout << endl;

	total = coding + fixing;
	cout << "coding + fixing = ";
	total.show();
	cout << endl;

	Time morefixing(3, 28);
	cout << "more fixing time = ";
	morefixing.show();
	cout << endl;
	total = morefixing.operator+(total);
	cout << "morefixing.operator+(total) = ";
	total.show();
	cout << endl;


	return 0;
}*/



/*
//mytime2.h
class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
	void addmin(int m);
	void addHr(int h);
	void reset(int h = 0, int m = 0);
	Time operator+(const Time& t)const;
	Time operator-(const Time& t)const;
	Time operator*(double n)const;
	void show() const;
};
//mytime2.cpp 11-8 (724pg)
Time::Time()
{
	hours = minutes = 0;
}
Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}
void Time::addmin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}
void Time::addHr(int h)
{
	hours += h;
}
void Time::reset(int h, int m)
{
	hours = h;
	minutes = m;
}
Time Time::operator+(const Time& t)const
{
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}
Time Time::operator-(const Time& t)const
{
	Time diff;
	int tot1, tot2;
	tot1 = t.minutes + 60 * t.hours;
	tot2 = minutes + 60 * hours;
	diff.minutes = (tot2 - tot1) % 60;
	diff.hours = (tot2 - tot1) / 60;
	return diff;
}
Time Time::operator*(double mult)const
{
	Time result;
	long totalminutes = hours * mult * 60 + minutes * mult;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;
	return result;
}
void Time::show() const
{
	cout << hours << "시간, " << minutes << "분";
}
//usetime2.cpp 11-9 (726pg)
int main()
{
	Time weeding(4, 35);
	Time waxing(2, 47);
	Time total;
	Time diff;
	Time adjussted;

	cout << "weeding time = ";
	weeding.show();
	cout << endl;

	cout << "waxing time = ";
	waxing.show();
	cout << endl;

	cout << "total work time = ";
	total = weeding + waxing;
	total.show();
	cout << endl;

	diff= weeding - waxing;
	cout << "weeding time - waxing time = ";
	diff.show();
	cout << endl;

	adjussted = total * 1.5;
	cout << "adjussted work time = ";
	adjussted.show();
	cout << endl;

	return 0;
}*/



/*
//mytime3 11-10 (736pg)
class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
	void addmin(int m);
	void addHr(int h);
	void reset(int h = 0, int m = 0);
	Time operator+(const Time& t)const;
	Time operator-(const Time& t)const;
	Time operator*(double n)const;
	friend Time operator*(double m, const Time& t) { return t * m; }
	friend ostream& operator<<(ostream& os, const Time& t);
};
//mytime3.cpp 11-11 (737pg)
Time::Time()
{
	hours = minutes = 0;
}
Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}
void Time::addmin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}
void Time::addHr(int h)
{
	hours += h;
}
void Time::reset(int h, int m)
{
	hours = h;
	minutes = m;
}
Time Time::operator+(const Time& t)const
{
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}
Time Time::operator-(const Time& t)const
{
	Time diff;
	int tot1, tot2;
	tot1 = t.minutes + 60 * t.hours;
	tot2 = minutes + 60 * hours;
	diff.minutes = (tot2 - tot1) % 60;
	diff.hours = (tot2 - tot1) / 60;
	return diff;
}
Time Time::operator*(double mult)const
{
	Time result;
	long totalminutes = hours * mult * 60 + minutes * mult;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;
	return result;
}
ostream& operator<<(ostream& os, const Time& t)
{
	os << t.hours << "시간, " << t.minutes << "분";
	return os;
}
//usetime3 11-12 (739pg)
int main()
{
	Time aida(3, 35);
	Time tosca(2, 48);
	Time temp;

	cout << "aida와 tosca:\n";
	cout << aida << "; " << tosca <<endl;
	temp = aida + tosca;
	cout << "aida + tosca: " << temp << endl;
	temp = aida * 1.17;
	cout << "aida * 1.17: : " << temp << endl;
	cout << "10 * tosca: : " << 10*tosca << endl;
}*/


/*
//vect.h 11-13 (744pg)
namespace vector
{
	class vector
	{
	public:
		enum Mode{RECT,POL};
	private:
		double x, y, mag, ang;
		Mode mode;
		void set_mag();
		void set_ang();
		void set_x();
		void set_y();
	public:
		vector();
		vector(double n1, double n2, Mode form = RECT);
		void reset(double n1, double n2, Mode form = RECT);
		~vector();
		double xval() const { return x; }
		double yval() const { return y; }
		double magval() const { return mag; }
		double angval() const { return ang; }
		void polar_mode();
		void rect_mode();
		vector operator+(const vector & b) const;
		vector operator-(const vector& b) const;
		vector operator-() const;
		vector operator*(double n) const;
		friend vector operator*(double n, const vector & a);
		friend ostream& operator<<(ostream & os,const vector & v);
	};
}
//vect.cpp 11-14 (746pg)
namespace vector
{
	const double Rad_to_deg = 45.0 / atan(1.0);
	void vector::set_mag()
	{
		mag = sqrt(x * x + y * y);
	}
	void vector::set_ang()
	{
		if (x == 0.0 && y == 0.0)
			ang = 0.0;
		else
			ang = atan2(y, x);
	}
	void vector::set_x()
	{
		x = mag * cos(ang);
	}
	void vector::set_y()
	{
		y = mag * cos(ang);
	}
	vector::vector()
	{
		x = y = mag = ang = 0.0;
		mode = RECT;
	}
	vector::vector(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n1;
			set_mag();
			set_ang();
		}
		else if (form == POL)
		{
			mag = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "vector()에 전달된 제3의 매개변수가 잘못되었습니다.\n";
			cout << "그래서 벡터를 0으로 설정하였다.\n";
			x = y = mag = ang = 0.0;
			mode = RECT;
		}
	}
	void vector::reset(double n1, double n2, Mode form = RECT)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n1;
			set_mag();
			set_ang();
		}
		else if (form == POL)
		{
			mag = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "vector()에 전달된 제3의 매개변수가 잘못되었습니다.\n";
			cout << "그래서 벡터를 0으로 설정하였다.\n";
			x = y = mag = ang = 0.0;
			mode = RECT;
		}
	}
	vector::~vector()
	{

	}
	void vector::polar_mode()
	{
		mode = POL;
	}
	void vector::rect_mode()
	{
		mode = RECT;
	}
	vector vector::operator+(const vector& b) const
	{
		return vector(x + b.x, y + b.y);
	}
	vector vector::operator-(const vector& b) const
	{
		return vector(x - b.x, y - b.y);
	}
	vector vector::operator-() const
	{
		return vector(-x,-y);
	}
	vector vector::operator*(double n) const
	{
		return vector(n*x,n*y);
	}
	vector operator*(double n, const vector& a)
	{
		return a * n;
	}
	ostream & operator<<(ostream& os, const vector& v)
	{
		if (v.mode == vector::RECT)
			os << "(x, y) = (" << v.x << ", " << v.y << ")";
		else if (v.mode == vector::POL)
		{
			os << "(m, a) = (" << v.mag << ", "
				<< v.mag * Rad_to_deg << ")";
		}
		else
			os << "vector 객체의 모드 지정이 틀렸습니다.\n";
		return os;
	}
}
//randwalk.cpp 11-15 (758pg)
int main()
{
	using vector::vector;
	srand(time(0));
	double direction;
	vector step;
	vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target, dstep;
	cout << "목표 거리 입력하십시오(끝내려면 q): ";
	while (cin >> target)
	{
		cout << "보폭을 입력하십시오: ";
		if (!(cin >> dstep))
			break;

		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction,vector::POL);
			result = result + step;
			steps++;
		}
		cout << steps << " 걸음을 걸은 후 술고래의 현재 위치:\n";
		cout << result << endl;
		cout << "걸음당 기둥에서 벗어난 평균 거리 = "
			<< result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "목표 거리 입력하십시오(끝내려면 q): ";
	}
	cout << "프로그램을 종료합니다.\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
	return 0;
}*/


/*
//stonewt.h 11-16 (764pg)
class stonewt
{
private:
	enum { Lbs_per_stn = 14 };
	int stone;
	double pds_left;
	double pounds;
public:
	stonewt(double lbs);
	stonewt(int stn, double lbs);
	stonewt();
	~stonewt();
	void show_lbs() const;
	void show_stn() const;
};
//stonwt.cpp 11-17 (765pg)
stonewt::stonewt(double lbs)
{
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}
stonewt::stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}
stonewt::stonewt()
{
	stone = pounds = pds_left = 0;
}
stonewt::~stonewt()
{

}
void stonewt::show_lbs() const
{
	cout << stone << "스톤, " << pds_left << "파운드\n";
}
void stonewt::show_stn() const
{
	cout << pounds << "파운드\n";
}
//stone.cpp 11-18 (768pg)
void display(const stonewt& st, int n);
int main()
{
	stonewt pavarotti = 275;
	stonewt wolfe(285.7);
	stonewt taft(21, 8);

	cout << "테너 가수의 몸무게: ";
	pavarotti.show_stn();
	cout << "탐정의 몸무게: ";
	wolfe.show_stn();
	cout << "대통령의 몸무게: ";
	taft.show_lbs();
	pavarotti = 276.8;
	taft = 325;
	cout << "저녁 식사를 마친 후 테너 가수의 몸무게: ";
	pavarotti.show_stn();
	cout << "저녁 식사를 마친 후 대통령의 몸무게: ";
	taft.show_lbs();
	display(taft,2);
	cout << "레슬링 선수는 그보다 더 무겁다.\n";
	display(422, 2);
	cout << "비만은 건강의 최대의 적이다.\n";

	return 0;
}
void display(const stonewt& st, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "와!";
		st.show_stn();
	}
}*/


/*
// stonewt1.cpp 11-19 (772pg)
class stonewt
{
private:
	enum { Lbs_per_stn = 14 };
	int stone;
	double pds_left;
	double pounds;
public:
	stonewt(double lbs);
	stonewt(int stn, double lbs);
	stonewt();
	~stonewt();
	void show_lbs() const;
	void show_stn() const;
	operator int() const;
	operator double() const;
};
//stonewt1.cpp 11-20 (773pg)
stonewt::stonewt(double lbs)
{
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}
stonewt::stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}
stonewt::stonewt()
{
	stone = pounds = pds_left = 0;
}
stonewt::~stonewt()
{

}
void stonewt::show_lbs() const
{
	cout << stone << "스톤, " << pds_left << "파운드\n";
}
void stonewt::show_stn() const
{
	cout << pounds << "파운드\n";
}
stonewt::operator int() const
{
	return int(pounds + 0.5);
}
stonewt::operator double() const
{
	return pounds;
}
//stone1.cpp 11-21 (774pg)
int main()
{
	stonewt poppins(9, 2.8);
	double p_wt = poppins;
	cout << "double형으로 변환 => ";
	cout << "poppins: " << p_wt << "파운드\n";
	cout << "int형으로 변환 => ";
	cout << "poppins: " << int(poppins) << "파운드\n";
	return 0;
}*/



