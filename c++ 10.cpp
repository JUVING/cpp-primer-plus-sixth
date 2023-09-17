#include "main.h"


/*
 //stock00.h 10-1 (639pg)
class stock
{
private:
	string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	void acquire(const string & co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};
//stock00.cpp 10-2 (645pg)
void stock::acquire(const string& co, long n, double pr)
{
	company = co;
	if (n < 0)
	{
		cout << "�ֽ� ���� ������ �� �� �����Ƿ�, "
			<< company << " shares�� 0���� �����մϴ�. \n";
		shares = 0;
	}
	else
		shares = n;

	share_val = pr;
	set_tot();
}
void stock::buy(long num, double price)
{
	if (num < 0)
	{
		cout << "���� �ֽ� ���� ������ �� �� �����Ƿ�, "
			<< "�ŷ��� ��ҵǾ����ϴ�.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();

	}
}
void stock::sell(long num, double price)
{
	if (num < 0)
	{
		cout << "���� �ֽ� ���� ������ �� �� �����Ƿ�, "
			<< "�ŷ��� ��ҵǾ����ϴ�.\n";
	}
	else if (num > shares)
	{
		cout << "���� �ֽĺ��� ���� �ֽ��� �ŵ��� �� �����Ƿ�, "
			<< "�ŷ��� ��ҵǾ����ϴ�.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}
void stock::update(double price)
{
	share_val = price;
	set_tot();
}
void stock::show()
{
	cout << "ȸ��� : " << company
		<< "�ֽ� �� : " << shares << '\n'
		<< "�ְ� : " << share_val
		<< "�ֽ� �� ��ġ : " << total_val << '\n';
}
//usesock0 10-2 (651pg)
int main()
{
	stock fluffy_the_cat;
	fluffy_the_cat.acquire("Nanosmart", 20, 12.50);
	fluffy_the_cat.show();
	fluffy_the_cat.buy(15, 18.125);
	fluffy_the_cat.show();
	fluffy_the_cat.sell(400,20.00);
	fluffy_the_cat.show();
	fluffy_the_cat.buy(300000, 40.125);
	fluffy_the_cat.show();
	fluffy_the_cat.sell(300000, 0.125);
	fluffy_the_cat.show();

	return 0;
}*/


/*
//stock10.h 10-4 (664pg)
class stock
{
private:
	string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	stock(); //������
	stock(const string& co, long n = 0, double pr = 0.0);
	~stock(); //�ı���
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};
stock::stock()
{
	cout << "����Ʈ �����ڰ� ȣ��Ǿ����ϴ�\n";
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}
//stock10.cpp 10-5 (665pg)
stock::stock(const string& co, long n, double pr)
{
	cout << co << "�� ����ϴ� �����ڰ� ȣ��Ǿ����ϴ�.\n";
	company = co;
	if (n < 0)
	{
		cerr << "�ֽ� ���� ������ �� �� �����Ƿ�, "
			<< company << " shares�� 0���� �����մϴ�.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}
stock::~stock()
{
	cout << "�ȳ� " << company << "!\n";
}
void stock::buy(long num, double price)
{
	if (num < 0)
	{
		cout << "���� �ֽ� ���� ������ �� �� �����Ƿ�, "
			 << "�ŷ��� ��� �Ǿ����ϴ�.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}
void stock::sell(long num, double price)
{
	if (num < 0)
	{
		cout << "���� �ֽ� ���� ������ �� �� �����Ƿ�, "
			<< "�ŷ��� ��� �Ǿ����ϴ�.\n";
	}
	else if(num>shares)
	{
		cout << "������ �ֽĺ��� ���� �ֽ��� �ŵ��� �� �����Ƿ�, "
			<< "�ŷ��� ��ҵǾ����ϴ�.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}
void stock::update(double price)
{
	share_val = price;
	set_tot();
}
void stock::show()
{
	ios_base::fmtflags orig =
		cout.setf(ios_base::fixed,ios_base::floatfield);
	streamsize prec = cout.precision(3);

	cout << "ȸ���: " << company
		<< " �ֽ� ��:" << shares << '\n';
	cout << " �ְ�: $" << share_val;
	cout.precision(2);
	cout << " �ֽ� �� ��ġ: $" << total_val << '\n';

	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}
//usesock01.cpp 10-6 (668pg)
int main()
{
	{
		cout << "�����ڸ� ����Ͽ� ���ο� ��ü���� �����Ѵ�.\n";
		stock stock1("Namosmart", 12, 20.0);
		stock1.show();

		stock stock2 = stock("Boffo objects", 2, 2.0);
		stock2.show();

		cout << "stock1�� stock2�� �����Ѵ�.\n";
		stock2 = stock1;
		cout << "stock1�� stock2�� ����Ѵ�.\n";
		stock1.show();
		stock2.show();

		cout << "�����ڸ� ����Ͽ� ��ü�� �缳���Ѵ�.\n";
		stock1 = stock("Nifty Foods", 10, 50.0);
		cout << "���ŵ� stock1;\n";
		stock1.show();
		cout << "���α׷��� �����մϴ�.\n";
	}
	return 0;
}*/


/*
//stock20.h 10-7 (681pg)
class stock
{
private:
	string company;
	int shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	stock(); //������
	stock(const string& co, long n = 0, double pr = 0.0);
	~stock(); //�ı���
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show() const;
	const stock& topval(const stock& s) const;
};
//stock20 10-8 (682pg)
stock::stock()
{
	cout << "����Ʈ �����ڰ� ȣ��Ǿ����ϴ�\n";
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}
stock::stock(const string& co, long n, double pr)
{
	cout << co << "�� ����ϴ� �����ڰ� ȣ��Ǿ����ϴ�.\n";
	company = co;
	if (n < 0)
	{
		cerr << "�ֽ� ���� ������ �� �� �����Ƿ�, "
			<< company << " shares�� 0���� �����մϴ�.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}
stock::~stock()
{
	cout << "�ȳ� " << company << "!\n";
}
void stock::buy(long num, double price)
{
	if (num < 0)
	{
		cout << "���� �ֽ� ���� ������ �� �� �����Ƿ�, "
			<< "�ŷ��� ��� �Ǿ����ϴ�.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}
void stock::sell(long num, double price)
{
	if (num < 0)
	{
		cout << "���� �ֽ� ���� ������ �� �� �����Ƿ�, "
			<< "�ŷ��� ��� �Ǿ����ϴ�.\n";
	}
	else if (num > shares)
	{
		cout << "������ �ֽĺ��� ���� �ֽ��� �ŵ��� �� �����Ƿ�, "
			<< "�ŷ��� ��ҵǾ����ϴ�.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}
void stock::update(double price)
{
	share_val = price;
	set_tot();
}
void stock::show() const
{
	ios_base::fmtflags orig =
		cout.setf(ios_base::fixed, ios_base::floatfield);
	streamsize prec = cout.precision(3);

	cout << "ȸ���: " << company
		<< " �ֽ� ��:" << shares << '\n';
	cout << " �ְ�: $" << share_val;
	cout.precision(2);
	cout << " �ֽ� �� ��ġ: $" << total_val << '\n';

	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}
const stock& stock::topval(const stock& s) const
{
	if (s.total_val > total_val) return s;
	else return *this;
}
//usestock2.cpp 10-9 (686pg)
const int stks = 4;
int main()
{
	stock stocks[stks] =
	{
		stock("Nanosmart",12,20.0),
		stock("Baffo objects",200,2.0),
		stock("Monolithic obelisks",130, 3.25),
		stock("Fleep Enterprises",60, 6.5)
	};
	cout << "���� �ֽ� ����Ʈ:\n";
	int st;
	for (st = 0; st < stks; st++)
		stocks[st].show();

	const stock* top = &stocks[0];

	for (st = 1; st < stks; st++)
		top = &top->topval(stocks[st]);

	cout << "\n�ְ� ��ġ�� �ֽ�:\n";
	top->show();
	return 0;
}*/


/*
//stack.h 10-10 (695pg)
typedef unsigned long item;
class stock
{
private:
	enum{max=10};
	item items[max];
	int top;
public:
	stock();
	bool isempty()const;
	bool isfull() const;
	bool push(const item& items);
	bool pop(item & items);
};
//stack.cpp 10-11 (696pg)
stock::stock()
{
	top = 0;
}
bool stock::isempty()const
{
	return top == 0;
}
bool stock::isfull() const
{
	return top == max;
}
bool stock::push(const item& items)
{
	if (top < max)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}
bool stock::pop(item& items)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}
//stacker.cpp 10-12 (697pg)
int main()
{
	stack st;
	char ch;
	unsigned long po;
	cout << "�ֹ����� �߰��Ϸ��� A, �ֹ����� ó���Ϸ��� P,\n"
		<< "�����Ϸ��� Q�� �Է��Ͻʽÿ�.\n";
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'a':cout << "�߰��� �ֹ����� ��ȣ�� �Է��Ͻʽÿ�: ";
			cin >> po;
			if (st.isfull())
				cout << "������ ���� �� �ֽ��ϴ�.\n";
			else
				st.push(po);
			break;
		case 'P' :
		case 'p': if (st.isempty())
			cout << "������ ��� �ֽ��ϴ�.\n";
				else
				{
					st.pop(po);
					cout << "#" << po << " �ֹ����� ó�� �߽��ϴ�.\n";
				}
				break;
		}
		cout << "�ֹ����� �߰��Ϸ��� A, �ֹ����� ó���Ϸ��� P,\n"
			<< "�����Ϸ��� Q�� �Է��Ͻʽÿ�.\n";
	}
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}*/



//��������




