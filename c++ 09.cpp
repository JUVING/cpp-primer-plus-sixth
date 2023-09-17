#include "main.h"

/* coordin 9-1 (563pg)   //coordin.h//
#include "main.h"
#ifndef MAIN_H
#define MAIHN_H
struct polar
{
	double distance;
	double angle;
};
struct rect
{
	double x;
	double y;
};
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);
#endif
*/

/*
#ifndef COORDIN_H
#define COORDIN_H

int main()
{
	rect rplace;
	polar pplace;

	cout << "x값과 y값을 입력하십시오 : ";
	while (cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "x값과 y값을 입력하십시오(끝내려면 q를 입력) : ";
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}
#endif
*/



/* file2.cpp 9-3 (565pg)
polar rect_to_polar(rect xypos)
{
	polar answer;

	answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);

	return answer;
}

void show_polar(polar dapos)
{
	const double Rad_to_deg = 57.29577951;
	cout << "거리 = " << dapos.distance;
	cout << ", 각도 = " << dapos.angle * Rad_to_deg;
	cout << "도\n";
}*/


/* autoscp 9-4 (570pg)
void oile(int x);
int main()
{
	int texas = 31;
	int year = 2011;

	cout << "main()에서, texas = " << texas << ", &texas = "
		 << &texas << endl;

	cout << "main()에서, year = " << year << ", &year = "
		<< &year << endl;

	oile(texas);

	cout << "main()에서, texas = " << texas << ", &texas = "
		<< &texas << endl;

	cout << "main()에서, year = " << year << ", &year = "
		<< &year << endl;

	return 0;
}
void oile(int x)
{
	int texas = 5;

	cout<<"oil에서, texas = " << texas << ", &texas = "
		<< &texas << endl;
	cout << "oil에서, x = " << x << ", &x = "
		<< &x << endl;
	{
		int texas = 113;

		cout << "블록에서, texas = " << texas << ", &texas = "
			<< &texas << endl;
		cout << "블록에서, x = " << x << ", &x = "
			<< &x << endl;
	}
	cout << "블록을 통과한 후, x = " << x << ", &x = "
		<< &x << endl;
}*/


/* external1 9-5 (581pg)
double warming = 0.3;
void update(double dt);
void local();
int main()
{
	cout << "전역 warming은 " << warming << "도입니다. \n";
	update(0.1);
	cout << "전역 warming은 " << warming << "도입니다. \n";
	local();
	cout << "전역 warming은 " << warming << "도입니다. \n";

	return 0;
}*/


/* support 9-6 (581pg)
extern double warming;
void update(double dt);
void local();

void update(double dt)
{
	extern double warming;
	warming += dt;
	cout << "전역 warming은 " << warming << "도로 갱신되었습니다.\n";
}
void local()
{
	double warming = 0.8;
	cout << "지역 warming은 " << warming << "도입니다. \n";
	cout << "그러나, 전역 warming은 " << ::warming << "도입니다. \n";

}*/


/* twofile1, twofile2  9-7, 9-8 (586pg)
int tom = 3;
int dick = 30;
static int harry = 300;

void remote_access();
int main()
{
	cout << "main()이 보고하는 세 변수의 주소: \n";
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " = &harry\n";
	remote_access();

	return 0;
}
void remote_access()
{
	cout << "remote_access()가 보고하는 세 변수의 주소: \n";
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " = &harry\n";
}*/


/* static 9-9 (587pg)
const int arsize = 10;
void strcount(const char* str);
int main()
{
	char input[arsize];
	char next;

	cout << "영문으로 한 행을 입력하십시오: \n";
	cin.get(input,arsize);
	while (cin)
	{
		cin.get(next);
		while (next != '\n')
			cin.get(next);
		strcount(input);
		cout << "다음 행을 입력하십시오 (끝내려면 빈 행을 입력):\n";
		cin.get(input, arsize);
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}
void strcount(const char* str)
{
	static int total = 0;
	int count = 0;

	cout << "\"" << str << "\'에는 ";
	while (*str++)
		count++;
	total += count;
	cout << count << "개의 문자가 있습니다.\n";
	cout << "지금까지 총 " << total << "개의 문자를 입력하셨습니다.\n";
}*/


/* newplace 9-10 (599pg)
const int BUF = 512;
const int N = 5;
char buffer[BUF];
int main()
{
	double* pd1, * pd2;
	int i;
	cout << "new와 위치 지정 new의 첫 번째 호출 : \n";
	pd1 = new double[N];
	pd2 = new(buffer) double[N];

	for (i = 0; i < N; i++)
		pd2[i] = pd1[i] = 1000 + 20.0 * i;
	cout << "메모리 주소:\n" << pd1 << " : 힙"
		<< (void*)buffer << " : 정적" << endl;
	cout << "메모리 내용:\n";

	for (i = 0; i < N; i++)
	{
		cout << &pd1[i] << "에 " << pd1[i] << "; ";
		cout << &pd2[i] << "에 " << pd2[i] <<endl;
	}
	cout << "\nnew와 위치 지정 new의 두 번쨰 호출:\n";
	double* pd3, * pd4;
	pd3 = new double[N];
	pd4 = new(buffer) double[N];

	for (i = 0; i < N; i++)
		pd4[i] = pd3[i] = 1000 + 40.0 * i;
	cout << "메모리 내용:\n";

	for (i = 0; i < N; i++)
	{
		cout << &pd3[i] << "에 " << pd1[i] << "; ";
		cout << &pd4[i] << "에 " << pd2[i] << endl;
	}
	cout << "\nnew와 위치 지정 new의 세 번쨰 호출:\n";
	delete [] pd1;
	pd1 = new double[N];
	pd2 = new (buffer + N * sizeof(double)) double[N];

	cout << "메모리 내용:\n";

	for (i = 0; i < N; i++)
	{
		cout << &pd1[i] << "에 " << pd1[i] << "; ";
		cout << &pd2[i] << "에 " << pd2[i] << endl;
	}
	delete [] pd1;
	delete [] pd3;

	return 0;
}*/


//namesp.h 9-11 (616pg)
namespace pers
{
	struct person
	{
		string fname;
		string lname;
	};
	void getperson(person&);
	void showperson(const person&);
}
namespace debts
{
	using namespace pers;
	struct Debt
	{
		person name;
		double amount;
	};
	void getDebt(Debt&);
	void showDebt(const Debt&);
	double sumDebts(const Debt ar[], int n);
}
// namesp.cpp 9-12 (617pg)
namespace pers
{
	void getperson(person& rp)
	{
		cout << "이름을 입력하십시오: ";
		cin >> rp.fname;
		cout << "성씨를 입력하십시오: ";
		cin >> rp.lname;
	}
	void showperson(const person& rp)
	{
		cout << rp.lname << ", " << rp.fname;
	}
}
namespace debts
{
	void getDebt(Debt& rd)
	{
		getperson(rd.name);
		cout << "부채를 입력하십시오: ";
		cin >> rd.amount;
	}
	void showDebt(const Debt& rd)
	{
	pers:showperson(rd.name);
		cout << ": $" << rd.amount << endl;
	}
	double sumDebts(const Debt ar[], int n)
	{
		double total = 0;
		for (int i = 0; i < n; i++)
			total += ar[i].amount;
		return total;
	}
}

/* usenmsp 9 - 13 (618pg)
void other(void);
void another(void);
int main(void)
{
	using debts::Debt;
	using debts::showDebt;
	Debt golf = { {"Benny","Glister"},120.0 };
	showDebt(golf);
	other();
	another();

	return 0;
}
void other(void)
{
	using namespace debts;
	person dg = { "Doodle","Glister" };
	showperson(dg);
	cout << endl;
	Debt zippy[3];
	int i;
	for (i = 0; i < 3; i++)
		getDebt(zippy[i]);

	for (i = 0; i < 3; i++)
		showDebt(zippy[i]);
	cout << "부채 총액: $" << sumDebts(zippy, 3) << endl;

	return;
}
void another(void)
{
	using pers::person;
	person collector = { "Millo", "Rightshift" };
	pers::showperson(collector);
	cout << endl;
}*/



//연습문제

/* 2번
const int arsize = 10;
void strcount(string str);
int main()
{
	string input;
	string next;

	cout << "Enter a line in English: \n";
	getline(cin, input);
	while (!input.empty()) // Correctly check for an empty line
	{
		strcount(input);
		cout << "Enter the following line (enter a blank line to exit):\n";
		getline(cin, input);
	}
	cout << "The program is quitting.\n";
	return 0;
}

void strcount(string str)
{
	static int total = 0;
	int count = 0;

	cout << "\"" << str << "\" contains ";
	for (char ch : str) // Iterate through each character in the string
	{
		count++;
	}
	total += count;
	cout << count << " characters.\n";
	cout << "You have entered a total of " << total << " characters so far.\n";
}*/


