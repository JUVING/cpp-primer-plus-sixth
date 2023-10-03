#include "main.h"



/*
//write.cpp 17-1 (1362pg)
int main()
{
	const char* state1 = "Florida";
	const char* state2 = "Kansas";
	const char* state3 = "Euphoria";
	int len = strlen(state2);
	cout << "���� �ε��� ����:\n";
	int i;
	for (i = 0; i <= len; i++)
	{
		cout.write(state2, i);
		cout << endl;
	}
	cout << "���� �ε��� ����:\n";
	for (i = 0; i > 0; i--)
		cout.write(state2, i)<< endl;

	cout << "���ڿ� ���� �ʰ�:\n";
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
	cout << "�ϳ��� ������ �Է��Ͻʽÿ�: ";
	int n;
	cin >> n;

	cout << "n    n*n\n";
	cout << n << "    " << n * n << " (10����)\n";

	cout << hex;
	cout << n << "    ";
	cout << n * n << " (16����)\n";

	cout << oct << n;
	cout.width(6);
	cout<< n * n << " (8����)\n";

	dec(cout);
	cout << n << "    " << n * n << " (10����)\n";

	return 0;
}*/



/*
//width.cpp 17-4 (1371pg)
int main()
{
	int w = cout.width(30);
	cout << "����Ʈ �ʵ� �� = " << w << ":\n";

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
	const char* stuff[2] = { "������", "�ڼ���" };
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

	cout << "\"�տ��� ����\" $" << price1 << "!\n";
	cout << "\"����� ����\" $" << price2 << "!\n";

	cout.precision(2);
	cout << "\"�տ��� ����\" $" << price1 << "!\n";
	cout << "\"����� ����\" $" << price2 << "!\n";

	return 0;
}*/




/*
//showpt.cpp 17-7 (1375pg)
int main()
{
	float price1 = 20.40;
	float price2 = 1.9 + 8.0 / 9.0;

	cout.setf(ios_base::showpoint);
	cout << "\"�տ��� ����\" $" << price1 << "!\n";
	cout << "\"����� ����\" $" << price2 << "!\n";

	cout.precision(2);
	cout << "\"�տ��� ����\" $" << price1 << "!\n";
	cout << "\"����� ����\" $" << price2 << "!\n";

	return 0;
}*/



/*
//setf.cpp 17-8 (1377pg)
int main()
{
	int temprature = 63;

	cout << "������ ����: ";
	cout.setf(ios_base::showpos); //�÷��� ��ȣ ���
	cout << temprature << endl;

	cout << "���α׷��ӵ鿡�� �� ����\n";
	cout << hex << temprature << endl;
	cout.setf(ios_base::uppercase);
	cout.setf(ios_base::showbase);
	cout << "�� ��\n";
	cout << temprature << endl;
	cout << true << "!�� ���� ";
	cout.setf(ios_base::boolalpha);
	cout << true << "�̴�.\n";

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
	cout << "���� ����:\n";
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
	cout << "����(internal) ����:\n";
	for (n = 1; n <= 41; n += 10)
	{
		cout.width(4);
		cout << n << "|";
		cout.width(12);
		cout << sqrt(double(n)) << "|\n";
	}
	cout.setf(ios_base::right, ios_base::adjustfield);
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "������ ����:\n";
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
	cout << setw(6) << "N" << setw(14) << "������" << setw(15) << "��������\n";

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
	cout << "���� �Է��Ͻʽÿ�: ";
	int sum = 0;
	int input;
	while (cin >> input)
	{
		sum += input;
	}
	cout << "���������� �Է��� �� = " << input << endl;
	cout << "�հ� = " << sum << endl;
	return 0;
}*/



/*
//cinexcp.cpp 17-12 (1394pg)
int main()
{
	cin.exceptions(ios_base::failbit);
	cout << "���� �Է��Ͻʽÿ�: ";
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
		cout << "�� �Ǽ�!\n";
	}

	cout << "���������� �Է��� �� = " << input << endl;
	cout << "�հ� = " << sum << endl;

	return 0;
}*/



/*
//get_fun.cpp 17-13 (1404pg)
const int Limit = 255;
int main()
{
	char input[Limit];
	cout << "getline()�� ó���� ���ڿ��� �Է��Ͻʽÿ�:\n";
	cin.getline(input, Limit, '#');
	cout << "������ ���� �Է��ϼ̽��ϴ�:\n";
	cout << input << "\n1�ܰ� �Ϸ�\n";

	char ch;
	cin.get(ch);
	cout << "���� �Է� ���ڴ� " << ch << "�Դϴ�." << endl;

	if (ch != '\n')
		cin.ignore(Limit, '#');

	cout << "get()�� ó���� ���ڿ��� �Է��Ͻʽÿ�:\n";
	cin.getline(input, Limit, '#');
	cout << "������ ���� �Է��ϼ̽��ϴ�:\n";
	cout << input << "\n2�ܰ� �Ϸ�\n";

	cin.get(ch);
	cout << "���� �Է� ���ڴ� " << ch << "�Դϴ�." << endl;

	return 0;
}*/



/*
//peeker.cpp 17-14 (1409pg)
int main()
{
	char ch;

	while (cin.get(ch)) //EOF���� ����
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
		cout << endl << ch << "�� ���� �Է� �����Դϴ�.\n";
	}
	else
	{
		cout << "���� ���� �����߽��ϴ�.\n";
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
		cout << endl << ch << "�� ���� �Է� �����Դϴ�.\n";
	}
	else
		cout << "���� ���� �����߽��ϴ�.\n";

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
	cout << "�̸��� �Է��Ͻʽÿ�: ";
	cin.get(name, SLEN);
	
	if (cin.peek() != '\n')
		cout << "�˼��մϴ�. �̸����� ���Ƽ� " << name << "�� ���� �־����ϴ�." << endl;
	
	eatline();
	cout << name << "��! ������ �Է��Ͻʽÿ�: \n";
	cin.get(title,SLEN);

	if (cin.peek() != '\n')
		cout << "���� �޺κ��� �߶����ϴ�.\n";
	eatline();
	cout << "�̸�: " << name << "\n����: " << title << endl;

	return 0;
}*/



/*
//fileio.cpp 17-16 (1416pg)
int main()
{
	string filename;

	cout << "�� ������ ���� �̸��� �Է��Ͻʽÿ�: ";
	cin >> filename;

	ofstream fout(filename.c_str());

	fout << "��й�ȣ ������ �����Ͻʽÿ�\n";
	fout << "��й�ȣ�� �Է��Ͻʽÿ�: ";
	float secret;
	cin >> secret;
	fout << "������ ��й�ȣ�� " << secret << "�Դϴ�.\n";
	fout.close();

	ifstream fin(filename.c_str());
	cout << filename << " ������ ������ ������ �����ϴ�.\n";
	char ch;
	while (fin.get(ch))
		cout << ch;
	cout << "���α׷��� �����մϴ�.\n";
	fin.close();

	return 0;
}*/



/*
//count.cpp 17-17 (1421pg)
int maia(int argc, char* argv[])
{
	if (argc == 1)
	{
		cerr << "����: " << argv[0] << " filename[s] \n";
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
			cerr << argv[file] << " ������ ���� �����ϴ�.\n";
			fin.clear();
			continue;
		}
		count=0;
		while (fin.get(ch))
			count++;
		cout << argv[file] << " ���Ͽ� ��� �ִ� ���� ���� " << count << "�Դϴ�.\n";
		total += count;
		fin.clear();
		fin.close();
	}
	cout << "��ü ���Ͽ� ��� �ִ� ���� ���� " << total << "�Դϴ�.\n";

	return 0;
}*/




//


