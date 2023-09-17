#include "main.h"




/* limits 3-1 (77pg)
int main()
{
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	//sizeof 연산자는 데이터형이나 변수의 크기를 알아내낸다
	cout << "int는 " << sizeof(int) << " 바이트이다." << endl;
	cout << "short는 " << sizeof(short) << " 바이트이다." << endl;
	cout << "long는 " << sizeof(long) << " 바이트이다." << endl;
	cout << "long long는 " << sizeof(long long) << " 바이트이다." << endl<<endl;

	cout << "최댓값 : " << endl;
	cout << "int는 " << n_int <<endl;
	cout << "short는 " << n_short << endl;
	cout << "long는 " << n_long  << endl;
	cout << "long long는 " << n_llong << endl<<endl;
	cout << "int의 최솟값 = " << INT_MIN << endl;
	cout << "바이트 당 비트 수 = " << CHAR_BIT << endl;

}*/

/* exceed 3-2 (82pg)
#define ZERO 0 //값 0으로 대체될 기호 상수 ZERO를 정의한다.
int main()
{
	short Dohee = SHRT_MAX;
	unsigned short Insuk = Dohee;

	cout << "도희의 계좌에는 : " << Dohee << "원이 들어 있고" << endl;
	cout << "인숙이의 계좌에는 : " << Insuk << "원이 들어 있고" << endl;
	cout << "각각의 계좌에 1원을 입금하였습니다." << endl;

	Dohee += 1;
	Insuk += 1;

	cout << "Dohee : " << Dohee << endl << "Insuk : " << Insuk << endl;

	cout << "이럴 수가 도희가 대출을 했나?" << endl;
	Dohee = ZERO;
	Insuk = ZERO;

	cout << "Dohee : " << Dohee << endl << "Insuk : " << Insuk << endl;

	cout << "각각의 계좌에 1원을 인출하였습니다." << endl;
	Dohee -= 1;
	Insuk -= 1; //unsinged에 -1을 대입하면 65535가 나온다.
	cout << "Dohee : " << Dohee << endl << "Insuk : " << Insuk << endl;

	cout << "이럴 수가 인숙이가 복권에 당첨되었나?" << endl;
	return 0;
}*/

/* hexoct1 3-3 (86pg)
int main()
{
	int chest = 42;
	int waist = 0x42;
	int inseam = 042;

	cout << "가슴둘레 : " << chest<<endl; //10진수
	cout << "허리둘레 : " << waist << endl;//16진수
	cout << "인심둘레 : " << inseam << endl;//8진수
}*/

/* hexoct2 3-4 (87pg)
int main() //dec:10진수 , hex:16진수, oct:8진수 바꾸는 조정자
{
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "손님의 몸매는 한마디로 끝내 줍니다!" << endl;
	cout << "가슴둘레 : " << chest <<" (10진수)"<< endl; //10진수
	cout << hex; //진번을 바꾸는 조정자 (16진수)
	cout << "허리둘레 : " << waist <<" (16진수)"<< endl;//16진수
	cout << oct; //진번을 바꾸는 조정자 (10진수)
	cout << "인심둘레 : " << inseam << " (8진수)" << endl;//8진수

	return 0;
}*/

/* chartype 3-5
int main()
{
	char str;
	cout << "원하는 문자를 입력해 주세요" << endl << ">>> ";
	cin >> str;

	cout << "감사합니다. 당신이 입력한 문자는 " << str << "입니다.";
	return 0;
}*/

/* morechar 3-6
int main()
{
	char ch = 'M';
	int i = ch;
	cout << ch<<"의 ASCII코드는 " << i << "입니다." << endl;

	cout << "이 문자 코드에 1을 더해 보겠습니다." << endl;
	ch += 1;
	i = ch;
	cout << ch << "의 ASCII코드는 " << i << "입니다." << endl;

	cout.put(ch);
	cout.put('!');

	cout << endl << "종료" << endl;

	return 0;
}*/

/* bondini 3-7
int main()
{
	cout << "\a \"화려한 외출\" 작전이 개시되었습니다.!\n"; // \a : 경보  \" : " 이다.
	cout << "8자리 비밀번호 입력하시오________\b\b\b\b\b\b\b\b"; //\b : _에 자리를 대입합니다.

	long code;
	cin >> code;
	cout << "\a입력하신 비밀번호는 " << code << "입니다." << endl;
	cout << "\a 비밀번호가 일치합니다." << endl << "z3 작전을 시작합니다.";

	return 0;
}*/

/* floatnum 3-8
int main()
{
	cout.setf(ios_base::fixed, ios_base::floatfield); //고정 소수점 형식으로 출력

	float tub = 10.0 / 3.0;
	double mint = 10.0 / 3.0;
	const float million = 1.0e6;

	cout << "tub = " << tub;
	cout << ", a million tubs = " << million * tub;
	cout << ",\nten million tubs = ";
	cout << 10 * million *tub << endl;
	return 0;
}*/

/* fitadd 3-9
int main()
{
	float a = 2.34E+22f;
	float b = a + 1.0f;

	cout << "a = " << a << endl;
	cout << "b - a = " << b - a << endl;

	return 0;
}*/

/* arith 3-10 (111pg)
int main()
{
	float hats, heads;

	cout.setf(ios_base::fixed, ios_base::floatfield); //고정 소수점 형식으로 출력
	cout<<"수 하나를 입력하시오"<<endl<<">>> ";
	cin >> hats;
	cout << "다른 수 하나를 입력하시오" << endl << ">>> ";
	cin >> heads;

	cout << "hats = " << hats << "; heads = " << heads << endl;
	cout << "hats + heads = " << hats + heads << endl;
	cout << "hats - heads = " << hats - heads << endl;
	cout << "hats * heads = " << hats * heads << endl;
	cout << "hats / heads = " << hats / heads << endl;

	return 0;
}*/

/* divide 3-11 (114pg)
int main()
{
	cout.setf(ios_base::fixed, ios_base::floatfield); //고정 소수점 형식으로 출력
	cout << "정수 나눗셈: 9/5 = " << 9 / 5 << endl;
	cout << "부동 소수점수 나눗셈: 9.0/5.0 = ";
	cout << 9.0 / 5.0 << endl;
	cout << "혼합 나눗셈: 9.0/5 = " << 9.0 / 5 << endl;
	cout << "double형 상수: 1e7/9.0 = ";
	cout << 1e7 / 9.0 << endl;
	cout << "float형 상수: 1e7f/9.0f = ";
	cout << 1e7f / 9.0f << endl;
	return 0;
}*/

/* modulus 3-12 (116)
int main()
{
	const int Lbs_per_stn = 14;
	int lbs;

	cout << "당신의 체중을 파운드 단위로 입력하십시오: ";
	cin >> lbs;

	int stone = lbs/Lbs_per_stn;
	int pounds = lbs % Lbs_per_stn;
	cout << lbs << "파운드는 " << stone << "스톤, " << pounds << " 파운드입니다.\n";

	return 0;
}*/

/* init 3-13 (118pg)
int main()
{
	cout.setf(ios_base::fixed, ios_base::floatfield); //고정 소수점 형식으로 출력
	float tree = 3;
	int guess = 3.9832;
	int debt = 7.2E12;
	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
	cout << "debt = " << debt << endl;
	return 0;
}*/

/* typecast 3-14 (122)
int main()
{
	int auks, bats, coots;
	//다음 구문은 두 값을 double형으로 더한 후에
	//그 합을 int형으로 변환하여 대입한다.
	auks = 19.99 + 11.99;

	//다음 두 구문은 두 값을 int형으로 변환한 후에 더한다.
	bats = (int)19.99 + (int)11.99;
	coots = int(19.99) + int(11.99);
	cout << "바다오리 = " << auks << ", 박쥐 = " << bats;
	cout << ", 검둥오리 = " << coots << endl;

	char ch = 'Z'; //대소문자에 따라 값이 다르다 ex)z = 122, Z = 90
	cout << "코드 " << ch << "의 값은 ";
	cout << int(ch) << endl;
	cout << "네, 코드 z의 값은 ";
	cout << static_cast<int>(ch) << endl;
	return 0;
}*/

//프로그램 연습//

/* 1번
int main()
{
	const int miter=100;

	int center;
	cout << "키를 센터미터로 입력해 주세요" << endl << ">>>___\b\b\b ";
	cin >> center;

	cout << "당신의 키는 " << (double)center / miter << "m 이고 " << center << "cm 이다.";

	return 0;
}*/


/* 2번
int main()
{
	int fit = 0, lb=0;

	cout << "당신의 키를 피트 단위로 입력해 주세요" << endl << ">>> ";
	cin >> fit;

	cout << "체중을 파운드 단위로 입력해 주세요" << endl << ">>> ";
	cin >> lb;

	cout << "당신의 키는 " << fit * 12 << "인치이고 " << (fit * 12) * 0.0254 << "m이다."<<endl;
	cout << "당신의 체중은 " << lb / 2.2 << "킬로그램이다.";
	cout << "당신의 BMI는 " << (lb / 2.2) / (((fit * 12) * 0.0254) * ((fit * 12) * 0.0254));

}*/

/* 3번
double change(double n, double m, double l);
int main()
{
	cout << "위도를 도, 분, 초 단위로 입력해 주세요" << endl;
	int a,b,c;


	cout << "먼저 도각을 입력하시오 : ";
	cin >> a;

	cout << "다음으로 분각을 입력하시오 : ";
	cin >> b;

	cout << "마지막으로 초각을 입력하시오 : ";
	cin >> c;


	double aa = change(a, b, c);
	cout << a << "도, " <<b << "분, " << c << "초 = " << aa<<"도";

}
double change(double n, double m, double l)
{
	return n + (m / 60) + (l / 3600);
}*/

/* 4번
void change(long n);
int main()
{
	cout << "초 수를 입력하시오 : ";
	long m = 0;
	cin >> m;

	change(m);

	return 0;
}
void change(long n)
{
	long add = n;
	int d, t, m, s;

	if (add > 86400) //날짜 계산
	{
		d = add / 86400;
		cout << d << "일 ";
		add -= 86400 * d;
	}

	if (add > 3600) //시간 계산
	{
		t = add / 3600;
		cout << t << "시간 ";
		add -= 3600 * t;
	}

	if (add > 60) //분 계산
	{
		m = add / 60;
		cout << m << "분 ";
		add -= 60 * m;
	}

	if (add > 1) //초 계산
	{
		t = add / 1;
		cout << t << "초 ";
	}
}*/

/* // 5번
float result(long long n, long long m);
int main()
{
	long long a = 0, b=0;
	cout << "세계 인구수를 입력하시오 : ";
	cin >> a;
	cout << "미국의 인구수를 입력하시오 : ";
	cin >> b;

	cout << "세계 인구수에서 미국이 차지하는 비중은 : " << result(a, b)<< "%이다.";

	return 0;
}
float result(long long n, long long m)
{
	return (float)m  / n * 100; //(m/n)으로 묶으면 전체가 아닌 (m/n) 부분만 float라 0 * 100이 된다.
}*/


/* 6번 ~ 7번
int main()
{
	cout << "주행한 거리를 마일로 입력해 주세요 : ";
	int a, b;
	cin >> a;

	cout << "소비한 휘발유의 양을 갤런 단위로 입력해 주세요 : ";
	cin>>b;

	float result = (float)a/b;
	cout << "1갤런당 이동한 마일 수는 " << result << "마일이다." << endl;

	cout << "1갤런당 " << result << "마일을 이동하였습니다." << endl;
	cout << "1갤런은 3.895L 이며 1마일은 1.60934km이다." << endl << "100km당 ";
	float l = (float)b * 3.875;
	float km = (float)a * 1.60934;

	float result1 = l/km;
	cout << result1 * 100<<"L를 사용한다.";

	return 0;
}*/

