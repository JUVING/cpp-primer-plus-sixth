#include "main.h"


/*
//tabtenn.h 13-1 (895pg)
class tabletennisplayer
{
private:
	string firstname;
	string lastname;
	bool hastable;
public:
	tabletennisplayer(const string& fn = "none", const string& ln = "none", bool ht = false);
	void Name() const;
	bool Hastable() const { return Hastable; };
	void Resetable(bool v) { hastable = v; };
};
//tabtenn0.cpp 13-2 (895pg)
tabletennisplayer::tabletennisplayer(const string& fn , const string& ln , bool ht) :
firstname(fn),lastname(ln),hastable(ht) {}
void tabletennisplayer::Name() const
{
	cout << lastname << ", " << firstname;
}
//usett0.cpp 13-3 (896pg)
int main()
{
	tabletennisplayer player1("chunk","blizzard",true);
	tabletennisplayer player2("tara", "boomdea", false);
	player1.Name();
	if (player1.Hastable())
		cout << ": Ź���밡 �ִ�.\n";
	else
		cout << ": Ź���밡 ����.\n";
	player2.Name();
	if (player2.Hastable())
		cout << ": Ź���밡 �ִ�.\n";
	else
		cout << ": Ź���밡 ����.\n";

	return 0;
}*/


/*
//tabtenn1.h 13-4 (904pg)
class tabletennisplayer
{
private:
	string firstname;
	string lastname;
	bool hastable;
public:
	tabletennisplayer(const string& fn = "none", const string& ln = "none", bool ht = false);
	void Name() const;
	bool Hastable() const { return Hastable; };
	void Resetable(bool v) { hastable = v; };
};
class Ratedplayer : public tabletennisplayer
{
private:
	unsigned int rating;
public:
	Ratedplayer(unsigned int r = 0, const string& fn, const string& ln = "none", bool ht = false);
	Ratedplayer(unsigned int r, const tabletennisplayer & tp);
	unsigned int Rating() { return rating; }
	void ResetRating(unsigned int r) { return r; }
};
//tabtenn1.cpp 13-5 (905pg)
tabletennisplayer::tabletennisplayer(const string& fn, const string& ln, bool ht) : firstname(fn),
lastname(ln), hastable(ht) {}

void tabletennisplayer::Name() const
{
	cout << lastname << ", " << firstname;
}
Ratedplayer::Ratedplayer(unsigned int r, const string& fn, const string& ln, bool ht) :
	tabletennisplayer(fn, ln, ht)
{
	rating = r;
}

Ratedplayer::Ratedplayer(unsigned int r, const tabletennisplayer& tp) : tabletennisplayer(tp), rating(r)
{

}
// usett1.cpp 13-6 (906pg)
int main()
{
	tabletennisplayer player1("Tara","Boomdea", false);
	Ratedplayer rplayer1(1140,"Mallory", "Duck", true);
	rplayer1.Name();
	if (rplayer1.Hastable())
		cout << "Ź���밡 �ִ�.\n";
	else
		cout << "Ź���밡 ����.\n";
	cout << "�̸� : ";
	rplayer1.Name();
	cout << "; ��ŷ : " << rplayer1.Rating() << endl;
	Ratedplayer rplayer2(1212, player1);
	cout << "�̸� : ";
	rplayer1.Name();
	cout << "; ��ŷ : " << rplayer2.Rating() << endl;

	return 0;
}*/


/*
//brass.h 13-7 (914pg)
class Brass
{
private:
	string fullname;
	long accnum;
	double balance;
public:
	Brass(const string & s = "Nullbody", long an = -1,double bal = 0.0);
	void despoit(double amt);
	virtual void  withraw(double amt);
	double Balance() const;
	virtual void viewacc() const;
	virtual ~Brass();
};
class Brassplus : public Brass
{
private:
	double maxloan;
	double rate;
	double owesbank;
public:
	Brassplus(const string& s = "Nullbody", long an = -1, double bal = 0.0, double m1=500, double r = 0.11125);
	Brassplus(const Brass& ba, double m1 = 500, double r = 0.11125);
	virtual void viewacc() const;
	virtual void withdraw(double amt);
	void ResetMax(double m) { maxloan = m; }
	void ResetRate(double r) { rate = r; }
	void ResetOwes() { owesbank = 0; }
};
//brass.cpp 13-8
typedef ios_base::fmtflags format;
typedef streamsize precis;
format setFormat();
void restore(format f,precis p);

Brass::Brass(const string& s, long an, double bal)
{
	fullname = s;
	accnum = an;
	balance = bal;
}
void Brass::despoit(double amt)
{
	if (amt < 0)
		cout << "���̳ʽ� �Ա��� ������� �ʽ��ϴ�.\n"
		<< "�׷��� �Ա��� ��ҵǾ����ϴ�.\n";
	else
		balance += amt;
}
void Brass::withraw(double amt)
{
	format initialstate = setFormat();
	precis prec = cout.precision(2);

	if (amt < 0)
		cout << "���̳ʽ� �Ա��� ������� �ʽ��ϴ�.\n"
		<< "�׷��� �Ա��� ��ҵǾ����ϴ�.\n";
	else if (amt <= balance)
		balance -= amt; \
	else
		cout << "������ �䱸�� �ݾ� $" << amt
		<< "�� ���� �ܾ��� �ʰ��մϴ�.\n"
		<< "�׷��� ������ ��ҵǾ����ϴ�.";
	restore(initialstate, prec);
}
double Brass::Balance() const
{
	return balance;
}
void Brass::viewacc() const
{
	format initialstate = setFormat();
	precis prec = cout.precision(2);
	cout << "�� �̸� : " << fullname << endl;
	cout << "���� ��ȣ : " << accnum << endl;
	cout << "���� �ܾ� : " << balance << endl;
	restore(initialstate, prec);
}
Brassplus::Brassplus(const string& s, long an, double bal, double m1, double r) : Brass(s,an,bal)
{
	maxloan = m1;
	owesbank = 0.0;
	rate = r;
}
Brassplus::Brassplus(const Brass & ba, double m1, double r) : Brass(ba)
{
	maxloan = m1;
	owesbank = 0.0;
	rate = r;
}
void Brassplus::viewacc() const
{
	format initialstate = setFormat();
	precis prec = cout.precision(2);

	Brass::viewacc();
	cout << "���� ��� �ѵ��� : $" << maxloan << endl;
	cout << "��ȯ�� ������ : $" << owesbank << endl;
	cout.precision(3);
	cout << "���� ��� ������ : " << rate * 100 << "%\n";
	restore(initialstate, prec);
}
void Brassplus::withdraw(double amt)
{
	format initialstate = setFormat();
	precis prec = cout.precision(2);

	double bal = Balance();
	if (amt <= bal)
		Brass::withraw(amt);
	else if (amt <= bal + maxloan - owesbank)
	{
		double advance = amt - bal;
		owesbank += advance * (1.0 + rate);
		cout << "���� ��� �ݾ� : $" << advance << endl;
		cout << "���� ��� ���� : $" << advance * rate << endl;
		despoit(advance);
		Brass::withraw(amt);
	}
	else
		cout << "���� ��� �ѵ��� �ʰ��Ǿ� �ŷ��� ��ҵǾ����ϴ�.\n";
	restore(initialstate, prec);
}
format setFormat()
{
	return cout.setf(ios_base::fixed, ios_base::floatfield);
}
void restore(format f, precis p)
{
	cout.setf(f, ios_base::floatfield);
	cout.precision(p);
}
int main()
{
	Brass piggy("porcelot piggy", 381299, 4000.00);
	Brassplus hoggy("horatio hogg", 381288, 3000.00);
	piggy.viewacc();
	cout << endl;
	hoggy.viewacc();
	cout << endl;
	cout << "hogg ���� ���¿� $1000 �Ա� : \n";
	hoggy.despoit(1000.00);
	cout << "hogg ���� ���� �ܾ� : $" << hoggy.Balance() << endl;

	cout << "pigg ���� ���¿� $42000 ���� : \n";
	piggy.withdraw(42000.00);
	cout << "pigg ���� ���� �ܾ� : $" << piggy.Balance() << endl;
	cout << "hogg ���� ���¿� $42000 ���� : \n";
	hoggy.withdraw(42000.00);
	hoggy.viewacc();

	return 0;
}*/


/*
//usebrass2.cpp 13-10 (927pg)
class Brass
{
private:
	string fullname;
	long accnum;
	double balance;
public:
	Brass(const string& s = "Nullbody", long an = -1, double bal = 0.0);
	void despoit(double amt);
	virtual void  withraw(double amt);
	double Balance() const;
	virtual void viewacc() const;
	virtual ~Brass();
};
class Brassplus : public Brass
{
private:
	double maxloan;
	double rate;
	double owesbank;
public:
	Brassplus(const string& s = "Nullbody", long an = -1, double bal = 0.0, double m1 = 500, double r = 0.11125);
	Brassplus(const Brass& ba, double m1 = 500, double r = 0.11125);
	virtual void viewacc() const;
	virtual void withdraw(double amt);
	void ResetMax(double m) { maxloan = m; }
	void ResetRate(double r) { rate = r; }
	void ResetOwes() { owesbank = 0; }
};
const int CLIENTS = 4;
int main()
{
	Brass* p_clients[CLIENTS];
	string temp;
	long tempnum;
	double tempbal;
	char kind;

	for (int i = 0; i < CLIENTS; i++)
	{
		cout << "���� �̸��� �Է��Ͻʽÿ� : ";
		getline(cin, temp);
		cout << "���� ���� ��ȣ�� �Է��Ͻÿ� : ";
		cin >> tempnum;
		cout << "���� ���� �ܾ��� �Է��Ͻʽÿ� : $";
		cin >> tempbal;
		cout << "Brass ���´� 1, " << "Brassplus ���´� 2�� �Է��Ͻʽÿ� : ";
		while (cin >> kind && (kind != '1' && kind != '2'))
			cout << "1 �ƴϸ� 2, �� �� �ϳ��� �Է��Ͻʽÿ�: ";
		if (kind == '1')
			p_clients[i] = new Brass(temp, tempnum, tempbal);
		else
		{
			double tmax, trate;
			cout << "���� ��� �ѵ��� �Է��Ͻʽÿ� : $";
			cin >> tmax;
			cout << "���� ��� �������� �Ҽ��� �������� "
				<< "�Է��Ͻʽÿ� : ";
			cin >> trate;
			p_clients[i] = new Brassplus(temp, tempnum, tempbal, tmax, trate);
		}
		while (cin.get() != '\n')
			continue;
	}
	cout << endl;
	for (int i = 0; i < CLIENTS; i++)
	{
		p_clients[i]->viewacc();
		cout << endl;
	}
	for (int i = 0; i < CLIENTS; i++)
	{
		delete p_clients[i];

	}
	cout << "���α׷��� �����մϴ�.";
	return 0;
}*/



/*
//acctabc.h 13-11 (948pg)
class AcctABC
{
private:
	string fullname;
	long acctNum;
	double balance;
protected:
	struct Formatting
	{
		ios_base::fmtflags flag;
		streamsize pr;
	};
	const string& Fullname() const { return fullname; }
	long Acctnum() const { return acctNum; }
	Formatting setformat() const;
	void Restore(Formatting& f) const;
public:
	AcctABC(const string& s = "Nullbody", long an = -1, double bal = 0.0);
	void Despoit(double amt);
	virtual void withdraw(double amt) = 0;
	double Balace() const { return balance; }
	virtual void viewAcct() const = 0;
	virtual ~AcctABC() {}
};
class Brass : public AcctABC
{
	Brass(const string& s = "Nullbody", long an = -1, double bal = 0.0) : AcctABC(s, an, bal) {}
	virtual void withdraw(double amt);
	virtual void viewAcct() const;
	virtual ~Brass() {}
};
class Brassplus : public AcctABC
{
private:
	double maxloan;
	double rate;
	double owesbank;
public:
	Brassplus(const string& s = "Nullbody", long an = -1, double bal = 0.0, double m1 = 500, double r = 0.10);
	Brassplus(const Brass& ba, double m1 = 500, double r = 0.1);
	virtual void viewacc() const;
	virtual void withdraw(double amt);
	void ResetMax(double m) { maxloan = m; }
	void ResetRate(double r) { rate = r; }
	void ResetOwes() { owesbank = 0; }
};

AcctABC::AcctABC(const string& s, long an, double bal)
{
	fullname = s;
	acctNum = an;
	balance = bal;
}
void AcctABC::Despoit(double amt)
{
	if (amt < 0)
		cout << "���̳ʽ� �Ա��� ������� �ʽ��ϴ�.\n"
		<< "�׷��� �Ա��� ��ҵǾ����ϴ�.\n";
	else
		balance += amt;
}
void AcctABC::withdraw(double amt)
{
	balance -= amt;
}
AcctABC::Formatting AcctABC::setformat() const
{
	Formatting f;
	f.flag = cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(2);
}
void AcctABC::Restore(Formatting& f)const
{
	f.flag = cout.setf(f.flag, ios_base::floatfield);
	cout.precision(f.pr);
}
void Brass::withdraw(double amt)
{
	if (amt < 0)
		cout << "���̳ʽ� �Ա��� ������� �ʽ��ϴ�.\n"
		<< "�׷��� �Ա��� ��ҵǾ����ϴ�.\n";
	else if (amt <= Balace())
		AcctABC::withdraw(amt);
	else
		cout << "������ �䱸�� �ݾ� $" << amt
		<< "�� ���� �ܾ��� �ʰ��մϴ�.\n"
		<< "�׷��� ������ ��ҵǾ����ϴ�.";
}
void Brass::viewAcct() const
{
	Formatting f = setformat();
	cout << "Brass �� : " << Fullname() << endl;
	cout << "���¹�ȣ : " <<Acctnum() << endl;
	cout << "���� �ܾ� : " << Balace() << endl;
	Restore(f);
}
Brassplus::Brassplus(const string& s, long an, double bal, double m1, double r)
{
	maxloan = m1;
	owesbank = 0.0;
	rate = r;
}
Brassplus::Brassplus(const Brass& ba, double m1 , double r)
{
	maxloan = m1;
	owesbank = 0.0;
	rate = r;
}
void Brassplus::viewacc() const
{
	Formatting f = setformat();

	cout << "BrassPlus �� : " << Fullname() << endl;
	cout << "���¹�ȣ : " << Acctnum() << endl;
	cout << "���� �ܾ� : " << Balace() << endl;
	cout << "���� ��� �ѵ��� : $" << maxloan << endl;
	cout << "��ȯ�� ������ : $" << owesbank << endl;
	cout.precision(3);
	cout << "���� ��� ������ : " << rate * 100 << "%\n";
}
void Brassplus::withdraw(double amt)
{
	Formatting f = setformat();


	double bal = Balace();
	if (amt <= bal)
		Brassplus::withdraw(amt);
	else if (amt <= bal + maxloan - owesbank)
	{
		double advance = amt - bal;
		owesbank += advance * (1.0 + rate);
		cout << "���� ��� �ݾ� : $" << advance << endl;
		cout << "���� ��� ���� : $" << advance * rate << endl;
		Despoit(advance);
		Brassplus::withdraw(amt);
	}
	else
		cout << "���� ��� �ѵ��� �ʰ��Ǿ� �ŷ��� ��ҵǾ����ϴ�.\n";
	Restore(f);
}
//usebrass3.cpp 13-13 (954pg)
const int CLIENTS = 4;
int main()
{
	AcctABC* p_clients[CLIENTS];
	string temp;
	long tempnum;
	double tempbal;
	char kind;

	for (int i = 0; i < CLIENTS; i++)
	{
		cout << "���� �̸��� �Է��Ͻʽÿ� : ";
		getline(cin, temp);
		cout << "���� ���� ��ȣ�� �Է��Ͻÿ� : ";
		cin >> tempnum;
		cout << "���� ���� �ܾ��� �Է��Ͻʽÿ� : $";
		cin >> tempbal;
		cout << "Brass ���´� 1, " << "Brassplus ���´� 2�� �Է��Ͻʽÿ� : ";

		while (cin >> kind && (kind != '1' && kind != '2'))
			cout << "1 �ƴϸ� 2, �� �� �ϳ��� �Է��Ͻʽÿ�: ";

		if (kind == '1')
			p_clients[i] = new Brass(temp, tempnum, tempbal);
		else
		{
			double tmax, trate;
			cout << "���� ��� �ѵ��� �Է��Ͻʽÿ� : $";
			cin >> tmax;
			cout << "���� ��� �������� �Ҽ��� �������� "
				<< "�Է��Ͻʽÿ� : ";
			cin >> trate;
			p_clients[i] = new Brassplus(temp, tempnum, tempbal, tmax, trate);
		}
		while (cin.get() != '\n')
			continue;
	}
	cout << endl;
	for (int i = 0; i < CLIENTS; i++)
	{
		p_clients[i]->viewacc();
		cout << endl;
	}
	for (int i = 0; i < CLIENTS; i++)
	{
		delete p_clients[i];

	}
	cout << "���α׷��� �����մϴ�.";
	return 0;
}*/


/*
//dma.h
class baseDMA
{
private:
	char* label;
	int rating;
public:
	baseDMA(const char * l = "null", int r = 0);
	baseDMA(const baseDMA & rs);
	virtual ~baseDMA();
	baseDMA& operator=(const baseDMA& rs);
	friend ostream& operator<<(ostream& os, const baseDMA& rs);
};
class lacksDMA : public baseDMA
{
private:
	enum { COL_LEN = 40 };
	char color{ COL_LEN };
public:
	lacksDMA(const char* c = "blank", const char* l = "null", int r = 0);
	lacksDMA(const char* c, const baseDMA& ls);
	friend ostream& operator<<(ostream& os, const lacksDMA& rs);
};
class hasDMA : public baseDMA
{
private:
	char* style;
public:
	hasDMA(const char* s = "none", const char* l = "null", int r = 0);
	hasDMA(const char* s, const baseDMA& rs);
	hasDMA(const hasDMA& hs);
	~hasDMA();
	friend ostream& operator<<(ostream& os, const hasDMA& rs);
};
//dma.cpp 13-15 (964pg)
baseDMA::baseDMA(const baseDMA& rs)
{
	label = new char[strlen(rs.label) + 1];
	strcpy_s(label, strlen(rs.label + 1), rs.label);
	rating = rs.rating;
}
baseDMA::~baseDMA()
{
	delete[] label;
}
baseDMA& baseDMA::operator=(const baseDMA& rs)
{
	if (this == &rs)
		return *this;
	delete[] label;
	label = new char[strlen(rs.label) + 1];
	strcpy_s(label, strlen(rs.label + 1), rs.label);
	rating = rs.rating;
	return *this;
}
ostream& operator<<(ostream& os, const baseDMA& rs)
{
	os << "��ǥ : " << rs.label << endl;
	os << "��� : " << rs.rating << endl;
	return os;
}
lacksDMA::lacksDMA(const char* c, const char* l, int r) : baseDMA(l, r)
{
	strcpy_s(color,strlen(c+1),c);
	color[39] = '\0';
}
lacksDMA::lacksDMA(const char* c, const baseDMA& rs) : baseDMA(rs)
{
	strcpy_s(color, c, COL_LEN-1);
	color[COL_LEN-1] = '\0';
}
ostream& operator<<(ostream& os, const baseDMA& rs)
{
	os << (const baseDMA&) rs;
	os << "���� : " << rs.color << endl;
	return os;
}
hasDMA::hasDMA(const char* s, const baseDMA& rs) : baseDMA(l, r)
{
	style = new char[strlen(s) + 1];
	strcpy_s(style, strlen(s + 1), s);
}
hasDMA::hasDMA(const hasDMA& hs)
{
	style = new char[strlen(s) + 1];
	strcpy_s(style, strlen(s + 1), s);
}
hasDMA::~hasDMA()
{
	delete[] style;
}
ostream& operator<<(ostream& os, const hasDMA& rs)
{

}
//13-16
*/

