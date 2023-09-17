#include "main.h"


/* if 6-1 (308pg)
int main()
{
	char ch;
	int spaces = 0;
	int total = 0;
	cin.get(ch);
	while (ch != '.')
	{
		if (ch == ' ')
			++spaces;
		++total;
		cin.get(ch);
	}
	cout << "�� ������ �� ���� ���� " << total << " �̰�, ";
	cout << "�� �߿��� ��ĭ�� " << spaces << "�� �Դϴ�.\n";

	return 0;
}*/

/* ifelse 6-2 (311pg)
int main()
{
	char ch;
	while (ch != '.')
	{
		if (ch == '\n')
			cout << ch;
		else
			cout << ++ch;
		cin.get(ch);
	}
	cout << "\nȥ�������� �ؼ� �˼��ϴϴ�.\n";

	return 0;
}*/

/* ifelseif 6-3 (314pg)
int main()
{
	int n;

	cout << "1���� 100���� �������� �ϳ��� ���� �˾Ƹ����� �����Դϴ�.\n";

	do
	{
		cout << ">>> ";
		cin >> n;
		if (n < 27)
			cout << "�װͺ��� Ů�ϴ�. : " << n << endl;
		else if(n>27)
			cout << "�װͺ��� �۽��ϴ�. : " << n << endl;
		else
			cout << "�����Դϴ�. : " << n;
	} while (n != 27);


	return 0;
}*/

/* or 6-4 (317pg)
int main()
{
	cout << "�� ���α׷��� �ϵ� ��ũ�� �ٽ� �����մϴ�\n"
			"�ϵ� ��ũ�� �ִ� ��� �����Ͱ� �������ϴ�.\n"
			"����Ͻðڽ��ϱ�? <Y/N>";

	char ch;
	cin >> ch;
	if (ch == 'y' || ch == 'Y')
		cout << "��ſ��� �и��� ��� �߽��ϴ�.\a\a\n";
	else if (ch == 'n' || ch == 'N')
		cout << "������ �����Դϴ�. ���α׷��� �����մϴ�.\n";
	else
		cout << "y�� n�� �Է����� �ʾҽ��ϴ�.\n"
				"���û����� ���� �� �����ϴ�."
				"�������� ���� ��ũ�� �����ϰڽ��ϴ�\n";

	return 0;
}*/

/* and 6-5 (319pg)
const int arsize = 6;
int main()
{
	float naaq[arsize];
	cout << "������� �������� �ڰ� ����(NAAQ)�� �Է��Ͻʽÿ�\n"
		<< arsize << "���� �����͸� ��� �Է��߰ų�, ������ �Է��ϸ�\n"
		<< "while ������ Ż���մϴ�.\n";

	int i = 0;
	float temp;
	cout << "ù ���� �� : ";
	cin >> temp;

	while (i<arsize && temp>=0)
	{
		naaq[i] = temp;
		++i;
		if (i < arsize)
		{
			cout << "�� ���� �� : ";
			cin >> temp;
		}
	}
	if (i == 0)
		cout << "�Է��� �����Ͱ� �����Ƿ� ���α׷��� �����մϴ�.\n";
	else
	{
		cout << "����� NAAQ�� �Է��Ͻÿ� : ";
		float you;
		cin >> you;
		int count = 0;

		for (int j = 0; j < i; j++)
			if (naaq[j] > you)
				++count;
		cout << "����� �߿��� " << count;
		cout << "���� ��ź��� NAAQ�� �����ϴ�.\n";
	}
	return 0;
}*/

/* more_and 6-6 (322pg)
const char* qualify[4] =
{
	"������ �޸���",
	"�𷡻��� ����",
	"��ġ �߸�",
	"�θ޶� ������"
};
int main()
{
	int age;
	cout << "���̸� �Է��Ͻʽÿ� : ";
	cin >> age;
	int index;

	if (age > 17 && age < 35)
		index = 0;
	else if (age >= 35 && age < 50)
		index = 1;
	else if (age >= 50 && age < 65)
		index = 2;
	else
		index = 3;

	cout << "����� " << qualify[index] << "�� ������ �� �ֽ��ϴ�.\n";
	return 0;
}*/

/* not 6-7 (324pg)
bool is_int(double);
int main()
{
	double num;

	cout << "������ ���� �ϳ� �Է��Ͻÿ� : ";
	cin >> num;

	while (!is_int(num))
	{
		cout << "int���� ������ �� ���� ���Դϴ�. �ٽ� �Է��Ͻʽÿ� : ";
		cin >> num;
	}
	int val = int(num);
	cout << "����� �Է��� ������ " << val << "�Դϴ�\n";

	return 0;
}
bool is_int(double x)
{
	if (x <= INT_MAX && x >= INT_MIN)
		return true;
	else
		return false;
}*/

/* cctypes 6-8 (328pg)
int main()
{
	cout << "�м��� �ؽ�Ʈ�� �Է��Ͻʽÿ�."
			"�Է��� ���� 0���� ǥ���Ͻʽÿ�.\n";

	char ch;
	int whitespace = 0, digits = 0, chars = 0,
		punct = 0, others = 0;

	cin.get(ch);
	while (ch != '@')
	{
		if (isalpha(ch)) //isalpha�� ���ĺ� ��ҹ��ڸ� Ȯ���Ѵ�.
			chars++;
		else if (isspace(ch))
			whitespace++;
		else if (isdigit(ch))
			digits++;
		else if (ispunct(ch))
			punct++;
		else
			others++;
		cin.get(ch);
	}
	cout << "���ĺ� ���� " << chars << ", "
		<< "ȭ��Ʈ�����̽� " << whitespace << ", "
		<< "���� " << digits << ", "
		<< "������ " << punct << ", "
		<< "��Ÿ " << others << endl;

	return 0;
}*/

/* condit 6-9 (331pg)
int main()
{
	int a, b;
	cout << "�� ���� ������ �Է��Ͻʽÿ� : ";
	cin >> a >> b;
	cout << "�� �߿��� �� ū ������ ";
	int c = a > b ? a : b; //a>b�̸� c=a, �׷��� ������ c=b
	cout << c << "�Դϴ�.\n";

	return 0;
}*/

/* switch 6-10 (334pg)
void showmenu();
void report();
void comport();
int main()
{
	showmenu();
	int choice;
	cin >> choice;
	while (choice != 5)
	{
		switch (choice)
		{
			case 1: cout << "\a\n";  break;

			case 2: report(); break;

			case 3: cout << "������� ���� ȸ�翡 ��̽��ϴ�.\n"; break;

			case 4: comport(); break;

			default: cout << "�װ��� ������ �� �����ϴ�.\n";
		}
		showmenu();
		cin >> choice;
	}
	cout << "���α׷��� �����մϴ�!\n";
	return 0;
}
void showmenu()
{
	cout << "1, 2, 3, 4, 5�� �߿��� �ϳ��� �����Ͻʽÿ�: \n"
			"1) �����	        2) ����\n"
			"3) �˸�����		4) �ݷ���\n"
			"5) ����\n";
}
void report()
{
	cout << "�̹� �б�� �濵 ������ ���� �����ϴ�.\n"
			"�Ǹŷ��� 120% �þ��, ����� 35% �ٿ����ϴ�.\n";
}
void comport()
{
	cout << "������� ����� ���� �ְ��� CEO��� �����ϰ� �ֽ��ϴ�.\n"
			"�̻�ȸ�� ����� ���� �ְ��� CEO��� �����ϰ� �ֽ��ϴ�.\n";
}*/

/* enum 6-11 (338pg) //enum : ����ü
enum {red, orange,yellow, green, blue, violet, indigo};
int main()
{
	cout << "�÷��ڵ� (1,2,3,4,5,6)�� �Է��Ͻʽÿ� : ";
	int code;
	cin >> code;

	while (code >= red && code <= indigo)
	{
		switch (code)
		{
			case red: cout << "�Լ��� �Ӿ����ϴ�.\n"; break;
			case orange: cout << "�Ӹ�ī���� �ֻ��̾����ϴ�.\n"; break;
			case yellow: cout << "�Ź��� ������̾����ϴ�..\n"; break;
			case green: cout << "������ �ʷϻ��̾����ϴ�.\n"; break;
			case blue: cout << "�����ʹ� �Ķ����̾����ϴ�.\n"; break;
			case violet: cout << "���� ������̾����ϴ�.\n"; break;
			case indigo: cout << "������� �ʺ��̾����ϴ�.\n"; break;
		}
		cout << "�÷��ڵ� (1,2,3,4,5,6)�� �Է��Ͻʽÿ� : ";
		cin >> code;
	}
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}*/

/* jump 6-12 (340pg)
const int arsize = 80;
int main()
{
	char line[arsize];
	int spaces = 0;

	cout << "�� ���� �ؽ�Ʈ�� �Է��Ͻʽÿ�:\n";
	cin.get(line, arsize);
	cout << "��ü �ؽ�Ʈ:\n" << line << endl;
	cout << "ù ��ħǥ������ �ؽ�Ʈ:\n";

	for (int i = 0; line[i] != '\0'; i++)
	{
		cout << line[i];
		if (line[i] == '.')
			break;
		if (line[i] != ' ')
			continue;
		spaces++;
	}
	cout << "\n��ĭ ���ڴ� " << spaces << "���Դϴ�.\n";
	cout << "����.\n";

	return 0;
}*/

/* cinfish 6-13 (344pg)
const int Max = 5;
int main()
{
	double fish[Max];
	cout << "���� ���� ������� ���Ը� �Է��Ͻʽÿ�.\n";
	cout << "������ �ִ� " << Max << "�������� ���� �� �ֽ��ϴ�.\n"
		<< "<�Է��� �������� q�� �����ʽÿ�.>\n";
	cout << "fish #1: ";
	int i = 0;
	while (i<Max && cin>>fish[i])
	{
		if (++i < Max)
			cout << "fish #" << i + 1 << ": ";
	}

	double total = 0.0;
	for (int j = 0; j < i; j++)
		total += fish[j];

	if (i == 0)
		cout << "����⸦ �� ������ ���� ���ϼ̱���.\n";
	else
		cout << "����� " << i << "������ ��� ���Դ� "
		<< total / i << "�׷��Դϴ�.\n";
	cout << "���α׷��� �����մϴ�.";

	return 0;
}*/

/* cingolf 6-14 (346pg)
const int Max = 5;
int main()
{
	int golf[Max];
	cout << "���� ������ �Է��Ͻʽÿ�.\n";
	cout << "�� " << Max << "���� ������ �Է��ؾ� �մϴ�.\n";
	int i;

	for (i = 0; i < Max; i++)
	{
		cout << "round #" << i + 1 << ": ";
		while (!(cin>>golf[i]))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "���� ������ �Է��Ͻʽÿ�: ";
		}
	}
	double total = 0.0;
	for (i = 0; i < Max; i++)
		total += golf[i];

	cout << "�� " << Max << "������ ��� ���� = "
		 << total / Max << endl;

	return 0;
}*/

/* outfile 6-15 (352pg) //ofstream ��� ���� ��Ʈ���̴�.
int main()
{
	char automobile[50];
	int year;
	double a_price;
	double b_price;

	ofstream outfile; //����� ���� ��ü ����
	outfile.open("carinfo.txt"); //���Ͽ� ����

	cout << "�ڵ��� ����Ŀ�� ������ �Է��Ͻÿ� : ";
	cin.getline(automobile, 50);
	cout << "������ �Է��Ͻÿ� : ";
	cin >> year;
	cout << "���� ������ �Է��Ͻÿ� : ";
	cin >> a_price;
	b_price = 0.913 * a_price;

	cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << "����Ŀ�� ���� " << automobile << endl;
	cout << "���� " << year << endl;
	cout << "���� ���� " << a_price << endl;
	cout << "���� ���� " << b_price << endl;

	outfile << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << "����Ŀ�� ���� " << automobile << endl;
	cout << "���� " << year << endl;
	cout << "���� ���� " << a_price << endl;
	cout << "���� ���� " << b_price << endl;

	outfile.close(); //���� ó�� ����
	return 0;
}*/

/* sumafile 6-16 (358pg) //iffile�� �Է� ���� ��Ʈ���̴�.
const int Size = 60;
int main()
{
	char filename[Size];
	ifstream infile;
	cout << "������ ������ �̸��� �Է��Ͻÿ�: ";
	cin.getline(filename, Size);
	infile.open(filename);

	if (!infile.is_open())
	{
		cout << filename << "������ �� �� �����ϴ�."<<endl;
		cout << "���α׷��� �����մϴ�.\n";
		exit(EXIT_FAILURE);
	}
	double value;
	double sum = 0.0;
	int count = 0;

	infile >> value;
	while (infile.goodbit()) //�Է��� ��ȣ�ϰ� EOF�� �ƴ� ����
	{
		++count;
		sum += value;
		infile >> value;
	}
	if (infile.eof())
		cout << "���Ͽ� ���� �����Ͽ����ϴ�.\n";
	else if (infile.fail())
		cout << "������ ����ġ�� �Է��� ����Ǿ����ϴ�.\n;";
	else
		cout << "�� �� ���� ������ ����Ǿ����ϴ�.\n";

	if (count == 0)
		cout << "�����Ͱ� �����ϴ�.\n";
	else
	{
		cout << "���� �׸��� ���� : " << count << endl;
		cout << "�հ� : " << sum << endl;
		cout << "��� : " << sum / count << endl;
	}
	infile.close();
	return 0;
}*/

//��������

/* 1��
int main() {
	char ch;

	// ����ڷκ��� ���ڸ� �Է¹ޱ� ���� �ȳ� ���� ���
	cout << "���ڸ� �Է��ϼ��� (�������� '@'�� �Է�): ";

	// ����ǥ('@') ���ڰ� ���� ������ ���ڸ� �ϳ��� �о��
	while (cin.get(ch) && ch != '@') {
		// �Էµ� ���ڰ� ���ĺ����� �˻�
		if (isalpha(ch)) {
			// �빮���� ��� �ҹ��ڷ� ��ȯ
			if (isupper(ch)) {
				ch = std::tolower(ch);
			}
			// �ҹ����� ��� �빮�ڷ� ��ȯ
			else {
				ch = std::toupper(ch);
			}
			// ��ȯ�� ���� ���
			std::cout << ch;
		}
		// �Էµ� ���ڰ� ���ĺ��� �ƴ϶�� �״�� ���
		else {
			std::cout << ch;
		}
	}

	// ������ ����� �� ���� ���� ���
	std::cout << std::endl;

	return 0;
}*/

/* 2��
int main()
{
	cout << "10���� ��б��� �Է��Ͻÿ�\n";
	int money[10], add=0;

	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << "#\n" << ">>> ";
		cin >> money[i];
		add += money[i];
	}
	int average = add / 10;
	cout << "��б� ��� : " << average <<endl;
	int count = 0;

	for (int i = 0; i < 10; i++)
	{
		if (money[i] >= average)
			count++;
	}
	cout << "��б��� ��պ��� ���� ����ڴ� " << count << "���Դϴ�.";
	return 0;
}*/

/* 3��
int main()
{
	cout << "���� ���� �߿��� �ϳ��� �����Ͻʽÿ� (�������� q)\n";
	cout << "c)camera		p)pianist\n"
		 << "t)tree			g)game\n"
		 << "q)����";

	char str;
	while (1)
	{
		cout << "\n>>> ";
		cin >> str;
		switch (str)
		{
		case 'c': cout << "camera�Դϴ�.\n"; continue;

		case 'p': cout << "pianist�Դϴ�.\n"; continue;

		case 't': cout << "tree�Դϴ�.\n"; continue;

		case 'g': cout << "game�Դϴ�.\n"; continue;

		case 'q': cout << "���α׷��� �����մϴ�.\n"; break;

		default:
			cout << "�ٽ� �Է��� �ּ���\n"; continue;
		}
		return 0;
	}
}*/

/* 4��
const int arsize = 100;
const int p = 5;
struct bop
{
	char fullname[arsize];
	char title[arsize];
	char bopname[arsize];
	int setting;
}a[p];
int main()
{
	a[0] = { "Mike","student","qwer",'0' };
	a[1] = { "Anddy","student","rtyu",'1' };
	a[2] = { "Tay","pro gamer","asdf",'2' };
	a[3] = { "Rody","doctor","zxc",'1' };
	a[4] = { "Mancho","trainer","poiu",'0' };

	cout << "Benevolent Order of progremers\n";
	cout << "a.�Ǹ����� ����		b.�������� ���� \n"
		 << "c.BOP ���̵�� ����	d.ȸ���� ������ ������ ���� \n"
		 << "q.����\n";
	char str;
	while (1)
	{
		cout << "\n>>> ";
		cin >> str;

		switch (str)
		{
		case 'a':
		case 'A':
		{
			for (int i = 0; i < p; i++)
			{
				cout << a[i].fullname << endl;
			}
			continue;
		}
		case 'b':
		case 'B':
		{
			for (int i = 0; i < p; i++)
			{
				cout << a[i].title << endl;
			}
			continue;
		}
		case 'c':
		case 'C':
		{
			for (int i = 0; i < p; i++)
			{
				cout << a[i].bopname << endl;
			}
			continue;
		}
		case 'd':
		case 'D':
		{
			for (int i = 0; i < p; i++)
			{
				switch (a[i].setting)
				{
				case '0': cout << a[i].fullname << endl; break;

				case '1': cout << a[i].title << endl; break;

				case '2': cout << a[i].bopname << endl; break;

				}
			}
			continue;
		}
		case 'q':
		case 'Q':
		{
			cout << "���α׷��� �����մϴ�.\n";
			break;
		}


		default: continue;

		}
	}
}*/

/* 5��
int main()
{
	cout << "��Ʈ�δϾ� �ձ��� ȯ�� ������ Ʈ���� �Դϴ�.\n"
		 << "0 ~ 5000 Ʈ���� : 0%\n"
		 << "5001 ~ 10000 Ʈ���� : 10%\n"
		 << "10001 ~ 20000 Ʈ���� : 15%\n"
		 << "35000 Ʈ���� : 20%\n";
	cout << "����� �ҵ��� �˷��ּ���\n" << "\n>>> ";

	int money = 0;
	cin >> money;

	double tax = 0.0;

	if (money > 35000) {
		tax += (5000 * 0.0) + (10000 * 0.10) + (20000 * 0.15) + (money - 35000) * 0.20;
	}
	else if (money > 20000) {
		tax += (5000 * 0.0) + (10000 * 0.10) + (money - 20000) * 0.15;
	}
	else if (money > 10000) {
		tax += (5000 * 0.0) + (money - 10000) * 0.10;
	}
	else if (money > 5000) {
		tax += (money - 5000) * 0.0;
	}

	cout << "����� ������" << tax << "�Դϴ�. \n";

	return 0;
}*/

/* 6��
struct giver
{
	string name;
	double give;
};
int main()
{
	cout << "����ڰ� ����ΰ���?\n" << ">>> ";
	int num,count1=0, count2 = 0;
	cin >> num;
	giver *a = new giver[num];
	cin.ignore();
	giver* max = new giver[num];
	giver* min = new giver[num];

	for (int i = 0; i < num; i++)
	{
		cout << i + 1 << "�� ����� �̸� : ";
		getline(cin, a[i].name);
		cout << i + 1 << "�� ����� ��αݾ� : ";
		cin >> a[i].give;
		cin.ignore();

		if (a[i].give >= 10000)
		{
			max[count1].name = a[i].name;
			max[count1].give = a[i].give;
			count1++;
		}
		else
		{
			min[count2].name = a[i].name;
			min[count2].give = a[i].give;
			count2++;
		}


		cout << "\n\n";
	}

	cout << "\n\n��� ����� "<<count1<<"���Դϴ�.\n";
	for (int i = 0; i < count1; i++)
	{
		cout<<"�̸� : "<<max[i].name;
		cout <<"| ��� �ݾ� : " << max[i].give<<endl;
	}
	cout << "\n\n";
	cout << "\n\n�Ҿ� ����� " << count2 << "���Դϴ�.\n";

	if (count2 > 0)
	{
		for (int i = 0; i < count2; i++)
		{
			cout << "�̸� : " << min[i].name;
			cout <<"| ��� �ݾ� : " << min[i].give<<endl;
		}
	}
	else
		cout << "����ڰ� �����ϴ�.\n";

	delete[] a, max, min;
	return 0;
}*/

/* 7��
int main() {
	int vowelsCount = 0;
	int consonantsCount = 0;
	std::string word;

	std::cout << "�ܾ �Է��ϼ���. 'q'�� �Է��ϸ� ����˴ϴ�.\n";

	while (true) {
		std::cout << "�ܾ �Է��ϼ���: ";
		std::cin >> word;

		// ������ ������ Ȯ���ϱ� ���� �ҹ��ڷ� ��ȯ
		for (char& c : word) {
			c = std::tolower(c);
		}

		// ����ڰ� �����ϱ� ���ϴ��� Ȯ��
		if (word == "q") {
			break;
		}

		// �ܾ ������� �ʰ�, ���ڷ� �����ϴ��� Ȯ��
		if (!word.empty() && std::isalpha(word[0])) {
			char firstChar = word[0];
			if (firstChar == 'a' || firstChar == 'e' || firstChar == 'i' || firstChar == 'o' || firstChar == 'u') {
				vowelsCount++;
			}
			else {
				consonantsCount++;
			}
		}
	}

	std::cout << "�������� �����ϴ� �ܾ� ����: " << vowelsCount << "\n";
	std::cout << "�������� �����ϴ� �ܾ� ����: " << consonantsCount << "\n";

	return 0;
}*/

/* 8��
int main() {
	std::ifstream infile;
	infile.open("main.txt");

	if (!infile) {
		cout << "������ �� �� �����ϴ�. ������ �����ϰ� ���� �������� Ȯ�����ּ���.\n";
		return 1;
	}

	string word;
	int wordCount = 0;

	while (infile >> word) { //string���� world�� �ܾ �޾Ƽ� ī��Ʈ �Ѵ�.
		// ���Ϸκ��� ���� �ܾ���� ����Ͽ� ���� ����
		wordCount++;
	}

	infile.close();

	cout << "���� ���� �ܾ� ����: " << wordCount << "\n";

	return 0;
}*/




