#include "main.h"




/*
//tv.h 15-1 (1113pg)
class Tv
{
public:
	friend class Remote;
	enum{off, on};
	enum{Minval,Maxval=20};
	enum{Antena, cable};
	enum{TV,DVD};
	Tv(int s=off,int mc=125) : state(s), volume(5),maxchannel(mc),channel(2),mode(cable),input(TV) {}
	void onoff() { state = (state == on) ? off : on; }
	bool ison() const { return state == on; }
	bool volup();
	bool voldown();
	void chanup();
	void chandown();
	void set_mode() { mode = (mode == Antena) ? cable : Antena; }
	void set_input() { input = (input == TV) ? DVD : TV; }
	void settings() const;
private:
	int state;
	int volume;
	int maxchannel;
	int channel;
	int mode;
	int input;
};
class Remote
{
private:
	int mode;
public:
	Remote(int m=Tv::TV) : mode(m){}
	bool volup(Tv& t) { return t.volup(); }
	bool voldown(Tv& t) { return t.voldown(); }
	void onoff(Tv& t) { return t.onoff(); }
	void chanup(Tv& t) { return t.chanup(); }
	void chandown(Tv& t) { return t.chandown(); }
	void set_chan(Tv& t, int c) {t.channel=c; }
	void set_mode(Tv& t) { return t.set_mode(); }
	void set_input(Tv& t) { return t.set_input(); }
};
//tv.cpp 15-2 (1115pg)
bool Tv::volup()
{
	if (volume < Maxval)
	{
		volume++;
		return true;
	}
	else
		return false;
}
bool Tv::voldown()
{
	if (volume > Minval)
	{
		volume--;
		return true;
	}
	else
		return false;
}
void Tv::chanup()
{
	if (channel < maxchannel)
		channel++;
	else
		channel = 1;
}
void Tv::chandown()
{
	if (channel > 1)
		channel--;
	else
		channel = maxchannel;
}
void Tv::settings() const
{
	cout << "TV = " << (state == off ? "OFF" : "ON") << endl;
	if (state == on)
	{
		cout << "볼륨 : " << volume << endl;
		cout << "채널 : " << channel << endl;
		cout << "모드 : " <<(mode==Antena ? "지상파 방송" : "케이블 방송") << endl;
		cout << "입력 : " << (input == TV ? "TV" : "DVD") << endl;
	}
}
//use_tv.cpp 15-3 (1117pg)
int main()
{
	Tv s42;
	cout << "42\" TV의 초기 설정값:\n";
	s42.settings();
	s42.onoff();
	s42.chanup();
	cout << "42\" TV의 변경 설정값:\n";
	s42.settings();

	Remote grey;
	grey.set_chan(s42, 10);
	grey.volup(s42);
	grey.volup(s42);
	cout << "\n리모컨 사용 후 42\" TV의 설정값\n";
	s42.settings();

	Tv s58(Tv::on);
	s58.set_mode();
	grey.set_chan(s58, 28);
	cout << "\58\" TV의 설정값\n";
	s58.settings();

	return 0;
}
//tvfm.h 15-4 (1120pg)
class Tv;

class Remote
{
public:
	enum { off, on };
	enum { Minval, Maxval = 20 };
	enum { Antena, cable };
	enum { TV, DVD };
private:
	int mode;
public:
	Remote(int m = TV) : mode(m) {}
	bool volup(Tv& t);
	bool voldown(Tv& t);
	void onoff(Tv& t);
	void chanup(Tv& t);
	void chandown(Tv& t);
	void set_mode(Tv& t);
	void set_input(Tv& t);
	void set_chan(Tv& t, int c);
};
class Tv
{
public:
	friend class Remote;
	enum { off, on };
	enum { Minval, Maxval = 20 };
	enum { Antena, cable };
	enum { TV, DVD };
	Tv(int s = off, int mc = 125) : state(s), volume(5), maxchannel(mc), channel(2), mode(cable), input(TV) {}
	void onoff() { state = (state == on) ? off : on; }
	bool ison() const { return state == on; }
	bool volup();
	bool voldown();
	void chanup();
	void chandown();
	void set_mode() { mode = (mode == Antena) ? cable : Antena; }
	void set_input() { input = (input == TV) ? DVD : TV; }
	void settings() const;
private:
	int state;
	int volume;
	int maxchannel;
	int channel;
	int mode;
	int input;
};
inline bool Remote::volup(Tv& t) { return t.volup(); }
inline bool Remote::voldown(Tv& t) { return t.voldown(); }
inline void Remote::onoff(Tv& t) { return t.onoff(); }
inline void Remote::chanup(Tv& t) { return t.chanup(); }
inline void Remote::chandown(Tv& t) { return t.chandown(); }
inline void Remote::set_chan(Tv& t, int c) { t.channel = c; }
inline void Remote::set_mode(Tv& t) { return t.set_mode(); }
inline void Remote::set_input(Tv& t) { return t.set_input(); }
*/


/*
//queuetp.h 15-5 (1131pg)
template<class Item>
class QueueTP
{
private:
	enum{Q_SIZE=10};
	class Node
	{
	public:
		Item item;
		Node* next;
		Node(const Item & i) : item(i), next(0) {}
	};
	Node* front;
	Node rear;
	int items;
	const int qsize;
	QueueTP(const QueueTP & q) : qsize(0) {}
	QueueTP& operator=(const QueueTP& q) { return *this; }
public:
	QueueTP(int qs = Q_SIZE);
	~QueueTP();
	bool isempty() const
	{
		return items == 0;
	}
	bool isfull() const
	{
		return items == qsize;
	}
	int queuecount() const
	{
		return items;
	}
	bool enqueue(const Item& item);
	bool dequeue(Item& item);
};
template<class Item>
QueueTP<Item>::QueueTP(int qs) : qsize(qs)
{
	front = rear = 0;
	itmes = 0;
}
template<class Item>
QueueTP<Item>::~QueueTP()
{
	Node* temp;
	while (front != 0)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}
template<class Item>
bool QueueTP<Item>::enqueue(const Item& item)
{
	if (isfull())
		return false;
	Node* add = new Node(item);
	items++;
	if (front == 0)
		front = add;
	return true;
}
template<class Item>
bool QueueTP<Item>::dequeue(Item& item)
{
	if (front == 0)
		return false;
	item = front->item;
	items--;
	Node* temp = front;
	front = front->next;
	delete temp;
	if (items == 0)
		rear = 0;
	return true;
}
//nested.cpp 15-6 (1134pg)
int main()
{
	QueueTP<string> cs(5);
	string temp;

	while (!cs.isfull())
	{
		cout << "이름을 입력하십시오. 도착하신 순서대로 "
				"사음푸을 드립니다.\n"
				"이름 : ";
		getline(cin, temp);
		cs.enqueue(temp);
	}
	cout << "큐가 가득 찼으므로, 지금부터 사음품을 나누어 드리겠습니다.\n";

	while (!cs.isempty())
	{
		cs.dequeue(temp);
		cout << " 님! 감사합니다. 안녕히 가십시오.\n";
	}
	return 0;
}*/


/*
//error1.cpp 15-7 (1137pg)
double hmean(double a, double b);
int main()
{
	double x, y, z;
	cout << "두 수를 입력하십시오 : ";
	while (cin >> x >> y)
	{
		z = hmean(x, y);
		cout << x << ", " << y << "의 조화편균은" << z << "입니다.\n";
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}
double hmean(double a, double b)
{
	if(a == -b)
	{
		cout << "매개변수들을 hmean()에 전달할 수 없습니다.\n";
		abort();
	}
	return 2.0 * a * b / (a + b);
}




//error2.cpp 15-8 (1139pg)
bool hmean(double a, double b, double* ans);

int main()
{
	double x, y, z;
	cout << "두 수를 입력하십시오 : ";
	while (cin >> x >> y)
	{
		if (hmean(x, y, &z))
			cout << x << ", " << y << "의 조화편균은" << z << "입니다.\n";
		else
			cout << "서로 부정인 두 수의 조화평균은 구할 수 없다.\n";
		cout << "다른 두 수를 입력하십시오(끝내려면 Q): ";
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}
bool hmean(double a, double b, double* ans)
{
	if (a == -b) //-b는 부호를 변경해 음수만 받아들인다
	{
		*ans = DBL_MAX;
		return false;
	}
	else
	{
		*ans = 2.0 * a * b / (a + b);
		return true;
	}
}*/


/*
//error3.cpp 15-9 (1141pg)
double hmean(double a, double b);

int main()
{
	double x, y, z;
	cout << "두 수를 입력하십시오 : ";
	while (cin >> x >> y)
	{
		try { //예외처리 예상 구역
			z = hmean(x, y);
		}
		catch (const char* s) //예외처리 부분
		{
			cout << s << endl;
			cout << "두 수를 새로 입력하십시오: ";
			continue;
		}
		cout << x << ", " << y << "의 조화편균은" << z << "입니다.\n";
		cout << "다른 두 수를 입력하십시오(끝내려면 Q): ";
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}
double hmean(double a, double b)
{
	if (a == -b) //-b는 부호를 변경해 음수만 받아들인다
		return 2.0 * a * b / (a + b);
}*/


/*
//exc_mean.h 15-10 (1147pg)
class bad_hmean
{
private:
	double v1, v2;
public:
	bad_hmean(double a = 0, double b = 0) : v1(a), v2(b) { }
	void mesg();
};
inline void bad_hmean::mesg()
{
	cout << "hmean(" << v1 << ", " << v2 << "): "
		<< "잘못된 매개변수: a=-b\n";
}
class bad_gmean
{
public:
	double v1, v2;
	bad_gmean(double a = 0, double b = 0) : v1(a), v2(b) { }
	const char* mesg();
};
inline const char* bad_gmean::mesg()
{
	return "gmean() 매개변수들은 >= 0이어야 합니다.\n";
}
//error4.cpp 15-11 (1148pg)
double hmean(double a, double b) throw(bad_hmean);
double gmean(double a, double b) throw(bad_gmean);
int main()
{
	double x, y, z;
	cout << "두 수를 입력하십시오 : ";
	while (cin >> x >> y)
	{
		try { //예외처리 예상 구역
			z = hmean(x, y);
			cout << x << ", " << y << "의 조화편균은" << z << "입니다.\n";
			cout << x << ", " << y << "의 기화편균은" << gmean(x, y) << "입니다.\n";
			cout << "다른 두 수를 입력하십시오(끝내려면 Q): ";
		}
		catch (bad_hmean& bg)
		{
			bg.mesg();
			cout << "다시 하십시오.\n";
			continue;
		}
		catch (bad_gmean& hg)
		{
			cout << hg.mesg();
			cout << "value used: " << hg.v1 << ", "
				<< hg.v2 << endl;
			cout << "죄송합니다. 더 이상 진행할 수 없습니다\n";
			break;
		}
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}
double hmean(double a, double b)
{
	if (a == -b)
		throw bad_hmean(a, b);
	return 2.0 * a * b / (a + b);
}
double gmean(double a, double b)
{
	if(a<0||b<0)
		throw bad_gmean(a, b);

	return sqrt(a * b);
}*/



/*
//error5.cpp 15-12 (1153pg)
//exc_mean.h 15-10 (1147pg)
class bad_hmean
{
private:
	double v1, v2;
public:
	bad_hmean(double a = 0, double b = 0) : v1(a), v2(b) { }
	void mesg();
};
inline void bad_hmean::mesg()
{
	cout << "hmean(" << v1 << ", " << v2 << "): "
		<< "잘못된 매개변수: a=-b\n";
}
class bad_gmean
{
public:
	double v1, v2;
	bad_gmean(double a = 0, double b = 0) : v1(a), v2(b) { }
	const char* mesg();
};
inline const char* bad_gmean::mesg()
{
	return "gmean() 매개변수들은 >= 0이어야 합니다.\n";
}
//error5.cpp 15-12
class demo
{
private:
	string word;
public:
	demo(const string& str)
	{
		word = str;
		cout << "demo " << word << " 생성\n";
	}
	~demo()
	{
		cout << "demo " << word << " 파괴\n";
	}
	void show() const
	{
		cout << "demo " << word << " 생존\n";
	}
};
double hmean(double a, double b) throw(bad_hmean);
double gmean(double a, double b) throw(bad_gmean);
double means(double a, double b) throw(bad_hmean, bad_gmean);
int main()
{
	double x, y, z;
	{
		demo d1("found in black in main()");
	cout << "두 수를 입력하십시오 : ";
	while (cin >> x >> y)
	{
		try { //예외처리 예상 구역
			z = hmean(x, y);
			cout << x << ", " << y << "의 조화편균은" << z << "입니다.\n";
			cout << "다른 두 수를 입력하십시오(끝내려면 Q): ";
		}
		catch (bad_hmean& bg)
		{
			bg.mesg();
			cout << "다시 하십시오.\n";
			continue;
		}
		catch (bad_gmean& hg)
		{
			cout << hg.mesg();
			cout << "사용된 두 값 : " << hg.v1 << ", "
				<< hg.v2 << endl;
			cout << "죄송합니다. 더 이상 진행할 수 없습니다\n";
			break;
		}
		d1.show();
	}
	cout << "프로그램을 종료합니다.\n";
	cin.get();
	cin.get();
	return 0;
}
double hmean(double a, double b)
{
	if (a == -b)
		throw bad_hmean(a, b);
	return 2.0 * a * b / (a + b);
}
double gmean(double a, double b)
{
	if (a < 0 || b < 0)
		throw bad_gmean(a, b);

	return sqrt(a * b);
}
double means(double a, double b) throw(bad_hmean, bad_gmean)
{
	double am, hm, gm;
	demo d2("found in means");
	am = (a + b) / 2.0;
	try
	{
		hm = hmean(a, b);
		gm = gmean(a, b);
	}
	catch
	{
		bg.mesg();
		cput << "means()에서 잡힘\n";
		throw();
	}
	d2.show();
	return (am + hm + gm) / 3.0;
}*/


/*
//newezcp.cpp 15-13 (1166pg)
struct Big
{
	double stuff[20000];
};
int main()
{
	Big* pb;
	try {
		cout << "큰 메모리 블록 대입을 요청하고 있습니다.\n";
		pb = new Big[10000];
		cout << "메모리 블록 대입 요청이 거부되었습니다.\n";
	}
	catch (bad_alloc& ba)
	{
		cout << "에러가 감지되었습니다!\n";
		cout << ba.what() << endl; //what()는 exception 클래스의 멤버 함수 중 하나로 예외처리 했을떄 설명 해주는 역활이다.
		exit(EXIT_FAILURE);
	}
	cout << "메모리 블록이 성공적으로 대입되었습니다.\n";
	pb[0].stuff[0] = 4;
	cout << pb[0].stuff[0] << endl;
	delete[] pb;
	return 0;
}*/


/*
//sales.h 15-14 (1168pg)
class sales
{
public:
	enum{MONTH = 12};
	class bad_index : public logic_error
	{
		private:
			int bi;
		public:
			explicit bad_index(int ix, const string& s = "sales 객체에서 인덱스 에러 \n");
			int vi_val() const { return bi; }
			virtual ~bad_index() throw() { }
	};
	explicit sales(int yy = 0);
	sales(int yy, const double* gr, int n);
	virtual ~sales() { }
	int Year() const { return year; }
	virtual double operator[] (int i) const;
	virtual double& operator[] (int i);
private:
	double gross[MONTH];
	int year;
};
class Labeledsales : public sales
{
public:
	class nbad_index : public sales::bad_index
	{
	private:
		string lbl;
	public:
		nbad_index(const string& lb, int ix, const string& s = "Labeledsales 객체에서 인덱스 에러\n");
		const string& label_val() const { return lbl; }
		virtual ~nbad_index() throw() { }
	};
	explicit Labeledsales(const string& lb = "없음", int yy = 0);
	Labeledsales(const string& lb, int yy, const double* gr, int n);
	virtual ~Labeledsales() {}
	const string& Label const{ return label; }
	virtual double operator[] (int i) const;
	virtual double& operator[] (int i);
private:
	string label;
};
//sales.cpp 15-15 (1171pg)
sales::bad_index::bad_index(int ix, const string& s) : logic_error(s), bi(ix)
{

}
sales::sales(int yy)
{
	year = yy;
	int lim = (n < MONTH) ? n : MONTH;
	int i;
	for (i = 0; i < lim; ++i)
		gross[i] = gr[i];
	for (; i < MONTH; ++i)
		gross[i] == 0;
}
double sales::operator[] (int i) const
{
	if (i < 0 || i >= MONTH)
		throw bad_index(i);
	return gross[i];
}
double& sales::operator[] (int i)
{
	if (i < 0 || i >= MONTH)
		throw bad_index(i);
	return gross[i];
}
Labeledsales::nbad_index::nbad_index(const string & lb, int ix, const string & s) : sales::bad_index(ix,s)
{
	lbl = lb;
}
Labeledsales::Labeledsales(const  string& lb, int yy) : sales(yy)
{
	label = lb;
}
Labeledsales::Labeledsales(const string& lb, int yy, const double* gr, int n) : sales(yy,gr,n)
{
	label = lb;
}
double Labeledsales::operator[] (int i) const
{
	if (i < 0 || i >= MONTH)
		throw nbad_index(Label(),i);
	return sales::operator[] (i);
}
double& Labeledsales::operator[] (int i)
{
	if (i < 0 || i >= MONTH)
		throw nbad_index(Label(), i);
	return sales::operator[] (i);
}
//use_slaes.cpp 15-16 (1173pg)
int main()
{
	double vals1[12] =
	{
		1220,1100,1122,2212,1232,2334,
		2884,2393,3302,2922,3002,3544
	};
	double vals2[12] =
	{
		12,11,22,21,32,34,
		28,29,33,29,32,35
	};
	sales sales1(2011, vals1, 12);
	Labeledsales sales2("Blogstar", 2012, vals2, 12);

	cout << "첫 번쨰 try 블록:\n";
	try {
		int i;
		cout << "year = " << sales1.Year() << endl;
		for (i = 0; i < 12; ++i)
		{
			cout << sales1[i] << ' ';
			if (i % 6 == 5)
				cout << endl;
		}
		cout << "year = " << sales2.Year() << endl;
		cout << "Label = " << sales1.Label() << endl;
		{
			cout << sales2[i] << ' ';
			if (i % 6 == 5)
				cout << endl;
		}
		cout << "try 블록 1의 끝\n";
	}
	catch (Labeledsales::nbad_index& bad)
	{
		cout << bad.what();
		cout << "Company: " << bad.label_val() << endl;
		cout << "잘못된 인덱스: " << bad.bi_val()() << endl;
	}
	catch (sales::bad_index& bad)
	{
		cout << bad.what();
		cout << "잘못된 인덱스: " << bad.bi_val()() << endl;
	}
	cout << "\n다음 try 블록: \n";
	try {
		sales2[2] = 37.5;
		sales1[20] = 23345;
		cout << "try 블록 2의 끝.\n";
	}
	catch (Labeledsales::nbad_index& bad)
	{
		cout << bad.what();
		cout << "Company: " << bad.label_val() << endl;
		cout << "잘못된 인덱스: " << bad.bi_val()() << endl;
	}
	catch (sales::bad_index& bad)
	{
		cout << bad.what();
		cout << "잘못된 인덱스: " << bad.bi_val()() << endl;
	}
	cout << "프로그램을 종료합니다\n";
	return 0;
}*/


/*
//rtti1.cpp 15-17 (1187pg)
class Grand
{
private:
	int hold;
public:
	Grand(int h = 0) : hold(h) {}
	virtual void speak() const { cout << "나는 Grand 클래스이다.\n"; }
	virtual int value() const { return hold; }
};
class superb : public Grand
{
public:
	superb(int h=0) : Grand(h) {}
	void speak() const { cout << "나는 superb 클래스이다.\n"; }
	virtual void Say() const { cout << "내가 가지고 있는superb 값은 " << value() << "이다.\n"; }
};
class Magnificent : public superb
{
private:
	char ch;
public:
	Magnificent(int h=0,char c='A') : superb(h), ch(c) {}
	void speak() const { cout << "나는 Magnificent 클래스이다.\n"; }
	void Say() const { cout << "내가 가지고 있는 문자는 "<<ch<<"이고 정수는 " << value() << "이다.\n"; }
};
Grand *Getone();
int main()
{
	srand(time(0));
	Grand* pg;
	superb* ps;
	for (int i = 0; i < 5; i++)
	{
		pg = Getone();
		pg->speak();
		if (ps = dynamic_cast<superb*>(pg))
			ps->Say();
	}
	return 0;
}
Grand* Getone()
{
	Grand * p;
	switch (rand() % 3)
	{
		case 0: p = new Grand(rand() % 100); break;
		case 1: p = new superb(rand() % 100); break;
		case 2: p = new Magnificent(rand() % 100,'A'+rand() % 26); break;
	}
	return p;
}*/


/*
//rtti2.cpp 15-18 (1191pg)
class Grand
{
private:
	int hold;
public:
	Grand(int h = 0) : hold(h) {}
	virtual void speak() const { cout << "나는 Grand 클래스이다.\n"; }
	virtual int value() const { return hold; }
};
class superb : public Grand
{
public:
	superb(int h = 0) : Grand(h) {}
	void speak() const { cout << "나는 superb 클래스이다.\n"; }
	virtual void Say() const { cout << "내가 가지고 있는superb 값은 " << value() << "이다.\n"; }
};
class Magnificent : public superb
{
private:
	char ch;
public:
	Magnificent(int h = 0, char c = 'A') : superb(h), ch(c) {}
	void speak() const { cout << "나는 Magnificent 클래스이다.\n"; }
	void Say() const { cout << "내가 가지고 있는 문자는 " << ch << "이고 정수는 " << value() << "이다.\n"; }
};
Grand* Getone();
int main()
{
	srand(time(0));
	Grand* pg;
	superb* ps;
	for (int i = 0; i < 5; i++)
	{
		pg = Getone();
		cout << "지금 " << typeid(*pg).name() << "형을 처리하고 있습니다.\n";
		pg->speak();
		if (ps = dynamic_cast<superb*>(pg))
			ps->Say();
		if (typeid(Magnificent) == typeid(*pg))
			cout << "그래, 너야말로 진짜 Magnificent 클래스이다.\n";
	}
	return 0;
}
Grand* Getone()
{
	Grand* p;
	switch (rand() % 3)
	{
	case 0: p = new Grand(rand() % 100); break;
	case 1: p = new superb(rand() % 100); break;
	case 2: p = new Magnificent(rand() % 100, 'A' + rand() % 26); break;
	}
	return p;
}*/



/*
//constcast.cpp 15-19 (1198pg)
void change(const int* pt, int n);

int main()
{
	int pop1 = 38383;
	const int pop2 = 2000;

	cout << "pop1, pop2: " << pop1 << ", " << pop2 << endl;
	change(&pop1, -103);
	change(&pop2, -103);
	cout << "pop1, pop2: " << pop1 << ", " << pop2 << endl;

	return 0;
}
void change(const int* pt, int n)
{
	int * pc;

	pc = const_cast<int*>(pt);
	*pc += n;
}*/

