#include "main.h"




/*
//rvref.cpp 18-1 (1475pg)
inline double f(double tf) { return 5.0 * (tf - 32.0) / 9.0; }
int main()
{
	double tc = 21.5;
	double&& rd1 = 7.07;
	double&& rd2 = 1.8 * tc + 32.0;
	double&& rd3 = f(rd2);
	cout << "tc value and address: " << tc << ", " << &tc << endl;
	cout << "rd1 value and address: " << rd1 << ", " << &rd1 << endl;
	cout << "rd2 value and address: " << rd2 << ", " << &rd2 << endl;
	cout << "rd3 value and address: " << rd3 << ", " << &rd3 << endl;
	cin.get();
	return 0;
}*/



/*
//useless.cpp 18-2 (1478pg)
class Useless
{
private:
	int n;
	char* pc;
	static int ct;
	void showobject() const;
public:
	Useless();
	explicit Useless(int k);
	Useless(int k, char ch);
	Useless(const Useless& f);
	Useless(Useless&& f);
	~Useless();
	Useless operator+ (const Useless& f)const;
	void showData() const;
};

int Useless::ct = 0;

Useless::Useless()
{
	++ct;
	n = 0;
	pc = nullptr;
	cout << "�⺻ ������ ȣ��; ��ü ��: " << ct << endl;
	showobject();
}
explicit Useless::Useless(int k) : n(k)
{
	++ct;
	cout << "int ������ ȣ��; ��ü ��: " << ct << endl;
	pc = new char[n];
	showobject();
}
Useless::Useless(int k, char ch) : n(k)
{
	++ct;
	cout << "int, char ������ ȣ��; ��ü ��: " << ct << endl;
	pc = new char[n];
	for (int i = 0; i < n; i++)
		pc[i] = ch;
	showobject();
}
Useless::Useless(const Useless& f) : n(f.n)
{
	++ct;
	cout << "���� const ȣ��; ��ü ��: " << ct << endl;
	pc = new char[n];
	for (int i = 0; i < n; i++)
		pc[i] = f.pc[i];
	showobject();
}
Useless::Useless(Useless&& f) : n(f.n)
{
	++ct;
	cout << "�̵� ������ ȣ��; ��ü ��: " << ct << endl;
	pc = f.pc;
	f.pc = nullptr;
	f.n = 0;
	showobject();
}
Useless::~Useless()
{
	cout << "�Ҹ��� ȣ��; ���� ��ü: " << --ct << endl;
	cout << "������ ��ü: \n";
	showobject();
	delete[] pc;
}
Useless Useless::operator+ (const Useless& f)const
{
	cout << "������ +() ����\n";
	Useless temp = Useless(n + f.n);
	for (int i = 0; i < n; i++)
		temp.pc[i] = pc[i];
	for (int i = n; i < temp.n; i++)
		temp.pc[i] = f.pc[i - n];
	cout << "�ӽ� ��ü: \n";
	cout << "������ +() ����\n";
	return temp;
}
void Useless::showobject() const 
{
	cout << "�Ű����� ��: " << n;
	cout << "������ �ּ�: " << (void*)pc << endl;
}
void Useless::showData() const
{
	if (n == 0)
		cout << " (��ü ����)";
	else
		for (int i = 0; i < n; i++)
			cout << pc[i]; 
	cout << endl;
}
int main()
{
	{
		Useless one(10, 'x');
		Useless two = one;
		Useless three(20, 'o');
		Useless four(one + three);
		cout << "��ü one: ";
		one.showData();
		cout << "��ü two: ";
		two.showData();
		cout << "��ü three: ";
		three.showData();
		cout << "��ü four: ";
		four.showData();
	}
}*/



/*
//stdmove.cpp 18-3 (1489pg)
class Useless
{
private:
	int n;
	char* pc;
	static int ct;
	void showobject() const;
public:
	Useless();
	explicit Useless(int k);
	Useless(int k, char ch);
	Useless(const Useless& f);
	Useless(Useless&& f);
	~Useless();
	Useless operator= (const Useless& f);
	Useless operator+ (const Useless& f)const;
	void showData() const;
};

int Useless::ct = 0;

Useless::Useless()
{
	++ct;
	n = 0;
	pc = nullptr;
	cout << "�⺻ ������ ȣ��; ��ü ��: " << ct << endl;
	showobject();
}
explicit Useless::Useless(int k) : n(k)
{
	++ct;
	cout << "int ������ ȣ��; ��ü ��: " << ct << endl;
	pc = new char[n];
	showobject();
}
Useless::Useless(int k, char ch) : n(k)
{
	++ct;
	cout << "int, char ������ ȣ��; ��ü ��: " << ct << endl;
	pc = new char[n];
	for (int i = 0; i < n; i++)
		pc[i] = ch;
	showobject();
}
Useless::Useless(const Useless& f) : n(f.n)
{
	++ct;
	cout << "���� const ȣ��; ��ü ��: " << ct << endl;
	pc = new char[n];
	for (int i = 0; i < n; i++)
		pc[i] = f.pc[i];
	showobject();
}
Useless::Useless(Useless&& f) : n(f.n)
{
	++ct;
	cout << "�̵� ������ ȣ��; ��ü ��: " << ct << endl;
	pc = f.pc;
	f.pc = nullptr;
	f.n = 0;
	showobject();
}
Useless::~Useless()
{
	cout << "�Ҹ��� ȣ��; ���� ��ü: " << --ct << endl;
	cout << "������ ��ü: \n";
	showobject();
	delete[] pc;
}
Useless Useless::operator= (const Useless& f)
{
	cout << "���� ���� ������ ȣ��:\n";
	if (this == &f)
		return *this;
	delete[] pc;
	n = f.n;
	pc = new char[n];
	for (int i = 0; i < n; i++)
		pc[n] = f.pc[i];
	return *this;
}
Useless Useless::operator+ (const Useless& f)const
{
	cout << "������ +() ����\n";
	Useless temp = Useless(n + f.n);
	for (int i = 0; i < n; i++)
		temp.pc[i] = pc[i];
	for (int i = n; i < temp.n; i++)
		temp.pc[i] = f.pc[i - n];
	cout << "�ӽ� ��ü: \n";
	cout << "������ +() ����\n";
	return temp;
}
void Useless::showobject() const
{
	cout << "�Ű����� ��: " << n;
	cout << "������ �ּ�: " << (void*)pc << endl;
}
void Useless::showData() const
{
	if (n == 0)
		cout << " (��ü ����)";
	else
		for (int i = 0; i < n; i++)
			cout << pc[i];
	cout << endl;
}
int main()
{
	{
		Useless one(10, 'x');
		Useless two = one +one;
		cout << "��ü one: ";
		one.showData();
		cout << "��ü two: ";
		two.showData();
		Useless three, four;
		cout << "three = one\n";
		three = one;
		cout << "���� ��ü three: ";
		three.showData();
		cout << "�׸��� ��ü one = ";
		one.showData();
		cout << "four = one + two\n";
		four = one + two;
		cout << "���� ��ü four: ";
		four.showData();
		cout << "four = move(one)\n";
		four = move(one);
		cout << "���� ��ü four: ";
		four.showData();
		cout << "�׸��� ��ü one: ";
		one.showData();
	}
}*/



/*
//lambda0.cpp 18-4 (1504pg)
const long Size1 = 39L;
const long Size2 = 100*Size1;
const long Size3 = 100*Size2;
bool f3(int x) { return x % 3 == 0; }
bool f13(int x) { return x % 13 == 0; }

int main()
{
	vector<int>numbers(Size1);
	srand(time(0));
	generate(numbers.begin(), numbers.end(), rand);
	cout << "���� ũ�� = " << Size1 << '\n';
	int count3 = count_if(numbers.begin(), numbers.end(), f3);
	cout << "3���� �������� �� �ִ� ����: " << count3 << '\n';
	int count13 = count_if(numbers.begin(), numbers.end(), f13);
	cout << "13���� �������� �� �ִ� ����: " << count3 << '\n';

	numbers.resize(Size2);
	generate(numbers.begin(), numbers.end(), rand);
	cout << "sample size = " << Size2 << '\n';

	class f_mode
	{
	private:
		int dv;
	public:
		f_mode(int d=1) : dv(d) {}
		bool operator() (int x) { return x % dv == 0; }
	};
	count3 = count_if(numbers.begin(), numbers.end(), f_mode(3));
	cout << "3���� �������� �� �ִ� ����: " << count3 << '\n';
	count13 = count_if(numbers.begin(), numbers.end(), f_mode(13));
	cout << "13���� �������� �� �ִ� ����: " << count3 << '\n';

	numbers.resize(Size3);
	generate(numbers.begin(), numbers.end(), rand);
	cout << "sample size = " << Size3 << '\n';

	count3 = count_if(numbers.begin(), numbers.end(), [](int x) {return x % 3 == 0; });
	cout << "3���� �������� �� �ִ� ����: " << count3 << '\n';
	count13 = count_if(numbers.begin(), numbers.end(), [](int x) {return x % 13 == 0; });
	cout << "13���� �������� �� �ִ� ����: " << count3 << '\n';
}*/



/*
//lambda1.cpp 18-5 (1508pg)
const int Size = 390000L;

int main()
{
	vector<int> numbers(Size);
	srand(time(0));
	generate(numbers.begin(), numbers.end(), rand);
	cout << "sample size = " << Size << '\n';

	int count3 = count_if(numbers.begin(), numbers.end(), [](int x) {return x % 3 == 0; });
	cout << "3���� �������� �� �ִ� ����: " << count3 << '\n';
	int count13 = 0;
	for_each(numbers.begin(), numbers.end(), [count13](int x) {return x % 13 == 0; });
	cout << "13���� �������� �� �ִ� ����: " << count13 << '\n';
	count3 = count13 = 0;
	for_each(numbers.begin(), numbers.end(), [&](int x) {count3 += x % 3 == 0; count13 += x % 13 == 0; });
	cout << "3���� �������� �� �ִ� ����: " << count3 << '\n';
	cout << "13���� �������� �� �ִ� ����: " << count13 << '\n';

	return 0;
}*/



/*
//somedefs. 18-6 (1511pg)
template<class T, class F >
T use_f(T v, F f)
{
	static int count = 0;
	count++;
	cout << " ues_f count = " << count
		<< ", &count = " << &count << endl;
	return f(v);
}
class Fp
{
private:
	double z_;
public:
	Fp(double z= 1.0) : z_(z) {}
	double operator() (double p) { return z_ * p; }
};
class Fq
{
private:
	double z_;
public:
	Fq(double z = 1.0) : z_(z) {}
	double operator() (double q) { return z_ + q; }
};
//callable.cpp 17-7 (1512pg)
double dub(double x) { return 2.0 * x; }
double square(double x) { return x * x; }

int main()
{
	double y = 1.21;
	cout << "�Լ� ������ dub:\n";
	cout << " " << use_f(y, dub) << endl;
	cout << "�Լ� ������ square:\n";
	cout << " " << use_f(y, square) << endl;
	cout << "�Լ� ������ Fp:\n";
	cout << " " << use_f(y, Fp(5.0)) << endl;
	cout << "�Լ� ������ Fq:\n";
	cout << " " << use_f(y, Fq(5.0)) << endl;
	cout << "���� ǥ���� 1: \n";
	cout << " " << use_f(y, [](double u) {return u * u; }) << endl;
	cout << "���� ǥ���� 2: \n";
	cout << " " << use_f(y, [](double u) {return u * u/2.0; }) << endl;
}*/




/*
//wrapped.cpp 18-8 (1514pg)
template<class T, class F >
T use_f(T v, F f)
{
	static int count = 0;
	count++;
	cout << " ues_f count = " << count
		<< ", &count = " << &count << endl;
	return f(v);
}
class Fp
{
private:
	double z_;
public:
	Fp(double z = 1.0) : z_(z) {}
	double operator() (double p) { return z_ * p; }
};
class Fq
{
private:
	double z_;
public:
	Fq(double z = 1.0) : z_(z) {}
	double operator() (double q) { return z_ + q; }
};
double dub(double x) { return 2.0 * x; }
double square(double x) { return x * x; }

int main()
{
	double y = 1.21;
	function<double(double)>ef1 = dub;
	function<double(double)>ef2 = square;
	function<double(double)>ef3 = Fp(10.0);
	function<double(double)>ef4 = Fq(10.0);
	function<double(double)>ef5 = [](double u) {return u * u; };
	function<double(double)>ef6 = [](double u) {return u * u / 2.0; };
	cout << "�Լ� ������ dub:\n";
	cout << " " << use_f(y, ef1) << endl;
	cout << "�Լ� ������ square:\n";
	cout << " " << use_f(y, ef2) << endl;
	cout << "�Լ� ������ Fp:\n";
	cout << " " << use_f(y, ef3) << endl;
	cout << "�Լ� ������ Fq:\n";
	cout << " " << use_f(y, ef4) << endl;
	cout << "���� ǥ���� 1:\n";
	cout << " " << use_f(y, ef5) << endl;
	cout << "���� ǥ���� 2:\n";
	cout << " " << use_f(y, ef6) << endl;

	return 0;
}*/



/*
//variadic1.cpp 18-9 (1521pg)
void show_list3() {}

template<class T, class... Args>
void show_list3(T value, Args... args)
{
	cout << value << ", ";
	show_list3(args...);
}
int main()
{
	int n = 14;
	double x = 2.71828;
	string mr = "Mr string objects!";
	show_list3(n, x);
	show_list3(x * x, '!', 7, mr);

	return 0;
}*/




/*
//variadic2.cpp 18-10 (1523pg)
void show_list() {}

template<class T>
void show_list(const T& value)
{
	cout << value << '\n';
}

template<class T, class... Args>
void show_list(T value, Args... args)
{
	cout << value << ", ";
	show_list3(args...);
}
int main()
{
	int n = 14;
	double x = 2.71828;
	string mr = "Mr string objects!";
	show_list(n, x);
	show_list(x * x, '!', 7, mr);

	return 0;
}*/
