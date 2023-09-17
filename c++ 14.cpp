#include "main.h"




/*
//studentc.h 14-1 (998pg)
class student
{
private:
	typedef valarray<double> ArrayDb;
	string name;
	ArrayDb scores;
	ostream& arr_out(ostream& os) const;
public:
	student() : name("null student"), scores() {}
	explicit student(string& s) : name(s), scores() {}
	explicit student(int n) : name("nully"), scores(n) {}
	student(string& s, int n) : name(s), scores(n) {}
	student(string& s, const ArrayDb& a) : name(s), scores(a) {}
	student(const char* str, const double* pd, int n) : name(str), scores(pd, n) {}
	~student() {}
	double Average() const;
	const string& Name() const;
	double& operator[](int i);
	double operator[](int i) const;

	friend istream& operator>>(istream& is, student& stu);
	friend istream& getline(istream& is, student& stu);
	friend ostream& operator<<(ostream& os, const student& stu);
};
//studentc.cpp 14-2 (1003pg)
double student::Average() const
{
	if (scores.size() > 0)
		return scores.sum() / scores.size();
	else
		return 0;
}
const string& student::Name() const
{
	return name;
}
double& student::operator[](int i)
{
	return scores[i];
}
double student::operator[](int i) const
{
	return scores[i];
}
ostream& student::arr_out(ostream& os) const
{
	int i;
	int lim = scores.size();

	if (lim > 0)
	{
		for (i = 0; i < lim; i++)
		{
			os << scores[i] << " ";
			if (i % 5 == 4)
				os << endl;
		}
		if (i % 5 != 0)
			os << endl;
	}
	else
		os << endl;

	return os;
}
istream& operator>>(istream& is, student& stu)
{
	is >> stu.name;
	return is;
}
istream& getline(istream& is, student& stu)
{
	getline(is, stu.name);
	return is;
}
ostream& operator<<(ostream& os, const student& stu)
{
	os << stu.name << "�л��� ����ǥ : \n";
	stu.arr_out(os);
	return os;
}
//use_stuc.cpp 14-3 (1006pg)
void set(student& sa, int n);
const int pupils = 3;
const int quizzes = 5;

int main()
{
	student ada[pupils] = { student(quizzes),student(quizzes) ,student(quizzes) };

	int i;
	for (i = 0; i < pupils; i++)
		set(ada[i], quizzes);
	cout << "\n�л� ����Ʈ:\n";
	for (i = 0; i < pupils; i++)
		cout << ada[i].Name() << endl;
	cout << "\n���� ���:";
	for (i = 0; i < pupils; i++)
	{
		cout << endl << ada[i];
		cout << "��� : " << ada[i].Average() << endl;
	}
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}
void set(student& sa, int n)
{
	cout << "�л��� �̸��� �Է��Ͻʽÿ� : ";
	getline(cin,sa);
	cout << n << "ȸ�� ��ģ ���� ������ ��� �Է��Ͻʽÿ�:\n";
	for (int i = 0; i < n; i++)
		cin >> sa[i];
	while (cin.get() != '\n')
		continue;
}*/


/*
//studenti.h 14-4 (1010pg)
class student : private string, private valarray<double>
{
private:
	typedef valarray<double> ArrayDb;
	ostream& arr_out(ostream& os)const;
public:
	student() : string("Null student"),ArrayDb(){}
	explicit student(const string & s) : string (s),ArrayDb(){}
	explicit student(int n) : string ("Nully") , ArrayDb(n) {}
	student(const string& s, int n) : string(s), ArrayDb(n){}
	student(const string& s, ArrayDb & a) : string(s), ArrayDb(a) {}
	student(const char * str, const double * pd, int n) : string(str), ArrayDb(pd, n){}
	~student(){}
	double Average() const;
	double& operator[] (int i);
	double operator[] (int i) const;
	const string& Name() const;

	friend istream& operator>> (istream& is, student& stu);
	friend istream& getline (istream& is, student& stu);
	friend ostream& operator<< (ostream& is, student& stu);
};
//studenti.cpp 14-5 (1014pg)
double student::Average() const
{
	if (ArrayDb::size() > 0)
		return ArrayDb::sum() / ArrayDb::size();
	else
		return 0;
}
double& student::operator[] (int i)
{
	return  ArrayDb::operator[](i);
}
double student::operator[] (int i) const
{
	return  ArrayDb::operator[](i);
}
const string& student::Name() const
{
	return (const string&)*this;
}
ostream& student::arr_out(ostream& os)const
{
	int i;
	int lim = ArrayDb::size();

	if (lim > 0)
	{
		for (i = 0; i < lim; i++)
		{
			os << ArrayDb::operator[](i) << " ";
			if (i % 5 == 4)
				os << endl;
		}
		if (i % 5 != 0)
			os << endl;
	}
	else
		os << " ��迭 ";
	return os;
}
istream& operator>> (istream& is, student& stu)
{
	is >> (string&)stu;
	return is;
}
istream& getline(istream& is, student& stu)
{
	getline(is, (string&)stu);
	return is;
}
ostream& operator<< (ostream& os, student& stu)
{
	os<< "Scores for " << (const string&)stu << ": \n";
	stu.arr_out(os);
	return os;
}
//use_stui.cpp 14-6 (1016pg)
void set(student& sa, int n);
const int pupils = 3;
const int quizzes = 5;

int main()
{
	student ada[pupils] = { student(quizzes),student(quizzes) ,student(quizzes) };

	int i;
	for (i = 0; i < pupils; i++)
		set(ada[i], quizzes);
	cout << "\n�л� ����Ʈ:\n";
	for (i = 0; i < pupils; i++)
		cout << ada[i].Name() << endl;
	cout << "\n���� ���:";
	for (i = 0; i < pupils; i++)
	{
		cout << endl << ada[i];
		cout << "��� : " << ada[i].Average() << endl;
	}
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}
void set(student& sa, int n)
{
	cout << "�л��� �̸��� �Է��Ͻʽÿ� : ";
	cin >> sa;
	cout << n << "ȸ�� ��ģ ���� ������ ��� �Է��Ͻʽÿ�:\n";
	for (int i = 0; i < n; i++)
		cin >> sa[i];
	while (cin.get() != '\n')
		continue;
}*/


/*
class worker
{
private:
	string fullname;
	long id;
public:
	worker() : fullname("no name"), id(0L) {}
	worker(const string& s, long n) : fullname(s), id(n) {}
	virtual ~worker() = 0;
	virtual void set();
	virtual void show() const;
};

class waiter : public worker
{
private:
	int panache;
public:
	waiter(): worker(), panache(0){}
	waiter(const string & s, long n,int p=0) : worker(s, n),panache(p) {}
	waiter(const worker & wk,int p=0) : worker(wk),panache(p) {}
	void set();
	void show() const;
};

class singer : public worker
{
protected:
	enum{other, alto, contralto, soprano,bass,baritone,tenor};
	enum{Vtype = 7};
private:
	static char *pv[Vtype];
	int voice;
public:
	singer() : worker(), voice(other) {}
	singer(const string & s, long n, int v=other) : worker(s, n), voice(v) {}
	singer(const worker & wk, int v= other) : worker(wk), voice(v) {}
	void set();
	void show() const;
};
//worker0.cpp 14-8 (1025pg)
worker:: ~worker() {}
void worker::set()
{
	cout << "��� �̸��� �Է��Ͻʽÿ�: ";
	getline(cin, fullname);
	cout << "��� ��ȣ�� �Է��Ͻʽÿ�: ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}
void worker::show() const
{
	cout << "��� �̸�: " << fullname << '\n';
	cout << "��� ��ȣ: " << id << '\n';
}
void waiter::set()
{
	worker::set();
	cout << "������ ����� �Է��Ͻʽÿ�: ";
	cin >> panache;
	while (cin.get() != '\n')
		continue;
}
void waiter::show() const
{
	cout << "����: ������\n";
	worker::show();
	cout << "������ ���: " << panache << '\n';
}
//char * singer::pv[] = { "other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};
void singer::set()
{
	worker::set();
	cout << "���� ��Ҷ� ������ ��ȣ�� �Է��� �ּ���::\n";
	int i;
	for (i = 0; i < Vtype; i++)
	{
		cout << i << ": " << pv[i] << " ";
		if (i % 4 == 3)
			cout<<endl;
	}
	if (i % 4 != 0)
		cout<<endl;
	while (cin >> voice && (voice < 0 || voice >= Vtype))
		cout << "0���� ũ�ų� ���� " << Vtype << "���� ���� ���� �Է��Ͻʽÿ�." << endl;

	while (cin.get() != '\w')
		continue;
}
void singer::show() const
{
	cout << "����: ����\n";
	worker::show();
	cout << "��Ҹ� ����: " << pv[voice] << endl;
}
//worktest.cpp 14-9 (1027pg)
const int Lim = 4;
int main()
{
	waiter bob("ȫ�浿", 314L, 5);
	singer bev("������", 522L, 3);

	waiter w_tmep;
	singer s_temp;

	worker* pw[Lim] = { &bob,&bev,&w_tmep,&s_temp };

	int i;
	for (i = 2; i < Lim; i++)
	{
		pw[i]->show();
		cout << endl;
	}
	return 0;
}*/




/*
//workermi.h
class worker
{
private:
	string fullname;
	long id;
protected:
	virtual void Data() const;
	virtual void Get();
public:
	worker() : fullname("no name"), id(0L) {}
	worker(const string& s, long n) : fullname(s), id(n) {}
	virtual ~worker() = 0;
	virtual void set() = 0;
	virtual void show() const = 0;
};

class waiter : virtual public worker
{
private:
	int panache;
protected:
	void Data() const;
	void Get();
public:
	waiter() : worker(), panache(0) {}
	waiter(const string& s, long n, int p = 0) : worker(s, n), panache(p) {}
	waiter(const worker& wk, int p = 0) : worker(wk), panache(p) {}
	void set();
	void show() const;
};

class singer : virtual public worker
{
protected:
	enum { other, alto, contralto, soprano, bass, baritone, tenor };
	enum { Vtype = 7 };
	void Data() const;
	void Get();
private:
	static char* pv[Vtype];
	int voice;
public:
	singer() : worker(), voice(other) {}
	singer(const string& s, long n, int v = other) : worker(s, n), voice(v) {}
	singer(const worker& wk, int v = other) : worker(wk), voice(v) {}
	void set();
	void show() const;
};
class singingwaiter : public singer, public waiter
{
protected:
	void Data() const;
	void Get();
public:
	singingwaiter() {}
	singingwaiter(const string & s, long n,int p=0, int v = other) : worker(s,n), waiter(s,n,p),singer(s,n,v) {}
	singingwaiter(const worker & wk,int p=0,int v = other) : worker(wk),waiter(wk,p),singer(wk,v) {}
	singingwaiter(const worker& wt, int v = other) : worker(wt), waiter(wt), singer(wt, v) {}
	singingwaiter(const worker& wt, int p = 0) : worker(wt), waiter(wt, p), singer(wt, p) {}
	void set();
	void show() const;
};
//workermi.cpp 14-11 (1040pg)
worker:: ~worker() {}
void worker::Data() const
{
	cout << "��� �̸�: " << fullname << '\n';
	cout << "��� ��ȣ: " << id << '\n';
}
void worker::Get()
{
	cout << "��� �̸��� �Է��Ͻʽÿ�: ";
	getline(cin, fullname);
	cout << "��� ��ȣ�� �Է��Ͻʽÿ�: ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}
void waiter::set()
{
	cout << "������ �̸��� �Է��Ͻʽÿ�: ";
	worker::Get();
	Get();
}
void waiter::show() const
{
	cout << "����: ������\n";
	worker::Data();
	Data();
}
void waiter::Data() const
{
	cout << "������ ���: " << panache << endl;
}
void waiter::Get()
{
	cout << "������ ����� �Է��Ͻʽÿ�: ";
	cin >> panache;
	while (cin.get() != '\n')
		continue;

}
//char* singer::pv[singer::Vtype] = { "other", "alto", "contralto", "soprano", "bass", "baritone", "tenor" };
void singer::set()
{
	cout << "������ �̸��� �Է��Ͻʽÿ�: ";
	singer::Get();
	Get();
}
void singer::show() const
{
	cout << "����: ����\n";
	worker::Data();
	Data();
}
void singer::Data() const
{
	cout << "��Ҹ� ����: " << pv[voice] << endl;
}
void singer::Get()
{
	cout << "���� ��Ҷ� ������ ��ȣ�� �Է��� �ּ���::\n";
	int i;
	for (i = 0; i < Vtype; i++)
	{
		cout << i << ": " << pv[i] << " ";
		if (i % 4 == 3)
			cout << endl;
	}
	if (i % 4 != 0)
		cout << endl;
	while (cin >> voice && (voice < 0 || voice >= Vtype))
		cout << "0���� ũ�ų� ���� " << Vtype << "���� ���� ���� �Է��Ͻʽÿ�." << endl;

	while (cin.get() != '\w')
		continue;
}
void singingwaiter::Data() const
{
	singer::Data();
	waiter::Data();
}
void singingwaiter::Get()
{
	singer::Get();
	waiter::Get();
}
void singingwaiter::set()
{
	cout << "���� �� �������� �̸��� �Է��Ͻʽÿ�: ";
	worker::Get();
	Get();
}
void singingwaiter::show() const
{
	cout << "����: ���� �� ������\n";
	worker::Data();
	Data();
}
//workmi.cpp 14-12 (1044pg)
const int SIZE = 5;
int main()
{
	worker* lolas[SIZE];
	int ct;
	for (ct = 0; ct < SIZE; ct++)
	{
		char choice;
		cout << "������ �Է��Ͻʽÿ�: \n" << "w:������   s:����   "
			<< "t:���� �� ������  q:���� \n";
		cin >> choice;
		while (strchr("wstq", choice) == NULL)
		{
			cout << "w, s, t, q �߿��� �ϳ��� �����Ͻʽÿ�: ";
			cin >> choice;
		}
		if (choice == 'q')
			break; switch (choice)
		{
			case 'w': lolas[ct] = new waiter; break;
			case 's': lolas[ct] = new singer; break;
			case 't': lolas[ct] = new singingwaiter; break;
		}
		cin.get();
		lolas[ct]->set();
	}
	cout << "\n��� ��Ȳ�� ������ �����ϴ�.  \n";
	int i;
	for (i = 0; i < ct; i++)
	{
		cout << endl;
		lolas[i]->show();
	}
	for (i = 0; i < ct; i++)
		delete lolas[i];
	cout << "���α׷��� �����մϴ�. \n";
	return 0;
}*/


/*
//stacktp.h 14-13 (1053pg)
template <class Type>
class stack
{
private:
	enum { MAX = 10 };
	Type items[MAX];
	int top;
public:
	stack();
	bool isempty();
	bool isfull();
	bool push(const Type& item);
	bool pop(Type & item);
};

template <class Type>
stack<Type>::stack()
{
	top = 0;
}
template <class Type>
bool stack <Type>::isempty()
{
	return top = 0;
}
template <class Type>
bool stack <Type>::isfull()
{
	return top = MAX;
}
template <class Type>
bool stack <Type>::push(const Type & item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}
template <class Type>
bool stack <Type>::pop(Type& item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}
//stacktem.cpp 14-14 (1056pg)
int main()
{
	stack<string>st;
	char ch;
	string po;
	cout << "�ֹ����� �߰��Ϸ��� A, �ֹ����� ó���Ϸ��� P,n"
		<< "�����Ϸ��� Q�� �Է��Ͻʽÿ�. \n";
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
		case 'A':
		case 'a': cout << "�߰��� �ֹ����� ��ȣ�� �Է��Ͻʽÿ�: ";
				  cin >> po;
				  if (st.isfull())
					  cout << "������ ���� �� �ֽ��ϴ�.\n";
				  else
					  st.push(po);
				  break;
		case 'P':
		case 'p': if (st.isempty())
				  cout << "������ ��� �ֽ��ϴ�.\n";
				  else
				  {
					st.pop(po);
					cout << "#" << po << "�ֹ����� ó���߽��ϴ�.\n";
					break;
				  }
		}
		cout << "�ֹ����� �߰��Ϸ��� A, �ֹ����� ó���Ϸ��� P, \n"
			 << "�����Ϸ��� Q�� �Է��Ͻʽÿ�\n";
	}
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}*/


/*
//stacktp1.h 14-15 (1061pg)
template <class Type>
class stack
{
private:
	enum { MAX = 10 };
	int stacksize;
	Type *items
	int top;
public:
	explicit stack(int ss = SIZE);
	stack(const stack & st);
	~stack() { delete [] items; }
	bool isempty(){ return top = 0; }
	bool isfull(){ return top = stacksize; }
	bool push(const Type& item);
	bool pop(Type& item);
	stack& operator=(const stack & st)
};

template <class Type>
stack<Type>::stack(int ss) : stacksize(ss), top(0)
{
	items = new Type[stacksize];
}
template <class Type>
bool stack <Type>::push(const Type& item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}
template <class Type>
bool stack <Type>::pop(Type& item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}
template <class Type>
stack<Type>& stack<Type>::operator=(const stack<Type>& st)
{
	if (this == &st)
		return *this;
	delete[] items;
	stacksize = st.stacksize;
	top = st.top;
	items = new Type[stacksize];
	for (int i = 0; i < top; i++)
		items[i] = st.items[i];
	return *this;
}
//stkoptr1.cpp 14-16 (1064pg)
const int NUM = 10;
int main()
{
	srand(time(0));
	cout << "������ ũ�⸦ �Է��Ͻʽÿ�: ";
	int stacksize;
	cin >> stacksize;

	stack<const char*>st(stacksize);
	const char* in[NUM] = {
		" 1: ���ȣ", " 2: �ָ���",
		" 3: �̸���", " 4: ������",
		" 5: �̼���", " 6: �ɼ���",
		" 7: �ڹ���", " 8: ȫ�浿",
		" 9: �����", " 10: �Ͼ߽�"
	};
	const char* out[NUM];
	int processed = 0;
	int nextin = 0;
	while (processed < NUM)
	{
		if (st.isempty())
			st.push(in[nextin++]);
		else if (st.isfull())
			st.pop(out[processed++]);
		else if(rand() % 2 && nextin <NUM)
			st.push(in[nextin++]);
		else
			st.pop(out[processed++]);
	}
	for (int i = 0; i < NUM; i++)
		cout << out[i] << endl;
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}*/


/*
//arraytp.h 14-17 (1066pg)
template <class T, int n>
class ArrayTP
{
private:
	T ar[n];
public:
	ArrayTP();
	explicit ArrayTP(const T& v);
	virtual T& operator[] (int i);
	virtual T operator[](int i) const;
};

template <class T, int n>
ArrayTP<T,n>::ArrayTP(const T& v)
{
	for (int i = 0; i < n; i++)
		ar[i] = v;
}
template <class T, int n>
T& ArrayTP<T, n>::operator[] (int i)
{
	if (< 0 || i >= n)
	{
		cerr << "�迭�� ��踦 ����� ����: "  //cerr ���� ���� ����ϴ� ��Ʈ��
			<< i << "--> wkfahtehls dlseprtmdlqslek.\n";
		exit(EXIT_FAILURE);
	}
	return ar[i];
}
template <class T, int n>
T ArrayTP<T, n>::operator[] (int i) const
{
	if (< 0 || i >= n)
	{
		cerr << "�迭�� ��踦 ����� ����: "
			<< i << "--> wkfahtehls dlseprtmdlqslek.\n";
		exit(EXIT_FAILURE);
	}
	return ar[i];
}
//twod.cpp 14-18 (1070pg)
int main()
{
	ArrayTP<int, 10>sums;
	ArrayTP<double, 10>aves;
	ArrayTP<ArrayTP<int, 10>, 10>twodee;

	int i, j;

	for (i = 0; i < 10; i++)
	{
		sums[i] = 0;
		for (j = 0;j < 5; j++)
		{
			twodee[i][j] = (i + 1) * (j + 1);
			sums[i] += twodee[i][j];
		}
		aves[i] = (double)sums[i] / 10;
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cout.width(2); //����ϴ� ���� �ڸ��� ����
			cout << twodee[i][j] << ' ';
		}
		cout << ": �հ� = ";
		cout.width(3);
		cout << sums[i] << ", ��� = " << aves[i] << endl;
	}
	cout << "���α׷��� �����մϴ�.";
	return 0;
}*/


/*
//pairs.cpp 14-19 (1072pg)
template <class T1, class T2>
class pair
{
private:
	T1 a;
	T2 b;
public:
	T1 & first();
	T2 & secound();
	T1& first()const {return a};
	T2& secound()const { return b };
	pair(const T1& aval, const T2& bval) : a(aval), b(bval) { }
	pair() {}
};
template <class T1, class T2>
T1& pair<T1, T2>::first()
{
	return a;
}
template <class T1, class T2>
T2& pair<T1, T2>::secound()
{
	return b;
}
int main()
{
	pair<string, int>ratings[4] =
	{
		pair<string, int>("�̵�����",5),
		pair<string, int>("�¸�����",4),
		pair<string, int>("��������",5),
		pair<string, int>("LA����",3)
	};
	int joints = sizeof(ratings) / sizeof(pair<string, int>);
	cout << "���:\t ���� ����\n";
	for (int i = 0; i < joints; i++)
		cout << ratings[i].secound() << ":\t"
			 << ratings[i].first() << endl;
	cout << "������ ���: \n";
	ratings[3].first() = "LA������";
	ratings[3].secound() = 6;
	cout << ratings[3].secound() << ":\t"
		<< ratings[3].first() << endl;
	return 0;

}*/


/*
//tempmemb.cpp 14-20 (1078pg)
template<class T>
class beta
{
private:
	template<class V>
	class hold
	{
	private:
		V val;
	public:
		hold(V v=0):val(v) { }
		void show() const { cout << val << endl; }
		V value() const { return val; }
	};
	hold<T> q;
	hold<int> n;
public:
	beta(T t,int i) : q(t),n(i) { }
	template<typename U>
	U blab(U u, T t) { return (n.value() + q.value()) * u / t; }
	void show()const { q.show(); n.show(); }
};
int main()
{
	beta<double> guy(3.5, 3);
	cout << "T�� double�� �����Ǿ����ϴ�.\n";
	guy.show();
	cout << "V�� double�� T�� �����Ǿ���, �� ������ V�� int�� �����Ǿ����ϴ�.\n";
	cout<<guy.blab(10, 2.3)<<endl;
	cout << "U�� int�� �����Ǿ����ϴ� \n";
	cout << guy.blab(10.0, 2.3) << endl;
	cout << "U�� double�� �����Ǿ����ϴ� \n";
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}*/


/*
//stacktp.h - tempparm.cpp 14-21 (1083pg)���� ���
template <class Type>
class stack
{
private:
	enum { MAX = 10 };
	Type items[MAX];
	int top;
public:
	stack();
	bool isempty();
	bool isfull();
	bool push(const Type& item);
	bool pop(Type& item);
};

template <class Type>
stack<Type>::stack()
{
	top = 0;
}
template <class Type>
bool stack <Type>::isempty()
{
	return top = 0;
}
template <class Type>
bool stack <Type>::isfull()
{
	return top = MAX;
}
template <class Type>
bool stack <Type>::push(const Type& item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}
template <class Type>
bool stack <Type>::pop(Type& item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}
//tempparm.cpp 14-21 (1083pg)
template<template<class T>class Thing>
class crab
{
private:
	Thing<int>s1;
	Thing<double>s2;
public:
	crab() { }
	bool push(int a, double x) { return s1.push(a) && s2.push(x); }
	bool pop(int &a, double &x) { return s1.pop(a) && s2.pop(x); }
};
int main()
{
	crab<stack>nebula;
	int ni;
	double nb;
	cout << "4 3.5�� ���� int double ���� �Է��϶�(�������� 0 0):\n";
	while (cin >> ni >> nb && ni > 0 && nb > 0)
	{
		if (!nebula.push(ni, nb))
			break;
	}
	while(nebula.pop(ni,nb))
		cout << ni << ", " << nb << endl;

	cout << "���α׷��� �����մϴ�.\n";

	return 0;
}*/


/*
//frnd2tmp.cpp 14-22 (1087pg)
template<class T>
class Hasfriend
{
private:
	T item;
	static int ct;
public:
	Hasfriend(const T& i) :item(i) { ct++; }
	~Hasfriend() { ct--; }
	friend void counts();
	friend void report(Hasfriend<T>&);
};
template<class T>
int Hasfriend<T>::ct = 0;

void counts()
{
	cout << "int ī��Ʈ: " << Hasfriend<int>::ct << "; ";
	cout << "double ī��Ʈ: " << Hasfriend<double>::ct <<endl;
}
void report(Hasfriend<int > & hf)
{
	cout << "Hasfriend<double>: " << hf.item << endl;
}
int main()
{
	cout << "��ü�� ������� �ʾҴ�: ";
	counts();
	Hasfriend<int> hfi1(10);
	cout << "hfi1 ���� �� :";
	counts();
	Hasfriend<int> hfi2(20);
	cout << "hfi2 ���� �� :";
	counts();
	Hasfriend<double> hfdb(10.5);
	cout << "hfdb ���� �� :";
	counts();
	report(hfi1);
	report(hfi2);
	report(hfdb);

	return 0;
}*/


/*
//tmp2tmp.cpp
template <class T> void counts();
template <class T> void report(T&);

template<class TT>
class HasfriendT
{
private:
	TT item;
	static  int ct;
public:
	HasfriendT(const TT& i) :item(i) { ct++; }
	~Hasfriend() { ct--; }
	friend void counts<TT>();
	friend void report<>(HasfriendT<TT>&);
};
template<class T>
int HasfriendT<T>::ct = 0;

template<class T>
void counts()
{
	cout << "���ø� ũ��: " << sizeof(HasfriendT<T>) << "; ";
	cout << "���ø� counts(): " << HasfriendT<T>::ct << endl;
}
template<class T>
void report(T& hf)
{
	cout << hf.item << endl;
}
int main()
{
	counts<int>();
	HasfriendT<int> hfi1(10);
	HasfriendT<int> hfi2(20);
	HasfriendT<double> hfdb(10.5);
	report(hfi1);
	report(hfi2);
	report(hfdb);
	cout << "counts<int>() ���:\n";
	counts<int>();
	cout << "counts<double>() ���:\n";
	counts<double>();

	return 0;
}*/


/*
//manyfriend.cpp
template<class T>
class ManyFriend
{
private:
	T item;
public:
	ManyFriend(const T & i):item(i) { }
	template <class C, class D> friend void show2(C&, D&)

};
template <class C, class D>  void show2(C&, D&)
{
	cout << c.item << "; " << d.item << endl;
}
int main()
{
	ManyFriend<int> hfi1(10);
	ManyFriend<int> hfi2(20);
	ManyFriend<double> hfdb(10.5);
	cout << "hfi1, hfi2: ";
	show2(hfi1, hfi2);
	cout << "hfdb, hfi2: ";
	show2(hfdb, hfi2);

	return 0;
}*/

