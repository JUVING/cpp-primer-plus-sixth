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