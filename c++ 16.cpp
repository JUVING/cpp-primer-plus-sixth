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
		cerr << "파일을 열수 없습니다.\n";
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
	cout << "프로그램을 종료합니다.\n";
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
	cout << "영어 단어 게일을 하시겠습니까? <Y/N>";
	cin >> play;
	play = tolower(play);
	while (play == 'y')
	{
		string target = wordlist[rand() % NUM];
		int length = target.length();
		string attempt(length, '-');
		string badchars;
		int guesses = 6;
		cout << "수수께끼 단어를 추측해 보십시오.\n"
			<< length << "개의 무자로 이루어져 있습니다.\n"
			<< "한 번에 한 문자씩 추측하십시오.\n"
			<< "틀릴 수 있는 기회: " << guesses << "번\n";
		cout << "추측하는 단어: " << attempt << endl;
		while (guesses > 0 && attempt != target)
		{
			char letter;
			cout << "문자를 추측하십시오:";
			cin >> letter;
			if (badchars.find(letter) != string::npos || attempt.find(letter) != string::npos)
			{
				cout << "이미 추측한 문장비니다. 다시 하십시오.\n";
				continue;
			}
			int loc = target.find(letter);
			if (loc == string::npos)
			{
				cout << "떙! 틀렸습니다.\n";
				--guesses;
				badchars += letter;
			}
			else
			{
				cout << "딩동댕! 맞았습니다.\n";
				attempt[loc] = letter;
				loc = target.find(letter, loc + 1);
				while (loc != string::npos)
				{
					attempt[loc] = letter;
					loc = target.find(letter, loc + 1);
				}
			}
			cout << "추측한 단어: " << attempt << endl;
			if (attempt != target)
			{
				if (badchars.length() > 0)
					cout << "틀리게 추측한 문자들: " << badchars << endl;
				cout << "틀릴 수 있는 기회: " << guesses << "번\n";
			}
		}
		if (guesses > 0)
			cout << "그렇습니다. 그것이 수수께끼 단어입니다.\n";
		else
			cout << "안타깝습니다. 수수께끼 단어는 " << target << "입니다.\n";

		cout << "게임을 다시 하시겠습니까? <Y/N>";
		cin >> play;
		play = tolower(play);
	}
	cout << "프로그램을 종료합니다.\n";

	return 0;
}*/


/*
//str2.cpp 16-4 (1225pg)
int main()
{
	string empty, small = "bit",
		   larger="Elephants are a girl`s best friend";
	cout << "크기:\n";
	cout << "\tempty: " << empty.size() << endl;
	cout << "\tsmall: " << small.size() << endl;
	cout << "\larger: " << larger.size() << endl;
	cout << "용량:\n";
	cout << "\tempty: " << empty.capacity() << endl;
	cout << "\tsmall: " << small.capacity() << endl;
	cout << "\larger: " << larger.capacity() << endl;
	empty.reserve(50);
	cout << "empty.reserve(50) 이후 용량:"
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
	Report(const string s) : str(s) { cout << "객체가 생성되었습니다.\n"; }
	~Report() { cout << "객체가 삭제되었습니다.\n"; }
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

	cout << "다음은 최고의 조류 영화상 후보입니다.\n";
	for (int i = 0; i < 5; i++)
		cout << *films[i] << endl;
	cout << "수상자는 " << *pwin << "!\n";
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
	cout << NUM << "개의 책 제목과 책 등급 (0~10)을 입력하십시오.\n";
	int i;
	for (i = 0; i < NUM; i++)
	{
		cout << i + 1 << "번의 책의 제목을 일렵하십시오 : ";
		getline(cin, titles[i]);
		cout << i + 1 << "번 책의 등급(0~10)을 입ㄹ력하십시오 : ";
		cin >> ratings[i];
		cin.get();
	}
	cout << "감사합니다. 당신은 다음과 같이 입력하셨습니다:\n"<<"등급\t제목\n";

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
		cout << "감사합니다. 당신은 다음과 같이 입력하셨습니다:\n" << "등급\t제목\n";
		for (int i = 0; i < num; i++)
			showReview(books[i]);
		cout << "한번 더 출력한다:\n" << "등급\t제목\n";
		vector<Review>::iterator pr;
		for (pr = books.begin(); pr != books.end(); pr++)
			showReview(*pr);
		vector<Review>oldlist(books);
		if (num > 3)
		{
			books.erase(books.begin() + 1, books.begin() + 3);
			cout << "삭제 후:\n";
			for (pr = books.begin(); pr != books.end(); pr++)
				showReview(*pr);
			books.insert(books.begin(), books.begin() + 1, books.begin() + 2);
			cout << "삽입한 후:\n";
			for (pr = books.begin(); pr != books.end(); pr++)
				showReview(*pr);
		}
		books.swap(oldlist);
		cout << "oldlist와 books를 교환 후:\n";
		for (pr = books.begin(); pr != books.end(); pr++)
			showReview(*pr);
	}
	else
		cout << "입력한 것이 없어, 얻은 것이 없습니다.\n";
	return 0;
}
bool FillReview(Review& rr)
{
	cout << "책 제목을 입력하십시오(끝내려면 quit를 입력): ";
	getline(cin, rr.titles);
	if (rr.titles == "quit")
		return false;
	cout << "번 책의 등급(0~10)을 입력하십시오 : ";
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