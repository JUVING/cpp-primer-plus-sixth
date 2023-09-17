#include "main.h"


/* forloop 5-1 (234pg)
int main()
{
	int i;
	for (i = 0; i < 5; i++)
	{
		cout << "c++가 루프를 사용합니다.\n";
	}
	cout << "루프를 언제 끝내야 할지 c++는 알고 있습니다.";

	return 0;
}*/

/* num_test 5-2 (236pg)
int main()
{
	int limit;
	cout << "카운트 시작 값을 입력하시요\n" <<">>> ";
	cin >> limit;
	int i;
	for (i = limit; i; i--) //조건식에 i만 들어가면 i가 0이되면 종료한다.
		cout << "i = " << i << endl;

	cout << "i가 " << i << " 이므로 loop 종료합니다.";

	return 0;
}*/

/* express 5-3 (239pg)
int main()
{
	int x;
	cout << "대입 표현식 x = 100의 값은 ";
	cout << (x = 100) << endl;
	cout << "현재의 x의 값은 " << x << endl;
	cout << "대입 표현식 x < 3의 값은 ";
	cout << (x < 3) << endl;
	cout << "대입 표현식 x > 3의 값은 ";
	cout << (x > 3) << endl;
	cout.setf(ios_base::boolalpha);
	cout << "대입 표현식 x < 3의 값은 ";
	cout << (x < 3) << endl;
	cout << "대입 표현식 x > 3의 값은 ";
	cout << (x > 3) << endl;

	return 0;
}*/

/* formore 5-4 (243pg)
const int arsize = 16;
int main()
{
	long long factorials[arsize];
	factorials[1] = factorials[0]=1LL; //1을 int형이 아닌 long long으로 처리한다는 뜻이다.
	for (int i = 2; i < arsize; i++)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i < arsize; i++)
		cout << i << "! = " << factorials[i] << endl;
	return 0;
}*/

/* bigstep 5-5 (246pg)
int main()
{
	cout << "정수를 하나 입력하십시오 : ";
	int by;
	cin >> by;
	cout << "갱신 크기" << by << "s:\n";
	for (int i = 0; i < 100; i = i + by)
		cout << i << endl;

	return 0;
}*/

/* forstr1 5-6 (247pg)
int main()
{
	cout << "단어 하나를 입력하시오 : ";
	string world;
	getline(cin, world);

	for (int i = world.size() - 1; i >= 0; i--)
		cout << world[i];

	cout << "\n종료\n";
	return 0;
}*/

/* plus_one 5-7 (248pg)
int main()
{
	int a = 20, b = 20;

	cout << "a = " << a << " : b = " << b << endl;
	cout << "a++ = " << a++ << " : ++b = " << ++b << endl;
	cout << "a = " << a << " : b = " << b << endl;

	return 0;
}*/

/* block 5-8 (254pg)
int main()
{
	cout << "값 5개의 평균 값을 구합니다.\n";
	cout << "값 5개를 입력하시오\n";
	double number;
	double sum = 0.0;
	for (int i = 1; i <= 5; i++)
	{
		cout << "값 " << i << ": ";
		cin >> number;
		sum += number;
	}
	cout << "값 5개가 모두 입력되었습니다.\n";
	cout << "입력한 5개 값의 합계은 " << sum << "입니다.\n";
	cout << "입력한 5개 값의 평균은 " << sum/5 << "입니다.\n"<<"감사합니다.\n";

	return 0;
}*/

/* forstr2 5-9 (257pg)
int main()
{
	cout << "단어 하나를 입력하시오 : ";
	string world;
	getline(cin, world);

	char temp;
	int i, j;

	for (j = 0, i = world.size() - 1; j < i; --i, ++j)
	{
		temp = world[i];
		world[i] = world[j];
		world[j] = temp;
	}

	cout <<world<< "\n종료\n";
	return 0;
}*/

/* equal 5-10 (262pg)
int main()
{
	int quizscores[10] = { 20,20,20,20,20,19,20,18,20,20 };

	cout << "올바른 방법:\n";
	int i;
	for (i = 0; quizscores[i] == 20; i++)
		cout << i << "번 퀴즈의 점수는 20입니다\n";

	cout << "잘못된 방법:\n";

	for (i = 0; quizscores[i] = 20; i++)
		cout << i << "번 퀴즈의 점수는 20입니다\n";

	return 0;
}*/

/* compstr1 5-11 (265pg)
int main()
{
	char world[5] = "?ate";

	for (char ch = 'a'; strcmp(world, "mate"); ch++)
	{
		cout << world << endl;
		world[0] = ch;
	}
	cout << "루프가 끝난 후에 단어는 " << world << "입니다.\n";

	return 0;
}*/

/* comstr2 5-12 (268pg)
int main()
{
	char world[5] = "?ate";

	for (char ch = 'a'; world != "mate"; ch++)
	{
		cout << world << endl;
		world[0] = ch;
	}
	cout << "루프가 끝난 후에 단어는 " << world << "입니다.\n";

	return 0;
}*/

/* while 5-13 (270pg)
const int arsize = 20;
int main()
{
	char name[arsize];

	cout << "영문 이름을 입력하십시오: ";
	cin >> name;
	cout << "귀하의 영문 이름을 한 줄에 한 자씩\n";
	int i = 0;
	while (name[i] != '\0')
	{
		cout << name[i] << ": " << int(name[i]) << endl;
		i++;
	}
	return 0;
}*/

/* waiting 5-14 (275)  @@@스탑워치@@@
int main()
{
	cout << "지연 시간을 초 단위로 입력하십시오: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC; //지연 시간을 시스템 단위 클록 수로 변환

	cout << "카운트를 시작합니다.\a\n";
	clock_t start = clock();

	while (clock() - start < delay)
		;
	cout << "종료\a\n";
	return 0;
}*/

/* dowhile 5-15 (278pg)
int main()
{
	int n;

	cout << "1부터 10까지의 수 중에서 ";
	cout << "내가 좋아하는 수를 한번 맞추어 보십시오.\n";
	do
	{
		cin >> n;
	} while (n != 7);

	cout << "맞습니다. 내가 좋아하는 수는 럭키 세븐 7입니다.\n";

	return 0;
}*/

/* textin2 -17 (283pg)
int main()
{
	char ch;
	int count = 0;
	cout << "문자열을 입력하시오; 끝내려면 #을 입력하시오:\n";
	cin >> ch;

	while (ch != '#')
	{
		cout << ch;
		++count;
		cin >> ch;
	}
	cout << endl << count << " 문자를 읽었습니다. \n";
	return 0;
}*/

/* textin3 5-18 (287pg)
int main()
{
	char ch;
	int count = 0;
	cout << "문자열을 입력하시오:\n";
	cin.get(ch);

	while (cin.fail() == false)
	{
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << " 문자를 읽었습니다. \n";
	return 0;
}*/

/* textin4 5-19 (292pg)
int main()
{
	char ch;
	int count = 0;

	while ((ch = cin.get()) != EOF)
	{
		cout.put(char(ch));
		++count;
	}
	cout << endl << count << " 문자를 읽었습니다. \n";
	return 0;
}*/

/* nested 5-20 (297pg)
const int cities = 5;
const int years = 4;
int main()
{
	const char * citie [cities] =
	{
		"seoul",
		"jeju",
		"busan",
		"gangneung",
		"daegu"
	};

	int maxtemps [years][cities] =
	{
		{35,32,33,36,35},
		{33,32,34,35,31},
		{36,35,34,37,35},
		{33,34,32,35,34}
	};

	cout << "2009년부터 2012년까지의 연중 최고 온도\n\n";
	for (int city = 0; city < cities; ++city)
	{
		cout << citie[city] << ":\t";
		for (int year = 0; year < years; ++year)
			cout << maxtemps[year][city] << "\t";
		cout<<endl;
	}
	return 0;
}*/

//연습문제

/* 1번
int main()
{
	cout << "두 개의 정수를 입력해 주세요\n" << ">>> ";
	int a, b;
	cin >> a >> b;
	int add = 0;
	for (int i = a; a <= b; a++)
	{
		add += a;
	}
	cout << "합은 : " << add;

	return 0;
}*/

/* 2번
const int arsize = 16;
int main()
{
	array<long double, arsize>factorials;
	factorials[1] = factorials[0] = 1LL; //1을 int형이 아닌 long long으로 처리한다는 뜻이다.
	for (int i = 2; i < arsize; i++)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i < arsize; i++)
		cout << i << "! = " << factorials[i] << endl;
	return 0;
}*/

/*
int main()
{

	int add = 0;

	int i;

	do
	{
		cout << ">>> ";
		cin >> i;
		add += i;
	}while (i != 0);

	cout << "총 누계 : " << add;

	return 0;
}*/

/*
int main()
{
	struct car
	{
		string name;
		int year;
	};

	int num = 0;
	cout << "몇대의 차량을 관리할까요?\n>>> ";
	cin >> num;
	cin.ignore();
	car* a = new car[num];

	for (int i = 0; i < num; i++)
	{

		cout << "자동차 #" << i + 1 << endl;
		cout << "제작업체 : ";
		getline(cin, a[i].name);
		cout << "제작년도 : ";
		cin >> a[i].year;
		cin.ignore();
	}

	cout << "\n\n";
	for (int i = 0; i < num; i++)
	{
		cout << "자동차 #" << i + 1 << endl;
		cout << "제작업체 : "<< a[i].name<<endl;
		cout << "제작년도 : "<< a[i].year<<endl;
		cout << "\n\n";
	}

	delete[] a;
	return 0;
}*/


/*
int main() {
	string input;
	int wordCount = 0;

	while (true) {
		cout << "단어를 입력해 주세요 (type 'done' to stop): ";
		cin >> input;

		for (char& c : input) {
			c = std::tolower(c);
		}

		if (input == "done") {
			break;
		}

		wordCount++;
	}

	cout << "총 입력한 단어는 : " << wordCount << std::endl;

	return 0;
}*/

/*
int main()
{
	cout << "출력할 행 수를 입력하시오 : ";
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int o = i; o < n-1; o++)
		{
			cout << "*";
		}
		for (int p = 0; p < i+1; p++)
		{
			cout << "@";
		}
		cout << endl;
	}
}*/

