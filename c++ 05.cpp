#include "main.h"


/* forloop 5-1 (234pg)
int main()
{
	int i;
	for (i = 0; i < 5; i++)
	{
		cout << "c++�� ������ ����մϴ�.\n";
	}
	cout << "������ ���� ������ ���� c++�� �˰� �ֽ��ϴ�.";

	return 0;
}*/

/* num_test 5-2 (236pg)
int main()
{
	int limit;
	cout << "ī��Ʈ ���� ���� �Է��Ͻÿ�\n" <<">>> ";
	cin >> limit;
	int i;
	for (i = limit; i; i--) //���ǽĿ� i�� ���� i�� 0�̵Ǹ� �����Ѵ�.
		cout << "i = " << i << endl;

	cout << "i�� " << i << " �̹Ƿ� loop �����մϴ�.";

	return 0;
}*/

/* express 5-3 (239pg)
int main()
{
	int x;
	cout << "���� ǥ���� x = 100�� ���� ";
	cout << (x = 100) << endl;
	cout << "������ x�� ���� " << x << endl;
	cout << "���� ǥ���� x < 3�� ���� ";
	cout << (x < 3) << endl;
	cout << "���� ǥ���� x > 3�� ���� ";
	cout << (x > 3) << endl;
	cout.setf(ios_base::boolalpha);
	cout << "���� ǥ���� x < 3�� ���� ";
	cout << (x < 3) << endl;
	cout << "���� ǥ���� x > 3�� ���� ";
	cout << (x > 3) << endl;

	return 0;
}*/

/* formore 5-4 (243pg)
const int arsize = 16;
int main()
{
	long long factorials[arsize];
	factorials[1] = factorials[0]=1LL; //1�� int���� �ƴ� long long���� ó���Ѵٴ� ���̴�.
	for (int i = 2; i < arsize; i++)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i < arsize; i++)
		cout << i << "! = " << factorials[i] << endl;
	return 0;
}*/

/* bigstep 5-5 (246pg)
int main()
{
	cout << "������ �ϳ� �Է��Ͻʽÿ� : ";
	int by;
	cin >> by;
	cout << "���� ũ��" << by << "s:\n";
	for (int i = 0; i < 100; i = i + by)
		cout << i << endl;

	return 0;
}*/

/* forstr1 5-6 (247pg)
int main()
{
	cout << "�ܾ� �ϳ��� �Է��Ͻÿ� : ";
	string world;
	getline(cin, world);

	for (int i = world.size() - 1; i >= 0; i--)
		cout << world[i];

	cout << "\n����\n";
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
	cout << "�� 5���� ��� ���� ���մϴ�.\n";
	cout << "�� 5���� �Է��Ͻÿ�\n";
	double number;
	double sum = 0.0;
	for (int i = 1; i <= 5; i++)
	{
		cout << "�� " << i << ": ";
		cin >> number;
		sum += number;
	}
	cout << "�� 5���� ��� �ԷµǾ����ϴ�.\n";
	cout << "�Է��� 5�� ���� �հ��� " << sum << "�Դϴ�.\n";
	cout << "�Է��� 5�� ���� ����� " << sum/5 << "�Դϴ�.\n"<<"�����մϴ�.\n";

	return 0;
}*/

/* forstr2 5-9 (257pg)
int main()
{
	cout << "�ܾ� �ϳ��� �Է��Ͻÿ� : ";
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

	cout <<world<< "\n����\n";
	return 0;
}*/

/* equal 5-10 (262pg)
int main()
{
	int quizscores[10] = { 20,20,20,20,20,19,20,18,20,20 };

	cout << "�ùٸ� ���:\n";
	int i;
	for (i = 0; quizscores[i] == 20; i++)
		cout << i << "�� ������ ������ 20�Դϴ�\n";

	cout << "�߸��� ���:\n";

	for (i = 0; quizscores[i] = 20; i++)
		cout << i << "�� ������ ������ 20�Դϴ�\n";

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
	cout << "������ ���� �Ŀ� �ܾ�� " << world << "�Դϴ�.\n";

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
	cout << "������ ���� �Ŀ� �ܾ�� " << world << "�Դϴ�.\n";

	return 0;
}*/

/* while 5-13 (270pg)
const int arsize = 20;
int main()
{
	char name[arsize];

	cout << "���� �̸��� �Է��Ͻʽÿ�: ";
	cin >> name;
	cout << "������ ���� �̸��� �� �ٿ� �� �ھ�\n";
	int i = 0;
	while (name[i] != '\0')
	{
		cout << name[i] << ": " << int(name[i]) << endl;
		i++;
	}
	return 0;
}*/

/* waiting 5-14 (275)  @@@��ž��ġ@@@
int main()
{
	cout << "���� �ð��� �� ������ �Է��Ͻʽÿ�: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC; //���� �ð��� �ý��� ���� Ŭ�� ���� ��ȯ

	cout << "ī��Ʈ�� �����մϴ�.\a\n";
	clock_t start = clock();

	while (clock() - start < delay)
		;
	cout << "����\a\n";
	return 0;
}*/

/* dowhile 5-15 (278pg)
int main()
{
	int n;

	cout << "1���� 10������ �� �߿��� ";
	cout << "���� �����ϴ� ���� �ѹ� ���߾� ���ʽÿ�.\n";
	do
	{
		cin >> n;
	} while (n != 7);

	cout << "�½��ϴ�. ���� �����ϴ� ���� ��Ű ���� 7�Դϴ�.\n";

	return 0;
}*/

/* textin2 -17 (283pg)
int main()
{
	char ch;
	int count = 0;
	cout << "���ڿ��� �Է��Ͻÿ�; �������� #�� �Է��Ͻÿ�:\n";
	cin >> ch;

	while (ch != '#')
	{
		cout << ch;
		++count;
		cin >> ch;
	}
	cout << endl << count << " ���ڸ� �о����ϴ�. \n";
	return 0;
}*/

/* textin3 5-18 (287pg)
int main()
{
	char ch;
	int count = 0;
	cout << "���ڿ��� �Է��Ͻÿ�:\n";
	cin.get(ch);

	while (cin.fail() == false)
	{
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << " ���ڸ� �о����ϴ�. \n";
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
	cout << endl << count << " ���ڸ� �о����ϴ�. \n";
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

	cout << "2009����� 2012������� ���� �ְ� �µ�\n\n";
	for (int city = 0; city < cities; ++city)
	{
		cout << citie[city] << ":\t";
		for (int year = 0; year < years; ++year)
			cout << maxtemps[year][city] << "\t";
		cout<<endl;
	}
	return 0;
}*/

//��������

/* 1��
int main()
{
	cout << "�� ���� ������ �Է��� �ּ���\n" << ">>> ";
	int a, b;
	cin >> a >> b;
	int add = 0;
	for (int i = a; a <= b; a++)
	{
		add += a;
	}
	cout << "���� : " << add;

	return 0;
}*/

/* 2��
const int arsize = 16;
int main()
{
	array<long double, arsize>factorials;
	factorials[1] = factorials[0] = 1LL; //1�� int���� �ƴ� long long���� ó���Ѵٴ� ���̴�.
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

	cout << "�� ���� : " << add;

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
	cout << "����� ������ �����ұ��?\n>>> ";
	cin >> num;
	cin.ignore();
	car* a = new car[num];

	for (int i = 0; i < num; i++)
	{

		cout << "�ڵ��� #" << i + 1 << endl;
		cout << "���۾�ü : ";
		getline(cin, a[i].name);
		cout << "���۳⵵ : ";
		cin >> a[i].year;
		cin.ignore();
	}

	cout << "\n\n";
	for (int i = 0; i < num; i++)
	{
		cout << "�ڵ��� #" << i + 1 << endl;
		cout << "���۾�ü : "<< a[i].name<<endl;
		cout << "���۳⵵ : "<< a[i].year<<endl;
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
		cout << "�ܾ �Է��� �ּ��� (type 'done' to stop): ";
		cin >> input;

		for (char& c : input) {
			c = std::tolower(c);
		}

		if (input == "done") {
			break;
		}

		wordCount++;
	}

	cout << "�� �Է��� �ܾ�� : " << wordCount << std::endl;

	return 0;
}*/

/*
int main()
{
	cout << "����� �� ���� �Է��Ͻÿ� : ";
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

