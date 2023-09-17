#include "main.h"


/*
//strngbad.h 12-1 (793pg)
class stringbad
{
private:
	char* str;
	int len;
	static int num_strings;
public:
	stringbad(const char* s);
	stringbad();
	~stringbad();
	friend std::ostream& operator<<(std::ostream& os, const stringbad& st);
};
//strnbad.cpp 12-2 (795pg)
int stringbad::num_strings = 0;
stringbad::stringbad(const char* s)
{
	len = strlen(s);
	str = new char[len + 1];
	strcpy_s(str,strlen(str),s);
	num_strings++;
	cout << num_strings << ": \"" << str
		<< "\" ��ü ����\n";
}
stringbad::stringbad()
{
	len = 4;
	str = new char[4];
	strcpy_s(str,strlen(str), "c++");
	num_strings++;
	cout << num_strings << ": \"" << str
		<< "\" ����Ʈ ��ü ����\n";
}
stringbad::~stringbad()
{
	cout << "\"" << str << "\" ��ü �ı�, ";
	--num_strings;
	cout << "���� ��ü ��: " << num_strings << "\n";
	delete[] str;
}
std::ostream& operator<<(std::ostream& os, const stringbad& st)
{
	os << st.str;
	return os;
}
//vegnews.cpp 12-3 (799pg)
void callme1(stringbad &); //������ ����
void callme2(stringbad); //���� ����

int main()
{
	using namespace std;
	{
		cout << "���� ����� �����Ѵ�.\n";
		stringbad headline1("Celery stalks at midnight");
		stringbad headline2("Lettuce prey");
		stringbad sports("spiach Leaves Bow for Dollars");
		cout << "headline1: " << headline1 << endl;
		cout << "headline2: " << headline2 << endl;
		cout << "sports: " << sports << endl;
		callme1(headline1);
		cout << "headline1: " << headline1 << endl;
		callme2(headline2);
		cout << "headline2: " << headline2 << endl;
		cout << "�ϳ��� ��ü�� �ٸ� ��ü�� �ʱ�ȭ:\n";
		stringbad sailor = sports;
		cout << "sailor: " << sailor << endl;
		cout << "�ϳ��� ��ü�� �ٸ� ��ü�� �ʱ�ȭ:\n";
		stringbad knot;
		knot = headline1;
		cout << "knot: " << knot << endl;
		cout << "�� ����� �������´�.\n";
	}
	cout << "main()�� ��\n";

	return 0;
}
void callme1(stringbad&rsb)
{
	cout << "������ ���޵� stringbad:\n";
	cout << "    \"" << rsb << "\"\n";
}
void callme2(stringbad sb)
{
	cout << "������ ���޵� stringbad:\n";
	cout << "    \"" << sb << "\"\n";
}*/


/*
//string1.h 12-4 (824pg)
class String
{
private:
	char* str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;
public:
	String(const char * s);
	String();
	String(const string & st);
	~String();
	int length() const { return len; }
	String& operator=(const string & st);
	String& operator=(const char * s);
	char& operator[](int i);
	const char& operator[] (int i) const;
	friend bool operator<(const string& st1, const string& st2);
	friend bool operator>(const string& st1, const string& st2);
	friend bool operator==(const string& st1, const string& st2);
	friend  ostream& operator<<(ostream & os,const string & st);
	friend  istream& operator>>(ostream& is, const string& st);
	static int HOWMANY();
};
//string1.cpp 12-5 (825pg)
int String::num_strings = 0;
int String::HOWMANY()
{
	return num_strings;
}
String::String(const char* s)
{
	len = strlen(s);
	str = new char[len + 1];
	strcpy_s(str,len+1,s);
	num_strings++;
}
String::String()
{
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}
String::String(const string & st)
{
	num_strings++;
	len = strlen(st);
	str = new char[len + 1];
	strcpy_s(str, len+1, st.str);
}
String::~String()
{
	--num_strings;
	delete[] str;
}
String& String::operator=(const string* st)
{
	if (this == &st)
		return *this;

	delete[] str;
	len = st.len;
	len = st.len;
	str = new char[len + 1];
	strcpy_s(str, len + 1, st.str);
	return *this;

}
String& String::operator=(const char* s)
{
	delete [] str;
	len = strlen(s);
	str = new char[len + 1];
	strcpy_s(str, len + 1, s);
	num_strings++;
	return *this;

}
char& String::operator[](int i)
{
	return str[i];
}
const char& String::operator[] (int i) const
{
	return str[i];
}
bool operator<(const string& st1, const string& st2)
{
	return (strcmp(st1.str, st2.str)<0)
}
bool operator>(const string& st1, const string& st2)
{
	return st2 < st1;
}
bool operator==(const string& st1, const string& st2)
{
	return (strcmp(st1.str, st2.str) == 0)
}
ostream& operator<<(ostream& os, const string& st)
{
	os << st.str;
	return os;
}
istream& operator>>(ostream& is, const string& st)
{
	char temp[CINLIM];
	if (is)
		st = temp;
	while (is && is.get() != '\n')
		continue;
	return is;
}
//sayings1.cpp 12-6 (828pg)
const int ARSIZE = 10;
const int MAXLEN = 81;
int main()
{
	string name;
	cout << "�ȳ��Ͻʴϱ�? ������ ��� �ǽʴϱ�\n>> ";
	cin >> name;

	cout << name << " �� ������ ���� �Ӵ� " << ARSIZE
		<< "���� �Է��� �ֽʽÿ�(�������� Enter):\n";
	string sayings[ARSIZE];
	char temp[MAXLEN];
	int i;
	for (i = 0; i < ARSIZE; i++)
	{
		cout << i + 1 << ": ";
		cin.get(temp, MAXLEN);
		while (cin && cin.get() != '\n')
			continue;
		if (!cin || temp[0] == '\0')
			break;
		else
			sayings[i] = temp;
	}
	int total = i;
	if (total > 0)
	{
		cout << "(������ ���� �Ӵ���� �Է��ϼ̽��ϴ�.)\n";
		for (i = 0; i < total; i++)
			cout << sayings[i][0] << ": " << sayings[i] << endl;

		int shortest = 0;
		int first = 0;

		for (i = 0; i < total; i++)
		{
			if (sayings[i].length() < sayings[shortest].length())
				shortest = i;
			if (sayings[i] < sayings[first])
				first = i;
		}
		cout << "���� ª�� �Ӵ�:\n" << sayings[shortest] << endl;
		cout << "���������� ���� �տ� ������ �Ӵ�:\n" << sayings[first] << endl;
		cout << "�� ���α׷��� " << String::HOWMANY()
			<< "���� String ��ü�� ����Ͽ����ϴ�. �̻�!\n";
	}
	else
		cout << "�Է� ����! �̻�.\n";
	return 0;
}*/


/*
//saying2.cpp 12-7 (840pg)
const int ARSIZE = 10;
const int MAXLEN = 81;
int main()
{
	string name;
	cout << "�ȳ��Ͻʴϱ�? ������ ��� �ǽʴϱ�\n>> ";
	cin >> name;

	cout << name << " �� ������ ���� �Ӵ� " << ARSIZE
		<< "���� �Է��� �ֽʽÿ�(�������� Enter):\n";
	string sayings[ARSIZE];
	char temp[MAXLEN];
	int i;
	for (i = 0; i < ARSIZE; i++)
	{
		cout << i + 1 << ": ";
		cin.get(temp, MAXLEN);
		while (cin && cin.get() != '\n')
			continue;
		if (!cin || temp[0] == '\0')
			break;
		else
			sayings[i] = temp;
	}
	int total = i;
	if (total > 0)
	{
		cout << "(������ ���� �Ӵ���� �Է��ϼ̽��ϴ�.)\n";
		for (i = 0; i < total; i++)
			cout << sayings[i] << endl;

		string* shortest = &sayings[0];
		string * first = &sayings[0];

		for (i = 1; i < total; i++)
		{
			if (sayings[i].length() < shortest->length())
				shortest = &sayings[i];
			if (sayings[i] < *first)
				first = &sayings[i];
		}
		cout << "���� ª�� �Ӵ�:\n" << *shortest << endl;
		cout << "���������� ���� �տ� ������ �Ӵ�:\n" << *first << endl;
		srand(time(0)); int choise = rand() % total;
		string* favorite = new string(sayings[choise]);
		cout << "���� ���� �����ϴ� �Ӵ�:\n" << *favorite << endl;
		delete favorite;
	}
	else
		cout << "�˰� �ִ� �Ӵ��� �ϳ��� �����?\n";
	cout<<"���α׷��� �����մϴ�.\n";
	return 0;
}*/


/* placenew1.cpp 12-8 (847pg)
const int BUF = 512;
class justtesting
{
private:
	string words;
	int number;
public:
	justtesting(const string& s = "Just Testing", int n = 0)
	{ words = s; number = n; cout << words << " ����\n"; }
	~justtesting() { cout << words << " �ı�\n"; }
	void show() const { cout << words << ", " << number << endl; }
};
int main()
{
	char* buffer = new char[BUF];

	justtesting* pc1, pc2;

	pc1 = new (buffer) justtesting;
	pc2 = new justtesting("Heapl",20);

	cout << "�޸� ��� �ּ�:\n" << "buffer: "
		<< (void*)buffer << "    heap: " << pc2 << endl;
	cout << "�޸� ����:\n";
	cout << pc1 << ": ";
	pc1->show();
	cout << pc2 << ": ";
	pc2->show();

	justtesting* pc3, pc4;

	pc1 = new (buffer) justtesting("bad idea",6);
	pc2 = new justtesting("Heapl2", 10);

	cout << "�޸� ��� �ּ�:\n" << "buffer: "
		<< (void*)buffer << "    heap: " << pc3 << endl;
	cout << "�޸� ����:\n";
	cout << pc1 << ": ";
	pc3->show();
	cout << pc4 << ": ";
	pc4->show();

	delete pc2;
	delete pc4;
	delete[] buffer;
	cout << "����\n";
	return 0;
}*/



/*
//placenew2 12-9 (851pg)
const int BUF = 512;
class justtesting
{
private:
	string words;
	int number;
public:
	justtesting(const string& s = "Just Testing", int n = 0)
	{
		words = s; number = n; cout << words << " ����\n";
	}
	~justtesting() { cout << words << " �ı�\n"; }
	void show() const { cout << words << ", " << number << endl; }
};
int main()
{
	char* buffer = new char[BUF];

	justtesting * pc1, pc2;

	pc1 = new (buffer) justtesting;
	pc2 = new justtesting("Heapl", 20);

	cout << "�޸� ��� �ּ�:\n" << "buffer: "
		<< (void*)buffer << "    heap: " << pc2 << endl;
	cout << "�޸� ����:\n";
	cout << pc1 << ": ";
	pc1->show();
	cout << pc2 << ": ";
	pc2->show();

	justtesting* pc3, pc4;

	pc1 = new (buffer) justtesting("bad idea", 6);
	pc2 = new justtesting("Heapl2", 10);

	cout << "�޸� ��� �ּ�:\n" << "buffer: "
		<< (void*)buffer << "    heap: " << pc3 << endl;
	cout << "�޸� ����:\n";
	cout << pc3 << ": ";
	pc3->show();
	cout << pc4 << ": ";
	pc4->show();

	delete pc2;
	delete pc4;
	pc3->~justtesting();
	pc1->~justtesting();
	delete[] buffer;
	cout << "����\n";
	return 0;
}*/


/*
//queue.h 12-10 (871pg)
class customer
{
private:
	long arrive;
	int processtime;
public:
	customer() { arrive = processtime = 0; }
	void set(long when);
	long when() const { return arrive; }
	int ptime() const { return processtime; }
};
typedef customer Item;

class queue
{
	struct Node{Item item; struct Node* next;};
	enum { Q_size = 10 };
	Node* front;
	Node* rear;
	int items;
	const int qsize;
	queue(const queue& q) : qsize(0){ }
	queue& operator=(const queue& q) { return *this; }
public:
	queue(int qs = Q_size);
	~queue();
	bool isempty() const;
	bool isfull() const;
	int queuecount() const;
	bool enqueue(const Item& item);
	bool dequeue(Item& item);
};
//queue.cpp 12-11 (872pg)
queue::queue(int qs) : qsize(qs)
{
	front = rear = NULL;
	items = 0;
}
queue::~queue()
{
	Node* temp;
	while (front != NULL)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}
bool queue::isempty() const
{
	return items == 0;
}
bool queue::isfull() const
{
	return items == qsize;
}
int queue::queuecount() const
{
	return items;
}
bool queue::enqueue(const Item& item)
{
	if (isfull())
		return false;
	Node* add = new Node;
	add->item = item;
	add->next = nullptr;
	items++;
	if (front == NULL)
		front = add;
	else
		rear->next = add;
	rear = add;
	return true;
}
bool queue::dequeue(Item& item)
{
	if (front == NULL)
		return false;
	item = front -> item;
	items--;
	Node* temp = front;
	front = front->next;
	delete temp;
	if (items == 0)
		rear = NULL;
	return true;
}
void customer::set(long when)
{
	processtime = rand() % 3 + 1;
	arrive = when;
}
//bank.cpp 12-12 (875pg)
const int MIN_PER_HR = 60;

bool newcustomer(double x);

int main()
{
	srand(time(0));
	cout << "��� ���� : �ϼ� ������ ATM\n";
	cout << "ť�� �ִ� ���̸� �Է��Ͻÿ� : ";
	int qs;
	cin >> qs;
	queue line(qs);

	cout << "�ùķ��̼� �ð� ���� �Է��Ͻʽÿ� : ";
	int hours;
	cin >> hours;
	long cyclelimit = MIN_PER_HR * hours;
	cout << "�ð��� ��� �� ���� �Է��Ͻÿ� : ";
	double perhour;
	cin >> perhour;
	double min_per_cust = MIN_PER_HR / perhour;

	Item temp;
	long turnaways = 0, customer = 0, served = 0;
	long sum_line = 0, line_wait = 0;
	int wait_time = 0;

	for (int cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_cust))
		{
			if (line.isfull())
				turnaways++;
			else
			{
				customer++;
				temp.set(cycle);
				line.enqueue(temp);
			}
		}
		if (wait_time <= 0 && !line.isempty())
		{
			line.dequeue(temp);
			wait_time = temp.ptime();
			line_wait += cycle - temp.when();
			served++;
		}
		if (wait_time > 0)
			wait_time--;
		sum_line += line.queuecount();
	}
	if (customer > 0)
	{
		cout << "ť�� ���� �� �� �� : " << customer << endl;
		cout << "�ŷ��� ó���� �� �� : " << served << endl;
		cout << "�߱��� ���� �� �� : " << turnaways << endl;
		cout << "     ��� ť�� ���� : ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout.setf(ios_base::showpoint);
		cout << (double)sum_line / cyclelimit << endl;
		cout << "     ��� ��� �ð� : " << (double)line_wait / served << "��\n";
	}
	else
		cout << "���� �� �� �����ϴ�!\n";
	cout << "�Ϸ�!\n";

	return 0;
}
bool newcustomer(double x)
{
	return (rand() * x / RAND_MAX <1)
}*/





