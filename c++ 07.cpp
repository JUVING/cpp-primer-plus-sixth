#include "main.h"


/* calling 7-1 (374pg)
void simple();
int main()
{
	cout << "main 함수에서 siml\ple 함수를 호출한다.\n";
	simple();

	return 0;
}
void simple()
{
	cout << "여기는 simple 함수 입니다.\n";
}*/

/* protos 7-2 (378pg)
void cheers(int);
double cube(double x);
int main()
{
	cheers(5);
	cout << "하나의 수를 입력하시오 : ";
	double side;
	cin >> side;
	double volume = cube(side);
	cout << "한 변의 길이가 " << side << "센티미터인 정육면체의 부피는 ";
	cout << volume << "세제곱센티미터입니다.\n";
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

	cout << "문자 하나를 입력하시오 : ";
	cin >> ch;
	while (ch != 'q')
	{
		cout << "정수 하나를 입력하시오 : ";
		cin >> times;
		n_chars(ch, times);
		cout << "\n계속하려면 다른 문자를 입력하고, 끝내려면 q를 누르십시오 : ";
		cin >> ch;
	}
	cout << "현재 times의 값은 " << times << "입니다.\n";
	cout << "프로그램을 종료합니다.";

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
	cout << "전체 수의 개수와 뽑을 수의 개수를 입력하십시오\n";
	while ((cin >> total >> choices) && choices <= total)
	{
		cout << "당신이 이길 확률은 ";
		cout << probability(total, choices);
		cout << "번 중에 한 번입니다.\n";
		cout << "다시 두 수를 입력하십시오. (끝내려면 q)";
	}
	cout << "프로그램을 종료합니다.\n";

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
	cout << "먹은 과자의 수 " << sum << endl;

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
	cout << cookies << " = 배열의 주소, ";

	cout << "sizeof cookies = " << sizeof cookies << endl;
	int sum = sum_arr(cookies, arsize);

	cout << "먹은 과자의 수 " << sum << endl;
	sum = sum_arr(cookies, 3);
	cout << "처음 세 사람은 과자 " << sum << "개를 먹었습니다.\n";
	sum = sum_arr(cookies+4, 4);
	cout<<"마지막 네 사람은 과자"<<sum << "개를 먹었습니다.\n";

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
		cout << "재평가율울 압력하시오 : ";
		double factor;
		while(!(cin>>factor))
		{
		while (cin.get() != '\n')
			continue;
		cout << "잘 못 입력했습니다. 다시 입력하시오 : ";
		}
		revalue(factor,properties,size);
		show_array(properties, size);
	}
	cout << "프로그램을 종료합니다.\n";
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
		cout << i + 1 << "번 부동산의 가격 : $";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "입력 불량; 입력 과정을 끝내겠습니다.\n";
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
		cout << i + 1 << "번 부동산의 가격 : $";
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

	cout << "먹은 과자의 수 " << sum << endl;
	sum = sum_arr(cookies, cookies+3);
	cout << "처음 세 사람은 과자 " << sum << "개를 먹었습니다.\n";
	sum = sum_arr(cookies + 4, cookies+8);
	cout << "마지막 네 사람은 과자" << sum << "개를 먹었습니다.\n";

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
	cout << mmm << "에는 m이 " << ms << "개 들어 있습니다.\n";
	cout << wail << "에는 u이 " << us << "개 들어 있습니다.\n";
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

	cout << "문자 하나를 입력하십시오 : ";
	cin >> ch;
	cout << "정수 하나를 입력하십시오 : ";
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
	cout << "이틀간 소요시간 : ";
	show_time(trip);

	travel_time day3 = { 4,32 };
	cout << "사흘간 소요시간 : ";
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
	cout << t.hours << "시간 " << t.mins << "분 \n";
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

	cout << "x값과 y값을 입력하시오 : ";
	while (cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "x값과 y값을 입력하시오 (꿑내려면 q를 입력하시오) : ";
	}
	cout << "프로그램을 종료합니다.\n";
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

	cout << "거리 = " << dapos.distance;
	cout << ", 각도 = " << dapos.angle * rad_to_deg;
	cout << "도 \n";
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

	cout << "x값과 y값을 입력하시오 : ";
	while (cin >> rplace.x >> rplace.y)
	{
		rect_to_polar(&rplace,&pplace);
		show_polar(&pplace);
		cout << "x값과 y값을 입력하시오 (꿑내려면 q를 입력하시오) : ";
	}
	cout << "프로그램을 종료합니다.\n";
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

	cout << "거리 = " << pda->distance;
	cout << ", 각도 = " << pda->angle * rad_to_deg;
	cout << "도 \n";
}*/


/* topfive 7-14 (433pg)
const int Size = 5;
void display(const string sa[], int n);
int main()
{
	string list[Size];
	cout << "좋아하는 밤하늘의 광경울 " << Size << "개 입력하십시오:\n";
	for (int i = 0; i < Size; i++)
	{
		cout << i + 1 << ": ";
		getline(cin, list[i]);
	}
	cout << "입력하신 내용은 다음과 같습니다.:\n";
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
		cout << sname[i] << "에 소요되는 비용:";
		cin >> (*pa)[i];
	}
}
void show(array<double, seasons> da)
{
	double total = 0.0;
	cout << "\n게절별 비용 \n";
	for (int i = 0; i < seasons; i++)
	{
		cout << sname[i] << ": $" << da[i] << endl;
		total += da[i];
	}
	cout << "총 비용 : $" << total << endl;
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
	cout << "카운트 다운... " << n << endl;
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

	cout << "필요한 코드의 행 수를 입력하십시오: ";
	cin >> code;
	cout << "홍길동의 시간 예상: \n";
	estimate(code,gildong);
	cout << "박문수의 시간 예상: \n";
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
	cout << lines << "행을 작성하는 데 ";
	cout << (*pf)(lines) << "시간이 걸립니다.\n";
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
	cout << "함수 포인터:\n";
	cout << "주소 값\n";
	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
	cout << p2(av, 3) << ": " << *p2(av, 3) << endl;

	const double* (*pa[3])(const double*, int) = { f1,f2,f3 };
	auto pb = pa;
	cout << "\n함수 포인터를 원소로 가지는 배열:\n";
	cout << "주소 값\n";
	for (int i = 0; i < 3; i++)
		cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
	cout << "\n함수 포인터를 가리키는 포인터:\n";
	cout << "주소 값\n";

	for (int i = 0; i < 3; i++)
		cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;

	cout << "\n포인터를 원소로 가지는 배열을 가리키는 포인터: \n";
	cout << "주소 값\n";

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

//연습문제


/* 1번
void average(double n,double m);
int main()
{
	int a, b;
	cout << "조화 평균 구하기\n";

	do
	{
		cout <<"정수 두 개를 입력해 주세요\n"<<">>> ";
		cin >> a >> b;
		average(a, b);

	} while (a != 0 && b != 0);
	return 0;
}
void average(double n, double m)
{
	if (n != 0 && m != 0)
		cout << "프로그램을 종료합니다.";
	else if (n == 0 && m == 0)
		cout << "조화 평균 : " << 2.0 * n * m / (n + m)<<endl;
}*/

/* 2번
const int arsize = 10;
int main()
{
	cout << "골프 평균 점수 계산 프로그램\n";
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
	cout << "입력 받은 스코어 : ";
	for (int i = 0; i < count; i++)
	{
		cout << input[i] << ", ";
	}
	average = output / count;
	cout << "\n평균 : " << average;

	return 0;
}*/


/* 3번
struct box {
	char maker[40];
	float height; //높이
	float width; //너비
	float length;//길이
	float volume;
};
const int arsize = 2;
int main()
{
	box a[arsize];
	for (int i = 0; i < arsize; i++)
	{
		cout << i + 1 << "번 박스";
		cout << "제조사 입력해 주세요\n" << ">>> ";
		cin >> a[i].maker;
		cout << "높이, 너비, 길이 순으로 입력해 주세요\n" << ">>> ";
		cin >> a[i].height >> a[i].width >> a[i].length;
		a[i].volume = a[i].height * a[i].width * a[i].length;
		cout << "\n\n";
	}

	for (int i = 0; i < arsize; i++)
	{
		cout << i + 1 << "번 박스";
		cout << "제조사 : " << a[i].maker<<endl;
		cout << "높이 : "<< a[i].height <<" | 너비 : "<< a[i].width<< " | 길이 : "
			 << a[i].length<<" | 부피 : "<< a[i].volume<<endl<<endl;
	}

	return 0;
}*/


/* 4번 XXX
long double probability(unsigned numbers, unsigned picks);
int main()
{
	double total, choices;
	cout << "전체 수의 개수와 뽑을 수의 개수를 입력하십시오\n";
	while ((cin >> total >> choices) && choices <= total)
	{
		cout << "당신이 이길 확률은 ";
		cout << probability(total, choices);
		cout << "번 중에 한 번입니다.\n";
		cout << "다시 두 수를 입력하십시오. (끝내려면 q)";
	}
	cout << "프로그램을 종료합니다.\n";

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
	5번
*/

