#include "main.h"



/*
//write.cpp 17-1 (1362pg)
int main()
{
	const char* state1 = "Florida";
	const char* state2 = "Kansas";
	const char* state3 = "Euphoria";
	int len = strlen(state2);
	cout << "루프 인덱스 증가:\n";
	int i;
	for (i = 0; i <= len; i++)
	{
		cout.write(state2, i);
		cout << endl;
	}
	cout << "루프 인덱스 감소:\n";
	for (i = 0; i > 0; i--)
		cout.write(state2, i)<< endl;

	cout << "문자열 길이 초과:\n";
	cout.write(state2, len + 5) << endl;

	return 0;
}*/



/*
//defualts.cpp 17-2 (1366pg)
int main()
{
	cout << "1234567890\n";
	char ch = 'K';
	int t = 273;
	cout << ch << "\n";
	cout << t << "\n";
	cout << -t << "\n";

	double f1 = 1.200;
	cout << f1 << "\n";
	cout << (f1 + 1.0 / 9.0) << ":\n";

	double f2 = 1.67E2;
	cout << f2 << ":\n";
	f2 += 1.0 / 9.0;
	cout << f2 << ":\n";
	cout<<(f2*1.0e-4)<< ":\n";

	double f3 = 2.3e-4;
	cout << f3 << "\n";
	cout << f3 + 10 << ":\n";

	return 0;
}*/



/*
//manip.cpp 17-3 (1369pg)
int main()
{
	cout << "하나의 정수를 입력하십시오: ";
	int n;
	cin >> n;

	cout << "n    n*n\n";
	cout << n << "    " << n * n << " (10진법)\n";

	cout << hex;
	cout << n << "    ";
	cout << n * n << " (16진법)\n";

	cout << oct << n;
	cout.width(6);
	cout<< n * n << " (8진법)\n";

	dec(cout);
	cout << n << "    " << n * n << " (10진법)\n";

	return 0;
}*/



/*
//width.cpp 17-4 (1371pg)
int main()
{
	int w = cout.width(30);
	cout << "디폴트 필드 폭 = " << w << ":\n";

	cout.width(5);
	cout << "N" << ':';
	cout.width(8);
	cout << "N * N" << ":\n";

	for (long i = 1; i <= 100; i *= 10)
	{
		cout.width(5);
		cout << i << ':';
		cout.width(8);
		cout << i * i << ":\n";
	}
	return 0;
}*/



/*
//fill.cpp 17-5 (1272pg)
int main()
{
	cout.fill('*');
	const char* stuff[2] = { "윤성일", "박순용" };
	long bonus[2] = { 900, 1350 };

	for (int i = 0; i < 2; i++)
	{
		cout << stuff[i] << ": $";
		cout.width(7);
		cout << bonus[i] << "\n";
	}
	return 0;
}*/



/*
//precise.cpp 17-6 (1373pg)
int main()
{
	float price1 = 20.40;
	float price2 = 1.9 + 8.0 / 9.0;

	cout << "\"손오공 인형\" $" << price1 << "!\n";
	cout << "\"사오정 인형\" $" << price2 << "!\n";

	cout.precision(2);
	cout << "\"손오공 인형\" $" << price1 << "!\n";
	cout << "\"사오정 인형\" $" << price2 << "!\n";

	return 0;
}*/




/*
//showpt.cpp 17-7 (1375pg)
int main()
{
	float price1 = 20.40;
	float price2 = 1.9 + 8.0 / 9.0;

	cout.setf(ios_base::showpoint);
	cout << "\"손오공 인형\" $" << price1 << "!\n";
	cout << "\"사오정 인형\" $" << price2 << "!\n";

	cout.precision(2);
	cout << "\"손오공 인형\" $" << price1 << "!\n";
	cout << "\"사오정 인형\" $" << price2 << "!\n";

	return 0;
}*/



/*
//setf.cpp 17-8 (1377pg)
int main()
{
	int temprature = 63;

	cout << "오늘의 수온: ";
	cout.setf(ios_base::showpos); //플러스 부호 사용
	cout << temprature << endl;

	cout << "프로그래머들에게 그 값은\n";
	cout << hex << temprature << endl;
	cout.setf(ios_base::uppercase);
	cout.setf(ios_base::showbase);
	cout << "또 는\n";
	cout << temprature << endl;
	cout << true << "!의 값은 ";
	cout.setf(ios_base::boolalpha);
	cout << true << "이다.\n";

	return 0;
}*/




/*
//setf2.cpp 17-9 (1380pg)
int main()
{
	cout.setf(ios_base::left, ios_base::adjustfield);
	cout.setf(ios_base::showpos);
	cout.setf(ios_base::showpoint);
	cout.precision(3);

	ios_base::fmtflags old = cout.setf(ios_base::scientific, ios_base::floatfield);
	cout << "왼쪽 정렬:\n";
	long n;
	for (n = 1; n <= 41; n += 10)
	{
		cout.width(4);
		cout << n << "|";
		cout.width(12);
		cout << sqrt(double(n)) << "|\n";
	}
	cout.setf(ios_base::internal, ios_base::adjustfield);
	cout.setf(old, ios_base::floatfield);
	cout << "내부(internal) 정렬:\n";
	for (n = 1; n <= 41; n += 10)
	{
		cout.width(4);
		cout << n << "|";
		cout.width(12);
		cout << sqrt(double(n)) << "|\n";
	}
	cout.setf(ios_base::right, ios_base::adjustfield);
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "오른쪽 정렬:\n";
	for (n = 1; n <= 41; n += 10)
	{
		cout.width(4);
		cout << n << "|";
		cout.width(12);
		cout << sqrt(double(n)) << "|\n";
	}
	return 0;
}*/


/*
//iomanip.cpp 17-10 (1385PG)
int main()
{
	cout << fixed << right;
	cout << setw(6) << "N" << setw(14) << "제곱근" << setw(15) << "네제곱근\n";

	double root;
	for (int n = 10; n <= 100; n += 10)
	{
		root = sqrt(double(n));
		cout << setw(6) << setfill('.') << n << setfill(' ')
			<< setw(12) << setprecision(3) << root
			<< setw(14) << setprecision(4) << sqrt(root)
			<< endl;
	}
	return 0;
}*/



/*
//check_it.cpp 17-11 (1390pg)
int main()
{
	cout << "수를 입력하십시오: ";
	int sum = 0;
	int input;
	while (cin >> input)
	{
		sum += input;
	}
	cout << "마지막으로 입력한 값 = " << input << endl;
	cout << "합계 = " << sum << endl;
	return 0;
}*/



/*
//cinexcp.cpp 17-12 (1394pg)
int main()
{
	cin.exceptions(ios_base::failbit);
	cout << "수를 입력하십시오: ";
	int sum = 0;
	int input;
	try {
		while (cin >> input)
		{
			sum += input;
		}
	}
	catch (ios_base::failure& bf)
	{
		cout << bf.what() << endl;
		cout << "앗 실수!\n";
	}

	cout << "마지막으로 입력한 값 = " << input << endl;
	cout << "합계 = " << sum << endl;

	return 0;
}*/



/*
//get_fun.cpp 17-13 (1404pg)
const int Limit = 255;
int main()
{
	char input[Limit];
	cout << "getline()이 처리할 문자열을 입력하십시오:\n";
	cin.getline(input, Limit, '#');
	cout << "다음과 같이 입력하셨습니다:\n";
	cout << input << "\n1단계 완료\n";

	char ch;
	cin.get(ch);
	cout << "다음 입력 문자는 " << ch << "입니다." << endl;

	if (ch != '\n')
		cin.ignore(Limit, '#');

	cout << "get()이 처리할 문자열을 입력하십시오:\n";
	cin.getline(input, Limit, '#');
	cout << "다음과 같이 입력하셨습니다:\n";
	cout << input << "\n2단계 완료\n";

	cin.get(ch);
	cout << "다음 입력 문자는 " << ch << "입니다." << endl;

	return 0;
}*/



/*
//peeker.cpp 17-14 (1409pg)
int main()
{
	char ch;

	while (cin.get(ch)) //EOF에서 종료
	{
		if (ch != '#')
			cout << ch;
		else
		{
			cin.putback(ch);
			break;
		}
	}
	if (!cin.eof())
	{
		cin.get(ch);
		cout << endl << ch << "은 다음 입력 문자입니다.\n";
	}
	else
	{
		cout << "파일 끝에 도달했습니다.\n";
		exit(0);
	}

	while (cin.peek() != '#')
	{
		cin.get(ch);
		cout << ch;
	}
	if (!cin.eof())
	{
		cin.get(ch);
		cout << endl << ch << "은 다음 입력 문자입니다.\n";
	}
	else
		cout << "파일 끝에 도달했습니다.\n";

	return 0;
}*/




/*
//truncate.cpp 17-15 (1411pg)
const int SLEN = 10;
inline void eatline() { while (cin.get() != '\n') continue; }
int main()
{
	char name[SLEN];
	char title[SLEN];
	cout << "이름을 입력하십시오: ";
	cin.get(name, SLEN);
	
	if (cin.peek() != '\n')
		cout << "죄송합니다. 이름란이 좁아서 " << name << "만 적어 넣었습니다." << endl;
	
	eatline();
	cout << name << "씨! 직위를 입력하십시오: \n";
	cin.get(title,SLEN);

	if (cin.peek() != '\n')
		cout << "직위 뒷부분을 잘랐습니다.\n";
	eatline();
	cout << "이름: " << name << "\n직위: " << title << endl;

	return 0;
}*/



/*
//fileio.cpp 17-16 (1416pg)
int main()
{
	string filename;

	cout << "새 파일을 위한 이름을 입력하십시오: ";
	cin >> filename;

	ofstream fout(filename.c_str());

	fout << "비밀번호 노출을 조심하십시오\n";
	fout << "비밀번호를 입력하십시오: ";
	float secret;
	cin >> secret;
	fout << "귀하의 비밀번호는 " << secret << "입니다.\n";
	fout.close();

	ifstream fin(filename.c_str());
	cout << filename << " 파일의 내용은 다음과 같습니다.\n";
	char ch;
	while (fin.get(ch))
		cout << ch;
	cout << "프로그램을 종료합니다.\n";
	fin.close();

	return 0;
}*/



/*
//count.cpp 17-17 (1421pg)
int maia(int argc, char* argv[])
{
	if (argc == 1)
	{
		cerr << "사용법: " << argv[0] << " filename[s] \n";
		exit(EXIT_FAILURE);
	}
	ifstream fin;

	long count;
	long total = 0;
	char ch;

	for (int file = 1; file < argc; file++)
	{
		fin.open(argv[file]);
		if (!fin.is_open())
		{
			cerr << argv[file] << " 파일을 열수 없스니다.\n";
			fin.clear();
			continue;
		}
		count=0;
		while (fin.get(ch))
			count++;
		cout << argv[file] << " 파일에 들어 있는 문자 수는 " << count << "입니다.\n";
		total += count;
		fin.clear();
		fin.close();
	}
	cout << "전체 파일에 들어 있는 문자 수는 " << total << "입니다.\n";

	return 0;
}*/



/*
//append.cpp 17-18 (1426pg)
const char* file = "guests.txt";
int main()
{
	char ch;
	ifstream fin;
	fin.open(file);

	if (fin.is_open())
	{
		cout << file << " 파일의 현재 내용은 다음과 같습니다.\n";
		while (fin.get(ch))
			cout << ch;
		fin.close();
	}

	ofstream fout(file, ios_base::out | ios_base::app);
	if (!fout.is_open())
	{
		cerr << "출력을 위해 " << file << " 파일을 열 수 없습니다.\n";
		exit(EXIT_FAILURE);
	}

	cout << "새로운 손님 이름들을 입력하십시오(끝내려면 빈 줄을 입력) : \n";
	string name;
	while (getline(cin, name) && name.size() > 0)
	{
		fout << name << endl;
	}
	fin.clear();
	fin.open(file);
	if (fin.is_open())
	{
		cout << file << " 파일의 개정된 내용은 다음과 같습니다.:\n";
		while (fin.get(ch))
			cout << ch;
		fin.close();
	}
	cout << "프로그램을 종료합니다.\n";

	return 0;
}*/




/*
//binary.cpp 17-19 (1433pg)
inline void eatline() { while (cin.get() != '\n') continue; }
struct planet
{
	char name[20];
	double population;
	double g;
};

const char* file = "planets.dat";

int main()
{
	planet p1;
	cout << fixed << right;

	ifstream fin;
	fin.open(file, ios_base::in, ios_base::binary);
	if (fin.is_open())
	{
		cout << file << " 파일의 현재 내용은 다음과 같습니다.\n";

		while (fin.read((char*) &p1, sizeof p1))
		{
			cout << setw(20) << p1.name << ": "
				<< setprecision(0) << setw(12) << p1.population
				<< setprecision(2) << setw(6) << p1.g << endl;
		}
		fin.close();
	}

	ofstream fout(file, ios_base::out | ios_base::app | ios_base::binary);
	if (!fout.is_open())
	{
		cerr << "출력을 위해 " << file << " 파일을 열 수 없습니다.\n";
		exit(EXIT_FAILURE);
	}

	cout << "행성의 이름을 입력하십시오(끝내려면 빈 줄을 입력) : \n";
	cin.get(p1.name, 20);
	while (p1.name[0] != '\0')
	{
		eatline();
		cout << "행성의 인구를 입력하시오: ";
		cin >> p1.population;
		cout << "행성의 중력 가속도를 입력하십시오: ";
		cin >> p1.g;
		eatline();
		fout.write((char*)&p1, sizeof p1);
		cout << "행성의 이름을 입력하십시오(끝내려면 빈 줄을 입력) : \n";
		cin.get(p1.name, 20);
	}
	fout.close();

	fin.clear();
	fin.open(file, ios_base::out | ios_base::app | ios_base::binary);
	if (fin.is_open())
	{
		cout << file << " 파일의 개정된 내용은 다음과 같습니다.:\n";
		while (fin.read((char*)&p1, sizeof p1))
		{
			cout << setw(20) << p1.name << ": "
				<< setprecision(0) << setw(12) << p1.population
				<< setprecision(2) << setw(6) << p1.g << endl;
		}
		fin.close();
	}
	cout << "프로그램을 종료합니다.\n";

	return 0;
}*/





/*
//random.cpp 17-20 (1443pg)
const int LIM = 20;
struct planet
{
	char name[LIM];
	double population;
	double g;
};

const char* file = "planets.dat";
inline void eatline() { while (cin.get() != '\n') continue; }
int main()
{
	planet p1;
	cout << fixed;
	fstream finout;
	finout.open(file, ios_base::in | ios_base::out, ios_base::binary);
	int ct = 0;
	if (finout.is_open())
	{
		finout.seekg(0);
		cout << file << " 파일의 현재 내용은 다음과 같습니다.\n";

		while (finout.read((char*)&p1, sizeof p1))
		{
			cout << setw(20) << p1.name << ": "
				<< setprecision(0) << setw(12) << p1.population
				<< setprecision(2) << setw(6) << p1.g << endl;
		}
		if (finout.eof())
			finout.clear();
		else
		{
			cerr << file << " 파일을 열 수 없습니다.\n";
			exit(EXIT_FAILURE);
		}
		cout << "수정할 레코드 번호를 입력하십시오: ";
		long rec;
		cin >> rec;
		eatline();
		if (rec < 0 || rec >= ct)
		{
			cerr <<"잘못된 레코드 번호입니다.\n";
			exit(EXIT_FAILURE);
		}
		streampos place = rec * sizeof p1;
		finout.seekg(place);
		if (finout.fail())
		{
			cerr << "잘못된 레코드 번호입니다.\n";
			exit(EXIT_FAILURE);
		}
		finout.read((char*)&p1, sizeof p1);
		cout << "현재 레코드 번호";
		cout << setw(20) << p1.name << ": "
			<< setprecision(0) << setw(12) << p1.population
			<< setprecision(2) << setw(6) << p1.g << endl;

		if (finout.eof())
			finout.clear();
		cout << "행성의 인구를 입력하시오: ";
		cin >> p1.population;
		cout << "행성의 중력 가속도를 입력하십시오: ";
		cin >> p1.g;
		finout.seekg(place);
		finout.write((char*)&p1, sizeof p1) << flush;
		if (finout.fail())
		{
			cerr << "에러 발생\n";
			exit(EXIT_FAILURE);
		}

		ct = 0;
		finout.seekg(0);
		cout << file << " 파일의 개정된 내용은 다음과 같습니다.:\n";
		while (finout.read((char*)&p1, sizeof p1))
		{
			cout << setw(20) << p1.name << ": "
				<< setprecision(0) << setw(12) << p1.population
				<< setprecision(2) << setw(6) << p1.g << endl;
		}
		finout.close();
	}
	cout << "프로그램을 종료합니다.\n";

}*/



/*
//strout.cpp 17-21 (1449pg)
int main()
{
	ostringstream outstr;

	string hdisk;
	cout << "하드디스크의 모델명이 무엇입니까? ";
	getline(cin, hdisk);
	int cap;
	cout << "하드디스크의 용량은 몇 GB입니까? ";
	cin>>cap;

	outstr << hdisk << " 하드디스크의 용량은"
		<< cap << "GB입니다. \n";
	string result = outstr.str();
	cout << result;

	return 0;
}*/




/*
//strin.cpp 17-22 (1450pg)
int main()
{
	string lit = "길섶 민들레 꽃씨대롱 방울로 부풀어"
				 "여윈 목 아프게 뺴어 들고"
				 "아가씨 실어 나를 바람 기다리 누나";
	istringstream instr(lit);
	string word;
	while (instr >> word)
		cout << word << endl;

	return 0;
}*/
