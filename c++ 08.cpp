#include "main.h"


/* inline 8-1 (470pg)
inline double square(double x) { return x * x; }
int main()
{
	double a, b;
	double c = 13.0;

	a = square(5.0);
	b = square(4.5+7.5);
	cout << "a = " << a << " b = " << b <<
		"\n c = " << c << " c�� ���� = " << square(c++);

	return 0;
}*/


/* firstref 8-2 (472pg)
int main()
{
	int rats = 101; int& rodents = rats;
	cout << "rats = " << rats;
	cout << "rodents = " << rodents<<endl;
	rodents++;
	cout << "rats = " << rats;
	cout << "rodents = " << rodents << endl;

	cout << "rats�� �ּ� = " << &rats;
	cout << " rodents�� �ּ� = " << &rodents << endl;

	return 0;
}*/


/* secref 8-3 (474pg)
int main()
{
	int rats = 101; int& rodents = rats;
	cout << "rats = " << rats;
	cout << "rodents = " << rodents << endl;

	cout << "rats�� �ּ� = " << &rats;
	cout << " rodents�� �ּ� = " << &rodents << endl;

	int bunnies = 50;
	cout << "bunnies = " << bunnies;
	cout << ", rats = " << rats;
	cout << ", rodents = " << rodents << endl;

	cout << "rats�� �ּ� = " << &rats;
	cout << " rodents�� �ּ� = " << &rodents << endl;

	return 0;
}*/


/* swaps 8-4 (477pg)
void swapr(int& a, int& b);
void swapp(int* p, int* q);
void swapv(int a, int b);
int main()
{
	int wallet1 = 3000;
	int wallet2 = 3500;

	cout << "���� 1 = " << wallet1 << "�� ";
	cout << "���� 2 = " << wallet2 << "�� ";

	cout << "������ �̿��Ͽ� �Ŀ���� ��ȯ: \n";
	swapr(wallet1,wallet2);
	cout << "���� 1 = " << wallet1 << "�� ";
	cout << "���� 2 = " << wallet2 << "�� ";

	cout << "�����͸� �̿��Ͽ� ������� �ٽ� ��ȯ:\n";
	swapp(&wallet1, &wallet2);
	cout << "���� 1 = " << wallet1 << "�� ";
	cout << "���� 2 = " << wallet2 << "�� ";

	cout << "������ �����Ͽ� ���� ��ȯ �õ�:\n";
	swapv(wallet1, wallet2);
	cout << "���� 1 = " << wallet1 << "�� ";
	cout << "���� 2 = " << wallet2 << "�� ";

	return 0;
}
void swapr(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void swapp(int* p, int* q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
void swapv(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}*/


/* cubes 8-5 (480pg)
double cube(double a);
double refcube(double &ra);
int main()
{
	double x = 3.0;
	cout << cube(x);
	cout << " = " << x << "�� ������\n";
	cout << refcube(x);
	cout << " = " << x << "�� ������\n";
	return 0;
}
double cube(double a)
{
	a *= a * a;
	return a;
}
double refcube(double& ra)
{
	ra *= ra * ra;
	return ra;
}*/


/* strc_ref 8-6 (486pg)
struct free_throws
{
	string name;
	int made;
	int attempts;
	float percent;
};
void display(const free_throws & ft);
void set_pc(free_throws& ft);
free_throws& accumulate(free_throws & target,const free_throws & source);
int main()
{
	free_throws one = { "one",13,14 };
	free_throws two = { "two", 10, 16 };
	free_throws three = {"three",7, 9};
	free_throws four = { "four",5,9 };
	free_throws five = { "five",6,14 };
	free_throws team = { "team",0,0 };

	free_throws dup;
	set_pc(one);
	display(one);
	accumulate(team,one);
	display(team);

	display(accumulate(team, two));
	accumulate(accumulate(team, three), four);
	display(team);

	dup = accumulate(team, five);
	cout << "team ���:\n";
	display(team);
	cout << "���� ���� dub ���:\n";
	display(dup);
	set_pc(four);

	accumulate(dup, five) = four;
	cout << "���� ������ �ִ� ���� ���� dub ���:\n";
	display(dup);

	return 0;
}
void display(const free_throws& ft)
{
	cout << "Name: " << ft.name<<'\n';
	cout << "Made: " << ft.made<<'\t';
	cout << "Attempts: " << ft.attempts << '\t';
	cout << "Percent : " << ft.percent << '\n';
}
void set_pc(free_throws& ft)
{
	if (ft.attempts != 0)
		ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
	else
		ft.percent = 0;
}
free_throws& accumulate(free_throws& target, const free_throws& source)
{
	target.attempts += source.attempts;
	target.made += source.made;
	set_pc(target);
	return target;
}*/


/* strquote 8-7 (495pg)
string version1(const string& s1, const string& s2);
const string& version2(string& s1, const string& s2);
const string& version3(string& s1, const string& s2);
int main()
{
	string input, copy, result;

	cout << "���ڿ��� �Է��Ͻÿ�: ";
	getline(cin,input);
	copy = input;
	cout << "�Է��� ���ڿ�: " << input << endl;
	result = version1(input,"***");
	cout << "�ٲ� ���ڿ�: " << result << endl;
	cout << "���� ���ڿ�: " << input << endl;

	result = version2(input, "###");
	cout << "�ٲ� ���ڿ�: " << result << endl;
	cout << "���� ���ڿ�: " << input << endl;

	cout << "���� ���ڿ� �缳��\n";
	input = copy;
	result = version3(input, "@@@");
	cout << "�ٲ� ���ڿ�: " << result << endl;
	cout << "���� ���ڿ�: " << input << endl;

	return 0;
}
string version1(const string& s1, const string& s2)
{
	string temp;

	temp = s2 + s1 + s2;
	return temp;
}
const string& version2(string& s1, const string& s2)
{
	s1 = s2 + s1 + s2;
	return s1;
}
const string& version3(string& s1, const string& s2)
{
	string temp;

	temp = s2 + s1 + s2;
	return temp;
}*/


/* filefunc 8-8 (501pg)
void file_it(ostream & os,double fo,const double fe[],int n);
const int Limit = 5;
int main()
{
	ofstream fout;
	const char* fn = "ep-data.txt";
	fout.open(fn);

	if (!fout.is_open())
	{
		cout << fn << " ������ �� �� �����ϴ�. ��.\n";
		exit(EXIT_FAILURE);
	}
	double objective;
	cout << "�빰���� �����Ÿ��� "
			"mm ������ �Է��Ͻʽÿ�: ";
	cin >> objective;
	double eps[Limit];
	cout << Limit << "���� ��ȷ����� �����Ÿ��� "
					 "mm ������ �Է��Ͻʽÿ�: \n";

	for (int i = 0; i < Limit; i++)
	{
		cout << "��ȷ��� #" << i + 1 << ": ";
		cin >> eps[i];
	}
	file_it(fout, objective, eps, Limit);
	file_it(cout, objective, eps, Limit);
	cout << "����\n";

	return 0;
}
void file_it(ostream& os, double fo, const double fe[], int n)
{
	ios_base::fmtflags initial;
	initial = os.setf(ios_base::fixed);
	os.precision(0);
	os << "�빰������ �����Ÿ�: " << fo << " mm\n";
	os.setf(ios::showpoint);
	os.precision(1);
	os.width(17);
	os << "�빰���� �����Ÿ�: ";
	os.width(15);
	os << "Ȯ�����" << endl;

	for (int i = 0; i < n; i++)
	{
		os.width(17);
		os << fe[i];
		os.width(15);
		os << int(fo / fe[i] + 0.5) << endl;
	}
	os.setf(initial);
}*/


/* left 8-9 (506pg)
const int arsize = 80;
char* left(const char * str, int n=1);
int main()
{
	char smaple[arsize];
	cout << "���ڿ��� �Է��Ͻʽÿ�:\n";
	cin.get(smaple,arsize);
	char* ps = left(smaple,4);
	cout << ps << endl;
	delete[] ps;
	ps = left(smaple);
	cout << ps << endl;
	delete[] ps;

	return 0;
}
char* left(const char* str, int n)
{
	if (n < 0)
		n = 0;
	char* p = new char[n + 1];
	int i;
	for (i = 0; i < n && str[i]; i++)
		p[i] = str[i];
	while(i<=n)
		p[i++]='\0';

		return p;
}*/


/* leftover 8-20 (514pg)
unsigned long left(unsigned long num,unsigned ct);
char* left(const char * str, int n=1);
int main()
{
	const char * trip = "Hwaii!!";
	unsigned long n = 12345678;
	int i;
	char* temp;

	for (int i = 1; i < 10; i++)
	{
		cout << left(n, 1)<<endl;
		temp = left(trip, i);
		cout << temp << endl;
		delete[] temp;
	}
	return 0;
}
unsigned long left(unsigned long num, unsigned ct)
{
	unsigned digits = 1;
	unsigned long n = num;

	if (ct == 0 || num == 0)
		return 0;
	while (n /= 10)
		digits++;
	if (digits > ct)
	{
		ct = digits - ct;
		while (ct--)
			num /= 10;
		return num;
	}
	else
		return num;
}
char* left(const char* str, int n = 1)
{
	if (n < 0)
		n = 0;
	char* p = new char[n + 1];
	int i;
	for (i = 0; i < n && str[i]; i++)
		p[1] = str[i];
	while (i <= n)
		p[i++]='\0';
	return p;
}*/


/* funtemp 8-11 (520pg)
template <class Any>
void Swap(Any& a, Any& b);
int main()
{
	int i = 10;
	int j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "�����Ϸ��� ������ int�� ��ȯ�⸦ ����ϸ�\n";
	Swap(i, j);
	cout<< "���� i, j = " << i << ", " << j << ".\n";

	double x = 24.5;
	double y = 81.7;
	cout << "x, y = " << x << ", " << y << ".\n";
	cout << "�����Ϸ��� ������ double�� ��ȯ�⸦ ����ϸ�\n";
	Swap(x, y);
	cout << "���� x, y = " << x << ", " << y << ".\n";

	return 0;
}
template <class Any>
void Swap(Any& a, Any& b)
{
	int temp = a;
	a = b;
	b = temp;
}*/


/* twotemps 8-12 (522pg)
template<typename T>
void Swap(T &a, T &b);

template<typename T>
void Swap(T* a, T* b, int n);

void Show(int a[]);
const int Lim = 8;
int main()
{
	int i = 10;
	int j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "�����Ϸ��� ������ int�� ��ȯ�⸦ ����ϸ�\n";
	Swap(i, j);
	cout << "���� i, j = " << i << ", " << j << ".\n";

	int d1[Lim] = {0,7,0,4,1,7,7,6};
	int d2[Lim] = {0,6,2,0,1,9,6,9};
	cout << "���� �迭:\n";
	Show(d1);
	Show(d2);
	Swap(d1,d2,Lim);
	cout << "��ȯ�� �迭:\n";
	Show(d1);
	Show(d2);

	return 0;
}
template<typename T>
void Swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
template<typename T>
void Swap(T* a, T* b, int n)
{
	T temp;
	for (int i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}
void Show(int a[])
{
	cout << a[0] << a[1] << "/"
		 <<	a[2] << a[3] << "/";
	for (int i = 4; i < Lim; i++)
		cout << a[i];

	cout << endl;

}*/


/* twoswap 8-13 (528pg)
template<typename T>
void Swap(T& a, T& b);

struct job
{
	char name[40];
	double salary;
	int floor;
};

template <> void Swap<job>(job& j1, job& j2);
void Show(job& j);

int main()
{
	cout.precision(2);
	cout.setf(ios::fixed, ios::floatfield);
	int i = 10, j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "�����Ϸ��� ������ int�� ��ȯ�⸦ ����ϸ�\n";
	Swap(i, j);
	cout << "���� i, j = " << i << ", " << j << ".\n";

	job sue = { "Susan Yaffee", 73000.60,7 };
	job sidney = { "Sidney Taffee",78060.72,9 };
	cout << "job ��ȯ ��:\n";
	Show(sue);
	Show(sidney);
	Swap(sue, sidney);
	cout << "job ��ȯ ��:\n";
	Show(sue);
	Show(sidney);

	return 0;
}
template<typename T>
void Swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
template <> void Swap<job>(job& j1, job& j2)
{
	double t1;
	int t2;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;
	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}
void Show(job& j)
{
	cout << j.name << ": (" << j.floor << "���� ����) "
		<< "$" << j.salary << endl;
}*/


/* tempover 8-14 (539pg)
template<typename T>
void Showarray(T arr[], int n);

template<typename T>
void Showarray(T *arr[], int n);

struct debts
{
	char name[50];
	double amount;
};

int main()
{
	int things[6] = { 13,21,103,301,310,130 };
	struct debts mr_E[3] =
	{
		{"Ima Wolfe",2400.0},
		{"Ura Foxe",1300.0},
		{"Iby stout",1800.0}
	};
	double* pd[3];

	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;
	cout << "Mr. E�� ��� ���:\n";
	Showarray(things,6);
	cout << "Mr. E�� ä�� ���:\n";
	Showarray(pd,3);
	return 0;
}
template<typename T>
void Showarray(T arr[], int n)
{
	cout << "���ø� A\n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';
	cout << endl;
}
template<typename T>
void Showarray(T* arr[], int n)
{
	cout << "���ø� B\n";
	for (int i = 0; i < n; i++)
		cout << *arr[i] << ' ';
	cout << endl;
}*/


/* choices 8-15 (542pg)
template<class T>
T lesser(T a, T b)
{
	return a < b ? a : b;
}
int lesser(int a, int b)
{
	a = a < 0 ? -a : a;
	b= b < 0 ? -b : b;

	return a < b ? a : b;
}
int main()
{
	int m = 20;
	int n = -30;
	double x = 15.5, y = 25.9;

	cout << lesser(m, n) << endl;
	cout << lesser(x, y) << endl;
	cout << lesser<>(m, n) << endl;
	cout << lesser<int>(x, y) << endl;

	return 0;
}*/


//��������


/* 1��
void str(const char * s,int n);
int main()
{
	const char* sstr = "hello world";
	cout << "�ݺ� Ƚ���� �Է��� �ּ��� : ";
	int n;
	cin >> n;
	str(sstr,n);
}
void str(const char* s, int n)
{
	static int num = 0; //�ʱ�ȭ�� �ѹ��� �̷������ ����� ���Ŀ��� ���� ������ �ȴ�.
	if (num < n)
	{
		cout << s<<" ";
		num++;
		str(s, n);
	}
	if (num == n)
		num = 0;
}*/


/* 2��
void show(const char* str, double d, int n);
struct candybar
{
	const char* name;
	double weight;
	int kcal;
};
int main()
{
	candybar a;
	a = { "Millenninum Munch",2.85,350 };
	show(a.name, a.weight, a.kcal);
}
void show(const char* str, double d, int n)
{
	cout << "������ : " << str <<"\n"<< "�߷� : "
		 << d << "g\n" << "Į�θ� : " << n;
}*/


/* 3��
void change(const string& str);
int main()
{
	string s;
	while(s!="q" && s != "Q")
	{
		cout << "���ڿ��� �Է��Ͻÿ� (�������� q) : ";
		getline(cin,s);
		change(s);
	}
}
void change(const string& str)
{
	for (char c : str) //str�� ���ڵ��� c�� ���ʴ�� �Ҵ��Ѵ�.
	{
		if (c == 'q' || c=='Q')
		{
			cout << "���α׷��� �����մϴ�.";
			break;
		}
		else if (c == ' ')
			cout << ' ';
		else if (isupper(c)) //�빮��
			cout << (char)tolower(c);
		else if (islower(c))
			cout << (char)toupper(c);
	}
	cout << "\n\n";
}*/


/* 4��
struct stringy
{
	char* str;
	int ct;
};
void show(const char* str);
void show(const char* str, int n);
void set(stringy& str1, const char* str2);

int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	set(beany, testing);

	show(beany.str);
	show(beany.str, 2);
	testing[0] = 'D';
	testing[1] = 'U';
	show(testing);
	show(testing,3);
	show("DONE!");

	delete[] beany.str;

	return 0;
}
void show(const char* str)
{
	cout << str<<endl;
}
void show(const char* str, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << str << endl;
	}
}
void set(stringy& str1, const char* str2)
{
	str1.ct = strlen(str2); // ����: str1.ct �ʱ�ȭ
	str1.str = new char[str1.ct + 1]; // ����: ���ο� �޸� �Ҵ�
	strcpy_s(str1.str, str1.ct + 1, str2);
}*/


/* 5��
template<class T, size_t N>
T max(T(&arr1)[N]) //N�� �迭�� �����̴�.
{
	T max = arr1[0];
	for (int i = 0; i < N; i++)
	{
		if (max < arr1[i])
			max = arr1[i];
	}
	return max;
}
const int arsize = 5;
int main()
{
	int arr1[arsize] = {1,4,2,5,9};
	double arr2[arsize] = {1.1, 3.7, 9.8, 6.2, 8.7};
	auto int_max = max(arr1);
	auto double_max = max(arr2);
	cout << "int�� �迭�� ���� ū �� : " << int_max << endl << "double���� ���� ū �� : " << double_max;
	return 0;
}*/


/* 7��
template<typename T>
int Showarray(T arr[], int n);

template<typename T>
double Showarray(T* arr[], int n);

struct debts
{
	char name[50];
	double amount;
};

int main()
{
	int things[6] = { 13,21,103,301,310,130 };
	struct debts mr_E[3] =
	{
		{"Ima Wolfe",2400.0},
		{"Ura Foxe",1300.0},
		{"Iby stout",1800.0}
	};
	double* pd[3];

	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;
	cout << "Mr. E�� ��� ���:\n";
	int a = Showarray(things, 6);
	cout << a << endl;
	cout << "Mr. E�� ä�� ���:\n";
	double b = Showarray(pd, 3);
	cout << b << endl;
	return 0;
}
template<typename T>
int Showarray(T arr[], int n)
{
	int max = 0;
	cout << "���ø� A\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
		max += arr[i];
	}
	cout << endl;
	return max;
}
template<typename T>
double Showarray(T* arr[], int n)
{
	double add = 0;
	cout << "���ø� B\n";
	for (int i = 0; i < n; i++)
	{
		cout << *arr[i] << ' ';
		add += *arr[i];
	}
	cout << endl;
	return add;
}*/

