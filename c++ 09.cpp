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

	cout << "x���� y���� �Է��Ͻʽÿ� : ";
	while (cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "x���� y���� �Է��Ͻʽÿ�(�������� q�� �Է�) : ";
	}
	cout << "���α׷��� �����մϴ�.\n";
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
	cout << "�Ÿ� = " << dapos.distance;
	cout << ", ���� = " << dapos.angle * Rad_to_deg;
	cout << "��\n";
}*/


/* autoscp 9-4 (570pg)
void oile(int x);
int main()
{
	int texas = 31;
	int year = 2011;

	cout << "main()����, texas = " << texas << ", &texas = "
		 << &texas << endl;

	cout << "main()����, year = " << year << ", &year = "
		<< &year << endl;

	oile(texas);

	cout << "main()����, texas = " << texas << ", &texas = "
		<< &texas << endl;

	cout << "main()����, year = " << year << ", &year = "
		<< &year << endl;

	return 0;
}
void oile(int x)
{
	int texas = 5;

	cout<<"oil����, texas = " << texas << ", &texas = "
		<< &texas << endl;
	cout << "oil����, x = " << x << ", &x = "
		<< &x << endl;
	{
		int texas = 113;

		cout << "��Ͽ���, texas = " << texas << ", &texas = "
			<< &texas << endl;
		cout << "��Ͽ���, x = " << x << ", &x = "
			<< &x << endl;
	}
	cout << "����� ����� ��, x = " << x << ", &x = "
		<< &x << endl;
}*/


/* external1 9-5 (581pg)
double warming = 0.3;
void update(double dt);
void local();
int main()
{
	cout << "���� warming�� " << warming << "���Դϴ�. \n";
	update(0.1);
	cout << "���� warming�� " << warming << "���Դϴ�. \n";
	local();
	cout << "���� warming�� " << warming << "���Դϴ�. \n";

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
	cout << "���� warming�� " << warming << "���� ���ŵǾ����ϴ�.\n";
}
void local()
{
	double warming = 0.8;
	cout << "���� warming�� " << warming << "���Դϴ�. \n";
	cout << "�׷���, ���� warming�� " << ::warming << "���Դϴ�. \n";

}*/


/* twofile1, twofile2  9-7, 9-8 (586pg)
int tom = 3;
int dick = 30;
static int harry = 300;

void remote_access();
int main()
{
	cout << "main()�� �����ϴ� �� ������ �ּ�: \n";
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " = &harry\n";
	remote_access();

	return 0;
}
void remote_access()
{
	cout << "remote_access()�� �����ϴ� �� ������ �ּ�: \n";
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

	cout << "�������� �� ���� �Է��Ͻʽÿ�: \n";
	cin.get(input,arsize);
	while (cin)
	{
		cin.get(next);
		while (next != '\n')
			cin.get(next);
		strcount(input);
		cout << "���� ���� �Է��Ͻʽÿ� (�������� �� ���� �Է�):\n";
		cin.get(input, arsize);
	}
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}
void strcount(const char* str)
{
	static int total = 0;
	int count = 0;

	cout << "\"" << str << "\'���� ";
	while (*str++)
		count++;
	total += count;
	cout << count << "���� ���ڰ� �ֽ��ϴ�.\n";
	cout << "���ݱ��� �� " << total << "���� ���ڸ� �Է��ϼ̽��ϴ�.\n";
}*/


/* newplace 9-10 (599pg)
const int BUF = 512;
const int N = 5;
char buffer[BUF];
int main()
{
	double* pd1, * pd2;
	int i;
	cout << "new�� ��ġ ���� new�� ù ��° ȣ�� : \n";
	pd1 = new double[N];
	pd2 = new(buffer) double[N];

	for (i = 0; i < N; i++)
		pd2[i] = pd1[i] = 1000 + 20.0 * i;
	cout << "�޸� �ּ�:\n" << pd1 << " : ��"
		<< (void*)buffer << " : ����" << endl;
	cout << "�޸� ����:\n";

	for (i = 0; i < N; i++)
	{
		cout << &pd1[i] << "�� " << pd1[i] << "; ";
		cout << &pd2[i] << "�� " << pd2[i] <<endl;
	}
	cout << "\nnew�� ��ġ ���� new�� �� ���� ȣ��:\n";
	double* pd3, * pd4;
	pd3 = new double[N];
	pd4 = new(buffer) double[N];

	for (i = 0; i < N; i++)
		pd4[i] = pd3[i] = 1000 + 40.0 * i;
	cout << "�޸� ����:\n";

	for (i = 0; i < N; i++)
	{
		cout << &pd3[i] << "�� " << pd1[i] << "; ";
		cout << &pd4[i] << "�� " << pd2[i] << endl;
	}
	cout << "\nnew�� ��ġ ���� new�� �� ���� ȣ��:\n";
	delete [] pd1;
	pd1 = new double[N];
	pd2 = new (buffer + N * sizeof(double)) double[N];

	cout << "�޸� ����:\n";

	for (i = 0; i < N; i++)
	{
		cout << &pd1[i] << "�� " << pd1[i] << "; ";
		cout << &pd2[i] << "�� " << pd2[i] << endl;
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
		cout << "�̸��� �Է��Ͻʽÿ�: ";
		cin >> rp.fname;
		cout << "������ �Է��Ͻʽÿ�: ";
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
		cout << "��ä�� �Է��Ͻʽÿ�: ";
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
	cout << "��ä �Ѿ�: $" << sumDebts(zippy, 3) << endl;

	return;
}
void another(void)
{
	using pers::person;
	person collector = { "Millo", "Rightshift" };
	pers::showperson(collector);
	cout << endl;
}*/



//��������

/* 2��
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


