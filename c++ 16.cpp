#include "main.h"


/*/
//str1.cpp 16-1 (1209pg)
int main()
{
	string one("Lottery Winner!");
	cout << one << endl;
	string two(20, '$');
	cout << two << endl;
	string three(one);
	cout << three << endl;
	one += " Oops!";
	cout << one << endl;
	two = "Sorry that was ";
	three[0] = 'P';
	string four;
	four = two + three;
	cout << four << endl;
	char alls[] = "All`s well that ends well";
	string five(alls, 20);
	cout << five << "!\n";
	string six(alls + 6, alls + 10);
	cout << six << ", ";
	string seven(&five[6], &five[10]);
	cout<<seven<< "...\n";
	string eight(four, 7, 16);
	cout << eight << "in motion!" << endl;
	return 0;
}*/


/*
//strfile.cpp 16-2 (1216pg)
int main()
{
	ifstream fin;
	fin.open("tobuy.txt");
	if (fin.is_open() == false)
	{
		cerr << "������ ���� �����ϴ�.\n";
		exit(EXIT_FAILURE);
	}
	string item;
	int count = 0;
	getline(fin, item, ':');
	while (fin)
	{
		++count;
		cout << count << ": " << item << endl;
		getline(fin, item, ':');
	}
	cout << "���α׷��� �����մϴ�.\n";
	fin.close();
	return 0;
}*/



/*
//hangman.cpp 16-3 (1220pg)
const int NUM = 26;
const string wordlist[NUM] = { "apiary", "beetle", "cereal", "danger", "ensign", "florid",
		"garage", "health", "insult", "jackal", "keeper", "loaner", "manage", "nonce", "onset",
		"plaid", "quilt", "remote", "stolid", "train", "useful", "vaild", "whence", "xenon", "yearn", "zippy" };

int main()
{
	srand(time(0));
	char play;
	cout << "���� �ܾ� ������ �Ͻðڽ��ϱ�? <Y/N>";
	cin >> play;
	play = tolower(play);
	while (play == 'y')
	{
		string target = wordlist[rand() % NUM];
		int length = target.length();
		string attempt(length, '-');
		string badchars;
		int guesses = 6;
		cout << "�������� �ܾ ������ ���ʽÿ�.\n"
			<< length << "���� ���ڷ� �̷���� �ֽ��ϴ�.\n"
			<< "�� ���� �� ���ھ� �����Ͻʽÿ�.\n"
			<< "Ʋ�� �� �ִ� ��ȸ: " << guesses << "��\n";
		cout << "�����ϴ� �ܾ�: " << attempt << endl;
		while (guesses > 0 && attempt != target)
		{
			char letter;
			cout << "���ڸ� �����Ͻʽÿ�:";
			cin >> letter;
			if (badchars.find(letter) != string::npos || attempt.find(letter) != string::npos)
			{
				cout << "�̹� ������ �����ϴ�. �ٽ� �Ͻʽÿ�.\n";
				continue;
			}
			int loc = target.find(letter);
			if (loc == string::npos)
			{
				cout << "��! Ʋ�Ƚ��ϴ�.\n";
				--guesses;
				badchars += letter;
			}
			else
			{
				cout << "������! �¾ҽ��ϴ�.\n";
				attempt[loc] = letter;
				loc = target.find(letter, loc + 1);
				while (loc != string::npos)
				{
					attempt[loc] = letter;
					loc = target.find(letter, loc + 1);
				}
			}
			cout << "������ �ܾ�: " << attempt << endl;
			if (attempt != target)
			{
				if (badchars.length() > 0)
					cout << "Ʋ���� ������ ���ڵ�: " << badchars << endl;
				cout << "Ʋ�� �� �ִ� ��ȸ: " << guesses << "��\n";
			}
		}
		if (guesses > 0)
			cout << "�׷����ϴ�. �װ��� �������� �ܾ��Դϴ�.\n";
		else
			cout << "��Ÿ�����ϴ�. �������� �ܾ�� " << target << "�Դϴ�.\n";

		cout << "������ �ٽ� �Ͻðڽ��ϱ�? <Y/N>";
		cin >> play;
		play = tolower(play);
	}
	cout << "���α׷��� �����մϴ�.\n";

	return 0;
}*/


/*
//str2.cpp 16-4 (1225pg)
int main()
{
	string empty, small = "bit",
		   larger="Elephants are a girl`s best friend";
	cout << "ũ��:\n";
	cout << "\tempty: " << empty.size() << endl;
	cout << "\tsmall: " << small.size() << endl;
	cout << "\larger: " << larger.size() << endl;
	cout << "�뷮:\n";
	cout << "\tempty: " << empty.capacity() << endl;
	cout << "\tsmall: " << small.capacity() << endl;
	cout << "\larger: " << larger.capacity() << endl;
	empty.reserve(50);
	cout << "empty.reserve(50) ���� �뷮:"
		<< empty.capacity() << endl;

	return 0;
}*/


/*
//smrtptrs.cpp 16-5 (1231pg)
class Report
{
private:
	string str;
public:
	Report(const string s) : str(s) { cout << "��ü�� �����Ǿ����ϴ�.\n"; }
	~Report() { cout << "��ü�� �����Ǿ����ϴ�.\n"; }
	void comment() const { cout << str << "\n"; }
};
int main()
{
	{
		auto_ptr<Report>ps(new Report("auto_ptr"));
		ps->comment();
	}
	{
		shared_ptr<Report>ps(new Report("shared_ptr"));
		ps->comment();
	}
	{
		unique_ptr<Report>ps(new Report("unique_ptr"));
		ps->comment();
	}
	return 0;
}*/


/*
//fow1.cpp 16-6 (1234pg)
int main()
{
	auto_ptr<string> films[5] =
	{
		auto_ptr<string>(new string("Fow1 Balls")),
		auto_ptr<string>(new string("duck Walks")),
		auto_ptr<string>(new string("Chicken Runs")),
		auto_ptr<string>(new string("Turkey Errors")),
		auto_ptr<string>(new string("Goose Eggs"))
	};
	auto_ptr<string> pwin;
	pwin = films[2];

	cout << "������ �ְ��� ���� ��ȭ�� �ĺ��Դϴ�.\n";
	for (int i = 0; i < 5; i++)
		cout << *films[i] << endl;
	cout << "�����ڴ� " << *pwin << "!\n";
	cin.get();
	return 0;
}*/



/*
//vect1.cpp 16-7 (1243pg)
const int NUM = 5;
int main()
{
	vector<int> ratings(NUM);
	vector<string> titles(NUM);
	cout << NUM << "���� å ����� å ��� (0~10)�� �Է��Ͻʽÿ�.\n";
	int i;
	for (i = 0; i < NUM; i++)
	{
		cout << i + 1 << "���� å�� ������ �Ϸ��Ͻʽÿ� : ";
		getline(cin, titles[i]);
		cout << i + 1 << "�� å�� ���(0~10)�� �Ԥ����Ͻʽÿ� : ";
		cin >> ratings[i];
		cin.get();
	}
	cout << "�����մϴ�. ����� ������ ���� �Է��ϼ̽��ϴ�:\n"<<"���\t����\n";

	for (i = 0; i < NUM; i++)
	{
		cout << ratings[i] << "\t" << titles[i] << endl;
	}
	return 0;
}*/



/*
//vect2.cpp 16-8 (1248pg)
struct Review
{
	string titles;
	int rating;
};
bool FillReview(Review& rr);
void showReview(const Review& rr);

int main()
{
	vector<Review>books;
	Review temp;
	while (FillReview(temp))
		books.push_back(temp);
	int num = books.size();
	if (num > 0)
	{
		cout << "�����մϴ�. ����� ������ ���� �Է��ϼ̽��ϴ�:\n" << "���\t����\n";
		for (int i = 0; i < num; i++)
			showReview(books[i]);
		cout << "�ѹ� �� ����Ѵ�:\n" << "���\t����\n";
		vector<Review>::iterator pr;
		for (pr = books.begin(); pr != books.end(); pr++)
			showReview(*pr);
		vector<Review>oldlist(books);
		if (num > 3)
		{
			books.erase(books.begin() + 1, books.begin() + 3);
			cout << "���� ��:\n";
			for (pr = books.begin(); pr != books.end(); pr++)
				showReview(*pr);
			books.insert(books.begin(), books.begin() + 1, books.begin() + 2);
			cout << "������ ��:\n";
			for (pr = books.begin(); pr != books.end(); pr++)
				showReview(*pr);
		}
		books.swap(oldlist);
		cout << "oldlist�� books�� ��ȯ ��:\n";
		for (pr = books.begin(); pr != books.end(); pr++)
			showReview(*pr);
	}
	else
		cout << "�Է��� ���� ����, ���� ���� �����ϴ�.\n";
	return 0;
}
bool FillReview(Review& rr)
{
	cout << "å ������ �Է��Ͻʽÿ�(�������� quit�� �Է�): ";
	getline(cin, rr.titles);
	if (rr.titles == "quit")
		return false;
	cout << "�� å�� ���(0~10)�� �Է��Ͻʽÿ� : ";
	cin >> rr.rating;
	if (!cin)
		return false;
	while (cin.get() != '\n')
		continue;
	return true;
}
void showReview(const Review& rr)
{
	cout << rr.rating << "\t" << rr.titles << endl;
}*/


/*
//vwct3.cpp 16-9 (1254pg)
struct Review
{
	string titles;
	int rating;
};
bool operator<(const Review& r1, const Review& r2);
bool woreThan(const Review& r1, const Review& r2);
bool FillReview(Review& rr);
void showReview(const Review& rr);

int main()
{
	vector<Review>books;
	Review temp;
	while (FillReview(temp))
		books.push_back(temp);
	
	if (books.size() > 0)
	{
		cout << "�����մϴ�. ����� ������ ���� " << books.size() << "���� å ����� �Է��ϼ̽��ϴ�.\n" << "���\t����\n";

		for_each(books.begin(),books.end(),showReview);
		
		sort(books.begin(), books.end());
		cout << "å ������ �������� ����:\n���\t����\n";
		for_each(books.begin(), books.end(), showReview);

		sort(books.begin(), books.end());
		cout << "å ����� �������� ����:\n���\t����\n";
		for_each(books.begin(), books.end(), showReview);

		random_shuffle(books.begin(), books.end());
		cout << "������ ������ �ٽ� ��ġ:\n���\t����\n";
		for_each(books.begin(), books.end(), showReview);
	}
	else
		cout << "���α׷��� �����մϴ�.\n";
	return 0;
}
bool operator<(const Review& r1, const Review& r2)
{
	if (r1.titles < r2.titles)
		return true;
	else if (r1.titles == r2.titles && r1.titles < r2.titles)
		return true;
	else
		return false;
}
bool woreThan(const Review& r1, const Review& r2)
{
	if (r1.titles < r2.titles)
		return true;
	else
		return false;
}

bool FillReview(Review& rr)
{
	cout << "å ������ �Է��Ͻʽÿ�(�������� quit�� �Է�): ";
	getline(cin, rr.titles);
	if (rr.titles == "quit")
		return false;
	cout << "�� å�� ���(0~10)�� �Է��Ͻʽÿ� : ";
	cin >> rr.rating;
	if (!cin)
		return false;
	while (cin.get() != '\n')
		continue;
	return true;
}
void showReview(const Review& rr)
{
	cout << rr.rating << "\t" << rr.titles << endl;
}*/



/*
//copyit.cpp 16-10 (1274pg)
int main()
{
	int casts[10] = { 6,7,2,9,4,11,8,7,10,5 };
	vector<int>dice(10);
	copy(casts, casts + 10, dice.begin());
	cout << "�ֻ����� ������\n";
	ostream_iterator<int, char> out_iter(cout, " ");
	copy(dice.begin(), dice.end(), out_iter);
	cout << endl;
	cout << "������ ���ͷ����� ��� �Ͻ��� ���: \n";
	copy(dice.rbegin(), dice.rend(), out_iter);
	cout << endl;
	cout << "������ ���ͷ����� ��� ����� ���: \n";
	vector<int>::reverse_iterator ri;
	for (ri = dice.rbegin(); ri != dice.rend(); ++ri)
		cout << *ri << ' ';
	cout << endl;

	return 0;
}*/



/*
//inserts.cpp 16-11 (1277pg)
void output(const string& s) { cout << s<<" "; }

int main()
{
	string s1[4] = { "fine","fish","fashion","fate" };
	string s2[2] = { "busy","bats" };
	string s3[2] = { "silly","singers" };
	vector<string>words(4);
	copy(s1, s1 + 4, words.begin());
	for_each(words.begin(), words.end(), output);
	cout << endl;

	copy(s2, s2 + 2, back_insert_iterator<vector<string>>(words));
	for_each(words.begin(), words.end(), output);
	cout << endl;

	copy(s3, s3 + 2, insert_iterator<vector<string>>(words, words.begin()));
	for_each(words.begin(), words.end(), output);
	cout << endl;

	return 0;
}*/




/*
//list.cpp 16-12 (1287pg)
void outint(int n) { cout << n << " "; }
int main()
{
	list<int>one(5, 2);
	int stuff[5] = { 1,2,4,8,6 };
	list<int>two;
	two.insert(two.begin(), stuff, stuff + 5);
	int more[6] = { 6,4,2,4,6,5 };
	list<int>three(two);
	three.insert(three.end(), more, more + 6);

	cout << "����Ʈ one: ";
	for_each(one.begin(), one.end(), outint);
	cout << "����Ʈ two: ";
	for_each(two.begin(), two.end(), outint);
	cout << "����Ʈ three: ";
	for_each(three.begin(), three.end(), outint);
	three.remove(2);
	cout << endl << "����Ʈ three���� 2���� ����: ";
	for_each(three.begin(), three.end(), outint);
	three.splice(three.begin(), one);
	cout << endl << "���� ���� ����Ʈ three ";
	for_each(three.begin(), three.end(), outint);
	cout << endl << "����Ʈ one: ";
	for_each(one.begin(), one.end(), outint);
	three.unique();
	cout << endl << "����ȭ ���� ����Ʈ three: ";
	for_each(three.begin(), three.end(), outint);
	three.sort();
	three.unique();
	cout << endl << "���İ� ����ȭ ���� ����Ʈ three: ";
	for_each(three.begin(), three.end(), outint);
	two.sort();
	three.merge(two);
	cout << endl << "���ĵ� ����Ʈ two�� ����Ʈ three�� �պ�: ";
	for_each(three.begin(), three.end(), outint);
	cout << endl;

	return 0;
}*/



/*
//setops.cpp 16-13 (1295pg)
int main()
{
	const int N = 6;
	string s1[N] = { "buffoon","thinkers","for","heavy","can","for" };
	string s2[N] = { "metal","any","food","elegant","deliver","for" };

	set<string>A(s1, s1 + N);
	set<string>B(s2, s2 + N);

	ostream_iterator<string, char>out(cout, " ");
	cout << "���� A:";
	copy(A.begin(), A.end(), out);
	cout << "���� B:";
	copy(B.begin(), B.end(), out);
	cout << endl;

	cout << "A�� B�� ������:\n";
	set_union(A.begin(), A.end(), B.begin(), B.end(), out);
	cout << endl;

	cout << "A�� B�� ������:\n";
	set_intersection(A.begin(), A.end(), B.begin(), B.end(), out);
	cout << endl;

	cout << "A�� B�� ������:\n";
	set_difference(A.begin(), A.end(), B.begin(), B.end(), out);
	cout << endl;

	set<string>c;
	cout << "���� C:\n";
	set_union(A.begin(), A.end(), B.begin(), B.end(), insert_iterator<set<string>>(c,c.begin()));
	copy(c.begin(), c.end(), out);
	cout << endl;

	string s3("grungy"); 
	c.insert(s3);
	cout << "������ ���� ���� c:\n";
	copy(c.begin(), c.end(), out);
	cout << endl;
	cout << "Ư�� ������ ǥ��:\n";
	copy(c.lower_bound("ghost"), c.upper_bound("spook"), out);
	cout << endl;

	return 0;
}*/



/*
//multmap.cpp 16-14 (1299pg)
typedef int KeyType;
typedef std::pair <const KeyType, std::string>Pair;
typedef std::multimap<KeyType, std::string>Mapcode;

int main()
{
	Mapcode codes;

	codes.insert(Pair(415, "�������ý���"));
	codes.insert(Pair(510, "��Ŭ����"));
	codes.insert(Pair(718, "���Ŭ��"));
	codes.insert(Pair(718, "����ư ��"));
	codes.insert(Pair(415, "�����Ŀ�"));
	codes.insert(Pair(510, "��Ŭ��"));

	cout << "�����ڵ� 415�� ���� ��: " << codes.count(415) << endl;
	cout << "�����ڵ� 718�� ���� ��: " << codes.count(718) << endl;
	cout << "�����ڵ� 510�� ���� ��: " << codes.count(510) << endl;
	cout << "���� �ڵ�    ����\n";
	Mapcode::iterator it;
	for (it = codes.begin(); it != codes.end(); ++it)
		cout << "    " << (*it).first << "    " << (*it).second << endl;
	pair<Mapcode::iterator, Mapcode::iterator>range = codes.equal_range(718);
	cout << "�����ڵ� 718�� ���õ�: \n";
	for (it = range.first; it != range.second; ++it)
		cout << (*it).second << endl;

	return 0
}*/



/*
//functor.cpp 16-15 (1304pg)
template<class T>
class Toobig
{
private:
	T cutoff;
public:
	Toobig(const T& t) : cutoff(t) {}
	bool operator() (const T& v) { return v > cutoff; }
};

void outint(int n) { cout << n << " "; }
int main()
{
	Toobig<int>f100(100);
	int vals[10] = { 50,100,90,180,60,210,415,88,188,201 };
	list<int>yadayada(vals, vals + 10);
	list<int>etcetera(vals, vals + 10);
	cout << "������ ����Ʈ: \n";
	for_each(yadayada.begin(), yadayada.end(), outint);
	cout << endl;
	for_each(etcetera.begin(), etcetera.end(), outint);
	cout << endl;
	yadayada.remove_if(f100);
	etcetera.remove_if(Toobig<int>(200));
	cout << "����� ����Ʈ: \n";
	for_each(yadayada.begin(), yadayada.end(), outint);
	cout << endl;
	for_each(etcetera.begin(), etcetera.end(), outint);
	cout << endl;

	return 0;
}*/



/*
//funadap.cpp 16-16 (1310pg)
void show(double);
const int LIM = 6;
int main()
{
	double arr1[LIM] = { 28,29,30,35,38,59 };
	double arr2[LIM] = { 63,65,69,75,80,99 };
	vector<double>gr8(arr1, arr1 + LIM);
	vector<double>m8(arr2, arr2 + LIM);
	cout.setf(ios_base::fixed);
	cout.precision(1);
	cout << "gr8:\t";
	for_each(gr8.begin(), gr8.end(), show);
	cout << endl;
	cout << "m8:\t";
	for_each(m8.begin(), m8.end(), show);
	cout << endl;

	vector<double>sum(LIM);
	transform(gr8.begin(), gr8.end(), m8.begin(), sum.begin(), plus<double>());
	cout << "sum:\t";
	for_each(sum.begin(), sum.end(), show);
	cout << endl;

	vector<double>prod(LIM);
	transform(gr8.begin(), gr8.end(), m8.begin(), prod.begin(), bind1st(multiplies<double>(),2.5));
	cout << "prod:\t";
	for_each(prod.begin(), prod.end(), show);
	cout << endl;

	return 0;
}
void show(double v)
{
	cout.width(6);
	cout << v << ' ';
}*/




/*
//strgst1.cpp 16-17 (1316pg)
int main()
{
	string letters;
	cout << "���� �׷��� �Է��Ͻʽÿ�(�������� quit): ";
	while (cin>>letters && letters != "quit")
	{
		cout << letters << "�� ��� ġȯ��: " << endl;
		sort(letters.begin(), letters.end());
		cout << letters << endl;
		while (next_permutation(letters.begin(), letters.end()))
			cout << letters << endl;
		cout << "���� �������� �Է��Ͻʽÿ�(�������� quit): ";
	}
	cout<<"���α׷��� �����մϴ�.\n";
	return 0;
}*/



/*
//listrmv.cpp 16-18 (1318pg)
void show(int);
const int LIM = 10;
int main()
{
	int ar[LIM] = { 4,5,4,2,2,3,4,8,1,4 };
	list<int>la(ar, ar + LIM);
	list<int>lb(la);
	cout << "�������� ����Ʈ�� ����:\n\t";
	for_each(la.begin(), la.end(), show);
	cout << endl;
	la.remove(4);
	cout << "remove() �޼��带 ����� ��:\n";
	cout << "la: \t";
	for_each(la.begin(), la.end(), show);
	cout << endl;
	list<int>::iterator last;
	last = remove(lb.begin(), lb.end(), 4);
	cout << "remove() �Լ��� ����� ��:\n";
	cout << "lb: \t";
	for_each(lb.begin(), lb.end(), show);
	cout << endl;
	lb.erase(last, lb.end());
	cout << "erase() �Լ��� ����� ��:\n";
	cout << "lb: \t";
	for_each(lb.begin(), lb.end(), show);
	cout << endl;
	return 0;
}
void show(int v)
{
	cout << v << ' ';
}*/



/*
//usealgo.cpp 16-19 (1322pg)
char toLower(char ch) { return tolower(ch); }
string& ToLower(string& st);
void display(const string& s);

int main()
{
	vector<string>words;
	cout << "�ܾ���� �Է��Ͻʽÿ�(�������� quit):\n";
	string input;
	while (cin >> input && input != "quit")
		words.push_back(input);
	cout << "������ ���� �ܾ���� �Է��ϼ̽��ϴ�.\n";
	for_each(words.begin(), words.end(), display);
	cout << endl;

	set<string>wordset;
	transform(words.begin(), words.end(), insert_iterator<set<string>>(wordset, wordset.begin()), ToLower);
	cout << "\n�ܾ���� ���ĺ��� ����Ʈ: \n";
	for_each(wordset.begin(), wordset.end(), display);
	cout << endl;
	map<string, int>wordmap;
	set<string>::iterator si;
	for (si = wordset.begin(); si != wordset.end(); si++)
		cout << *si << ": " << wordmap[*si] << endl;

	return 0;
}
string& ToLower(string& st)
{
	transform(st.begin(), st.end(), st.begin(), toLower);
	return st;
}
void display(const string& s)
{
	cout << s << ' ';
}*/



/*
//valvect.cpp 16-20 (1328pg)
int main()
{
	vector<double> data;
	double temp;

	cout << "������ �Է��Ͻʽÿ�(�������� <=0): \n";
	while (cin >> temp && temp > 0)
		data.push_back(temp);
	sort(data.begin(), data.end());
	int size = data.size();
	valarray<double>numbers(size);
	int i;
	for (i = 0; i < size; i++)
		numbers[i] = data[i];
	valarray<double>sq_rts(size);
	sq_rts = sqrt(numbers);
	valarray<double>results(size);
	results = numbers + 2.0 * sq_rts;
	cout.setf(ios_base::fixed);
	cout.precision(4);
	for (i = 0; i < size; i++)
	{
		cout.width(8);
		cout << numbers[i] << ": ";
		cout.width(8);
		cout << results[i] << endl;
	}
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}*/



/*
//vslice.cpp 16-21 (1330pg)
const int SIZE = 12;
typedef valarray<int>vint;
void show(const vint & v,int cols);

int main()
{
	vint valint(SIZE);
	int i;
	for (i = 0; i < SIZE; ++i)
		valint[i] = rand() % 10;
	cout << "������ �迭: \n";
	show(valint, 3);
	vint vcol(valint[slice(1, 4, 3)]);
	cout << "�� 2��: \n";
	show(vcol, 1);
	vint vrow(valint[slice(3, 3, 1)]);
	cout << "�� 2��: \n";
	show(vrow, 3);
	valint[slice(2, 4, 3)] = 10;
	cout << "������ ���� �� 10���� ����:\n";
	show(valint, 3);
	cout << "��1���� �� ���� �ο��� ������ ����: \n";
	valint[slice(0, 4, 3)] = vint(valint[slice(1, 4, 3)]) + vint(valint[slice(2, 4, 3)]);
	show(valint, 3);
	return 0;
}
void show(const vint& v, int cols)
{
	int lim = v.size();
	for (int i = 0; i < lim; ++i)
	{
		cout.width(3);
		cout << v[i];
		if (i % cols == cols - 1)
			cout << endl;
		else
			cout << ' ';
	}
	if (lim % cols != 0)
		cout << endl;
}*/



/*
//ilist.cpp 16-22 (1334pg)
double sum(initializer_list<double>il);
double average(const initializer_list<double>ril);

int main()
{
	cout << "��� 1 : �հ� = " << sum({ 2,3,4 }) << ", ��� = " << average({ 2,3,4 }) << '\n';
	initializer_list<double>dl = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	cout << "��� 2 : �հ� = " << sum(dl) << ", ��� = " << average(dl) << '\n';
	dl = { 16.0, 25.0, 36.0, 40.0, 64.0 };
	cout << "��� 3 : �հ� = " << sum(dl) << ", ��� = " << average(dl) << '\n';
	return 0;
}
double sum(initializer_list<double>il)
{
	double tot = 0;
	for (auto p = il.begin(); p != il.end(); p++)
		tot += *p;
	return tot;

}
double average(const initializer_list<double>ril)
{
	double tot = 0;
	int n = ril.size();
	double ave = 0.0;
	if (n > 0)
	{
		for(auto p = ril.begin(); p != ril.end(); p++)
			tot += *p;
		ave = tot / n;
	}
	return ave;
}*/