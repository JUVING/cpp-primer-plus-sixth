#include "main.h"


/* calling 7-1 (374pg)
void simple();
int main()
{
	cout << "main �Լ����� siml\ple �Լ��� ȣ���Ѵ�.\n";
	simple();

	return 0;
}
void simple()
{
	cout << "����� simple �Լ� �Դϴ�.\n";
}*/

/* protos 7-2 (378pg)
void cheers(int);
double cube(double x);
int main()
{
	cheers(5);
	cout << "�ϳ��� ���� �Է��Ͻÿ� : ";
	double side;
	cin >> side;
	double volume = cube(side);
	cout << "�� ���� ���̰� " << side << "��Ƽ������ ������ü�� ���Ǵ� ";
	cout << volume << "��������Ƽ�����Դϴ�.\n";
	cheers(cube(2));

	return 0;
}
void cheers(int n)
{
	for (int i = 0; i < n; i++)
		cout << "cheers! ";
	cout << endl;
}
double cube(double x)
{
	return x * x * x;
}*/

/* twoarg 7-3 (386pg)
void n_chars(char, int);
int main()
{
	int times;
	char ch;

	cout << "���� �ϳ��� �Է��Ͻÿ� : ";
	cin >> ch;
	while (ch != 'q')
	{
		cout << "���� �ϳ��� �Է��Ͻÿ� : ";
		cin >> times;
		n_chars(ch, times);
		cout << "\n����Ϸ��� �ٸ� ���ڸ� �Է��ϰ�, �������� q�� �����ʽÿ� : ";
		cin >> ch;
	}
	cout << "���� times�� ���� " << times << "�Դϴ�.\n";
	cout << "���α׷��� �����մϴ�.";

	return 0;
}
void n_chars(char c, int n)
{
	while (n-- > 0)
		cout << c;
}*/

/* lotto 7-4 (389pg)
long double probability(unsigned numbers, unsigned picks);
int main()
{
	double total, choices;
	cout << "��ü ���� ������ ���� ���� ������ �Է��Ͻʽÿ�\n";
	while ((cin >> total >> choices) && choices <= total)
	{
		cout << "����� �̱� Ȯ���� ";
		cout << probability(total, choices);
		cout << "�� �߿� �� ���Դϴ�.\n";
		cout << "�ٽ� �� ���� �Է��Ͻʽÿ�. (�������� q)";
	}
	cout << "���α׷��� �����մϴ�.\n";

	return 0;
}
long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;

	return result;
}*/

/* arrfun1 7-5 (392pg)
const int arsize = 8;
int sum_arr(int arr[], int n);
int main()
{
	int cookies[arsize] = { 1,2,4,8,16,32,64,128 };
	int sum = sum_arr(cookies,arsize);
	cout << "���� ������ �� " << sum << endl;

	return 0;
}
int sum_arr(int arr[], int n)
{
	int total = 0;

	for (int i = 0; i < n; i++)
		total += arr[i];

	return total;
}*/

/* arrfun2 7-6 (395pg)
const int arsize = 8;
int sum_arr(int arr[], int n);
int main()
{
	int cookies[arsize] = { 1,2,4,8,16,32,64,128 };
	cout << cookies << " = �迭�� �ּ�, ";

	cout << "sizeof cookies = " << sizeof cookies << endl;
	int sum = sum_arr(cookies, arsize);

	cout << "���� ������ �� " << sum << endl;
	sum = sum_arr(cookies, 3);
	cout << "ó�� �� ����� ���� " << sum << "���� �Ծ����ϴ�.\n";
	sum = sum_arr(cookies+4, 4);
	cout<<"������ �� ����� ����"<<sum << "���� �Ծ����ϴ�.\n";

	return 0;
}
int sum_arr(int arr[], int n)
{
	int total = 0;
	cout << arr << " = arr, ";
	cout << "sizeof arr = " << sizeof arr << endl;

	for (int i = 0; i < n; i++)
		total += arr[i];

	return total;
}*/

/* arrfun3 7-7 (401pg)
const int Max = 5;
int fill_array(double ar[], int limit);
void show_array(double ar[], int n);
void revalue(double r, double ar[], int n);
int main()
{
	double properties[Max];
	int size = fill_array(properties, Max);
	show_array(properties, size);

	if (size > 0)
	{
		cout << "�������� �з��Ͻÿ� : ";
		double factor;
		while(!(cin>>factor))
		{
		while (cin.get() != '\n')
			continue;
		cout << "�� �� �Է��߽��ϴ�. �ٽ� �Է��Ͻÿ� : ";
		}
		revalue(factor,properties,size);
		show_array(properties, size);
	}
	cout << "���α׷��� �����մϴ�.\n";
	cin.get();
	cin.get();
	return 0;
}
int fill_array(double ar[], int limit)
{
	double temp;
	int i;
	for (i = 0; i < limit; i++)
	{
		cout << i + 1 << "�� �ε����� ���� : $";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "�Է� �ҷ�; �Է� ������ �����ڽ��ϴ�.\n";
			break;
		}
		else if (temp < 0)
			break;
		ar[i] = temp;
	}
	return i;
}
void show_array(double ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "�� �ε����� ���� : $";
		cout << ar[i] << endl;
	}
}
void revalue(double r, double ar[], int n)
{
	for (int i = 0; i < n; i++)
		ar[i] *= r;
}*/

/* arrfun4 7-8 (406pg)
const int arsize = 8;
int sum_arr(const int* begine, const int* end);
int main()
{
	int cookies[arsize] = { 1,2,4,8,16,32,64,128 };

	int sum = sum_arr(cookies, cookies+arsize);

	cout << "���� ������ �� " << sum << endl;
	sum = sum_arr(cookies, cookies+3);
	cout << "ó�� �� ����� ���� " << sum << "���� �Ծ����ϴ�.\n";
	sum = sum_arr(cookies + 4, cookies+8);
	cout << "������ �� ����� ����" << sum << "���� �Ծ����ϴ�.\n";

	return 0;
}
int sum_arr(const int * begine, const int * end)
{
	const int * pt;
	int total = 0;

	for (pt = begin; pt != end; pt++)
		total += *pt;

	return total;
}*/

/* strgfun 7-9 (416pg)
unsigned c_int_str(const char* str, char ch);
int main()
{
	char mmm[15] = "minimum";
	char *wail = "ululate";

	unsigned int ms = c_int_str(mmm, 'm');
	unsigned int us = c_int_str(wail, 'u');
	cout << mmm << "���� m�� " << ms << "�� ��� �ֽ��ϴ�.\n";
	cout << wail << "���� u�� " << us << "�� ��� �ֽ��ϴ�.\n";
	return 0;
}
unsigned c_int_str(const char* str, char ch)
{
	int count = 0;
	while (*str)
	{
		if (*str == ch)
			count++;
		str++;
	}
	return count;
}*/


/* strgback 7-10 (418pg)
char* buildstr(char c, int n);
int main()
{
	int times;
	char ch;

	cout << "���� �ϳ��� �Է��Ͻʽÿ� : ";
	cin >> ch;
	cout << "���� �ϳ��� �Է��Ͻʽÿ� : ";
	cin >> times;
	char* ps = buildstr(ch, times);
	cout << ps << endl;
	delete[] ps;
	ps = buildstr('+', 20);
	cout << ps << "-DONE-" << ps << endl;
	delete[] ps;

	return 0;
}
char* buildstr(char c, int n)
{
	char* pstr = new char [n + 1];
	pstr[n] = '\0';
	while (n-- > 0)
		pstr[n] = 'c';
	return pstr;
}*/

/* travel 7-11 (422pg)
struct travel_time
{
	int hours;
	int mins;
};
const int Mins_per_hr = 60;

travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);
int main()
{
	travel_time day1{ 5, 45 };
	travel_time day2{ 4,55 };

	travel_time trip = sum(day1, day2);
	cout << "��Ʋ�� �ҿ�ð� : ";
	show_time(trip);

	travel_time day3 = { 4,32 };
	cout << "���갣 �ҿ�ð� : ";
	show_time(sum(trip, day3));

	return 0;
}
travel_time sum(travel_time t1, travel_time t2)
{
	travel_time total;

	total.mins = (t1.mins + t2.mins) % Mins_per_hr;
	total.hours = t1.hours+t2.hours+ (t1.mins + t2.mins) / Mins_per_hr;

	return total;
}
void show_time(travel_time t)
{
	cout << t.hours << "�ð� " << t.mins << "�� \n";
}*/

/* strctfun 7-12 (426pg)
struct polar
{
	double distance;
	double angle;
};
struct rect
{
	double x, y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main()
{
	rect rplace;
	polar pplace;

	cout << "x���� y���� �Է��Ͻÿ� : ";
	while (cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "x���� y���� �Է��Ͻÿ� (�L������ q�� �Է��Ͻÿ�) : ";
	}
	cout << "���α׷��� �����մϴ�.\n";
}
polar rect_to_polar(rect xypos)
{
	polar answer;

	answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);
	return answer;
}
void show_polar(polar dapos)
{
	const double rad_to_deg = 57.29577951;

	cout << "�Ÿ� = " << dapos.distance;
	cout << ", ���� = " << dapos.angle * rad_to_deg;
	cout << "�� \n";
}*/

/* strctptr 7-13 (430pg)
struct polar
{
	double distance;
	double angle;
};
struct rect
{
	double x, y;
};
void rect_to_polar(const rect * pxy, polar * pda);
void show_polar(const polar * pda);

int main()
{
	rect rplace;
	polar pplace;

	cout << "x���� y���� �Է��Ͻÿ� : ";
	while (cin >> rplace.x >> rplace.y)
	{
		rect_to_polar(&rplace,&pplace);
		show_polar(&pplace);
		cout << "x���� y���� �Է��Ͻÿ� (�L������ q�� �Է��Ͻÿ�) : ";
	}
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}
void rect_to_polar(const rect* pxy, polar* pda)
{
	polar answer;
	pda->distance =  sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
	pda->angle = atan2(pxy->y, pxy->x);
}
void show_polar(const polar* pda)
{
	const double rad_to_deg = 57.29577951;

	cout << "�Ÿ� = " << pda->distance;
	cout << ", ���� = " << pda->angle * rad_to_deg;
	cout << "�� \n";
}*/


/* topfive 7-14 (433pg)
const int Size = 5;
void display(const string sa[], int n);
int main()
{
	string list[Size];
	cout << "�����ϴ� ���ϴ��� ����� " << Size << "�� �Է��Ͻʽÿ�:\n";
	for (int i = 0; i < Size; i++)
	{
		cout << i + 1 << ": ";
		getline(cin, list[i]);
	}
	cout << "�Է��Ͻ� ������ ������ �����ϴ�.:\n";
	display(list,Size);

	return 0;
}
void display(const string sa[], int n)
{
	for (int i = 0; i < n; i++)
		cout << i + 1 << ": " << sa[i] << endl;
}*/


/* arrobj 7-15 (435pg)
const int seasons = 4;
const array<string, seasons>sname =
{ "sprong", "summer", "fall", "winter" };

void fill(array<double, seasons>* pa);
void show(array<double, seasons> da);

int main()
{
	array<double, seasons> expenses;
	fill(&expenses);
	show(expenses);
	return 0;
}
void fill(array<double, seasons>* pa)
{
	for (int i = 0; i < seasons; i++)
	{
		cout << sname[i] << "�� �ҿ�Ǵ� ���:";
		cin >> (*pa)[i];
	}
}
void show(array<double, seasons> da)
{
	double total = 0.0;
	cout << "\n������ ��� \n";
	for (int i = 0; i < seasons; i++)
	{
		cout << sname[i] << ": $" << da[i] << endl;
		total += da[i];
	}
	cout << "�� ��� : $" << total << endl;
}*/


/* recur 7-16 (439pg)
void cooldown(int n);
int main()
{
	cooldown(4);
	return 0;
}
void cooldown(int n)
{
	cout << "ī��Ʈ �ٿ�... " << n << endl;
	if (n > 0)
		cooldown(n - 1);
	cout << n << ": Kaboom! \n";
}*/


/* ruler 7-17 (441pg)
const int Len = 66;
const int Divs = 6;
void subdivide(char ar[],int low,int hight,int level);
int main()
{
	char ruler[Len];
	int i;
	for (i = 1; i < Len - 2; i++)
		ruler[i] = ' ';
	ruler[Len - 1] = '\0';
	int max = Len - 2;
	int min = 0;
	ruler[min] = ruler[max] = '|';
	cout << ruler << endl;
	for (i = 1; i <= Divs; i++)
	{
		subdivide(ruler,min,max,i);
		cout << ruler << endl;
		for (int j = 1; j, Len - 2; j++)
			ruler[j] = ' ';
	}
	return 0;
}
void subdivide(char ar[], int low, int hight, int level)
{
	if (level == 0)
		return;
	int mid = (hight + low) / 2;
	ar[mid] = '|';
	subdivide(ar, low, mid, level - 1);
	subdivide(ar, low, mid, level - 1);
}*/


/* fun_ptr 7-18 (446pg)
double gildong(int);
double moonsoo(int);
void estimate(int lines, double (*pf)(int));

int main()
{
	int code;

	cout << "�ʿ��� �ڵ��� �� ���� �Է��Ͻʽÿ�: ";
	cin >> code;
	cout << "ȫ�浿�� �ð� ����: \n";
	estimate(code,gildong);
	cout << "�ڹ����� �ð� ����: \n";
	estimate(code, moonsoo);
	return 0;
}
double gildong(int lns)
{
	return 0.05 * lns;
}
double moonsoo(int lns)
{
	return 0.03 * lns + 0.0004 * lns * lns;
}
void estimate(int lines, double (*pf)(int))
{
	cout << lines << "���� �ۼ��ϴ� �� ";
	cout << (*pf)(lines) << "�ð��� �ɸ��ϴ�.\n";
}*/


/* arfupt 7-19 (451pg)
const double* f1(const double ar[],int n);
const double* f2(const double [], int);
const double* f3(const double *, int);
int main()
{
	double av[3] = { 1112.3, 1542.6, 2227.9 };
	const double* (*p1) (const double*, int) = f1;
	auto p2 = f2;
	cout << "�Լ� ������:\n";
	cout << "�ּ� ��\n";
	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
	cout << p2(av, 3) << ": " << *p2(av, 3) << endl;

	const double* (*pa[3])(const double*, int) = { f1,f2,f3 };
	auto pb = pa;
	cout << "\n�Լ� �����͸� ���ҷ� ������ �迭:\n";
	cout << "�ּ� ��\n";
	for (int i = 0; i < 3; i++)
		cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
	cout << "\n�Լ� �����͸� ����Ű�� ������:\n";
	cout << "�ּ� ��\n";

	for (int i = 0; i < 3; i++)
		cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;

	cout << "\n�����͸� ���ҷ� ������ �迭�� ����Ű�� ������: \n";
	cout << "�ּ� ��\n";

	auto pc = &pa;
	cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
	const double* (*(*pd)[3])(const double*, int) = &pa;
	const double* pdb = (*pd)[1](av, 3);
	cout << pdb << ": " << *pdb << endl;
	cout << (*(pd)[2])(av, 3) << ": " << *(*(pd)[2])(av, 3) << endl;

	return 0;
}
const double* f1(const double * ar, int n)
{
	return ar;
}
const double* f2(const double ar[], int n)
{
	return ar+1;
}
const double* f3(const double ar[], int n)
{
	return ar+2;
}*/

//��������


/* 1��
void average(double n,double m);
int main()
{
	int a, b;
	cout << "��ȭ ��� ���ϱ�\n";

	do
	{
		cout <<"���� �� ���� �Է��� �ּ���\n"<<">>> ";
		cin >> a >> b;
		average(a, b);

	} while (a != 0 && b != 0);
	return 0;
}
void average(double n, double m)
{
	if (n != 0 && m != 0)
		cout << "���α׷��� �����մϴ�.";
	else if (n == 0 && m == 0)
		cout << "��ȭ ��� : " << 2.0 * n * m / (n + m)<<endl;
}*/

/* 2��
const int arsize = 10;
int main()
{
	cout << "���� ��� ���� ��� ���α׷�\n";
	int input[arsize],count=0;
	double average, output=0.0;

	while (count != 10)
	{
		cout <<count+1<< ". >>> ";
		cin >> input[count];
		if (input[count] == 0)
			break;
		output += input[count];
		count++;
	}
	cout << "�Է� ���� ���ھ� : ";
	for (int i = 0; i < count; i++)
	{
		cout << input[i] << ", ";
	}
	average = output / count;
	cout << "\n��� : " << average;

	return 0;
}*/


/* 3��
struct box {
	char maker[40];
	float height; //����
	float width; //�ʺ�
	float length;//����
	float volume;
};
const int arsize = 2;
int main()
{
	box a[arsize];
	for (int i = 0; i < arsize; i++)
	{
		cout << i + 1 << "�� �ڽ�";
		cout << "������ �Է��� �ּ���\n" << ">>> ";
		cin >> a[i].maker;
		cout << "����, �ʺ�, ���� ������ �Է��� �ּ���\n" << ">>> ";
		cin >> a[i].height >> a[i].width >> a[i].length;
		a[i].volume = a[i].height * a[i].width * a[i].length;
		cout << "\n\n";
	}

	for (int i = 0; i < arsize; i++)
	{
		cout << i + 1 << "�� �ڽ�";
		cout << "������ : " << a[i].maker<<endl;
		cout << "���� : "<< a[i].height <<" | �ʺ� : "<< a[i].width<< " | ���� : "
			 << a[i].length<<" | ���� : "<< a[i].volume<<endl<<endl;
	}

	return 0;
}*/


/* 4�� XXX
long double probability(unsigned numbers, unsigned picks);
int main()
{
	double total, choices;
	cout << "��ü ���� ������ ���� ���� ������ �Է��Ͻʽÿ�\n";
	while ((cin >> total >> choices) && choices <= total)
	{
		cout << "����� �̱� Ȯ���� ";
		cout << probability(total, choices);
		cout << "�� �߿� �� ���Դϴ�.\n";
		cout << "�ٽ� �� ���� �Է��Ͻʽÿ�. (�������� q)";
	}
	cout << "���α׷��� �����մϴ�.\n";

	return 0;
}
long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;

	return result;
}*/



/*
	5��
*/

