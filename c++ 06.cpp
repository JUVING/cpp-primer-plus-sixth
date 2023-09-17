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
	cout << "이 문장의 총 문자 수는 " << total << " 이고, ";
	cout << "그 중에서 빈칸은 " << spaces << "개 입니다.\n";

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
	cout << "\n혼란스럽게 해서 죄송하니다.\n";

	return 0;
}*/

/* ifelseif 6-3 (314pg)
int main()
{
	int n;

	cout << "1에서 100까지 범위에서 하나의 수를 알아맞히는 게임입니다.\n";

	do
	{
		cout << ">>> ";
		cin >> n;
		if (n < 27)
			cout << "그것보다 큽니다. : " << n << endl;
		else if(n>27)
			cout << "그것보다 작습니다. : " << n << endl;
		else
			cout << "정답입니다. : " << n;
	} while (n != 27);


	return 0;
}*/

/* or 6-4 (317pg)
int main()
{
	cout << "이 프로그램은 하드 디스크를 다시 포맷합니다\n"
			"하드 디스크에 있는 모든 데이터가 지워집니다.\n"
			"계속하시겠습니까? <Y/N>";

	char ch;
	cin >> ch;
	if (ch == 'y' || ch == 'Y')
		cout << "당신에게 분명히 경고 했습니다.\a\a\n";
	else if (ch == 'n' || ch == 'N')
		cout << "현명한 선택입니다. 프로그램을 종료합니다.\n";
	else
		cout << "y나 n을 입력하지 않았습니다.\n"
				"지시사항을 따를 수 없습니다."
				"휴지통을 비우고 디스크를 정리하겠습니다\n";

	return 0;
}*/

/* and 6-5 (319pg)
const int arsize = 6;
int main()
{
	float naaq[arsize];
	cout << "동료들의 뉴에이지 자각 지수(NAAQ)를 입력하십시오\n"
		<< arsize << "명의 데이터를 모두 입력했거나, 음수를 입력하면\n"
		<< "while 루프를 탈출합니다.\n";

	int i = 0;
	float temp;
	cout << "첫 번쨰 값 : ";
	cin >> temp;

	while (i<arsize && temp>=0)
	{
		naaq[i] = temp;
		++i;
		if (i < arsize)
		{
			cout << "그 다음 값 : ";
			cin >> temp;
		}
	}
	if (i == 0)
		cout << "입력한 데이터가 없으므로 프로그램을 종료합니다.\n";
	else
	{
		cout << "당신의 NAAQ를 입력하시오 : ";
		float you;
		cin >> you;
		int count = 0;

		for (int j = 0; j < i; j++)
			if (naaq[j] > you)
				++count;
		cout << "동료들 중에서 " << count;
		cout << "명이 당신보다 NAAQ가 높습니다.\n";
	}
	return 0;
}*/

/* more_and 6-6 (322pg)
const char* qualify[4] =
{
	"만미터 달리기",
	"모래사장 씨름",
	"비치 발리",
	"부메랑 던지기"
};
int main()
{
	int age;
	cout << "나이를 입력하십시오 : ";
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

	cout << "당신은 " << qualify[index] << "에 참가할 수 있습니다.\n";
	return 0;
}*/

/* not 6-7 (324pg)
bool is_int(double);
int main()
{
	double num;

	cout << "정수의 값을 하나 입력하시오 : ";
	cin >> num;

	while (!is_int(num))
	{
		cout << "int형에 대입할 수 없는 값입니다. 다시 입력하십시오 : ";
		cin >> num;
	}
	int val = int(num);
	cout << "당신이 입력한 정수는 " << val << "입니다\n";

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
	cout << "분석할 텍스트를 입력하십시오."
			"입력의 끝을 0으로 표시하십시오.\n";

	char ch;
	int whitespace = 0, digits = 0, chars = 0,
		punct = 0, others = 0;

	cin.get(ch);
	while (ch != '@')
	{
		if (isalpha(ch)) //isalpha는 알파벳 대소문자를 확인한다.
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
	cout << "알파벳 문자 " << chars << ", "
		<< "화이트스페이스 " << whitespace << ", "
		<< "숫자 " << digits << ", "
		<< "구두점 " << punct << ", "
		<< "기타 " << others << endl;

	return 0;
}*/

/* condit 6-9 (331pg)
int main()
{
	int a, b;
	cout << "두 개의 정수를 입력하십시오 : ";
	cin >> a >> b;
	cout << "둘 중에서 더 큰 정수는 ";
	int c = a > b ? a : b; //a>b이면 c=a, 그렇지 않으면 c=b
	cout << c << "입니다.\n";

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

			case 3: cout << "사장님은 오늘 회사에 계셨습니다.\n"; break;

			case 4: comport(); break;

			default: cout << "그것은 선택할 수 없습니다.\n";
		}
		showmenu();
		cin >> choice;
	}
	cout << "프로그램을 종료합니다!\n";
	return 0;
}
void showmenu()
{
	cout << "1, 2, 3, 4, 5번 중에서 하나를 선택하십시오: \n"
			"1) 경고음	        2) 보고서\n"
			"3) 알리바이		4) 격려사\n"
			"5) 종료\n";
}
void report()
{
	cout << "이번 분기는 경영 실적이 아주 좋습니다.\n"
			"판매량은 120% 늘어났고, 비용은 35% 줄였습니다.\n";
}
void comport()
{
	cout << "사원들은 당신을 업계 최고의 CEO라고 생각하고 있습니다.\n"
			"이사회도 당신을 업계 최고의 CEO라고 생각하고 있습니다.\n";
}*/

/* enum 6-11 (338pg) //enum : 열거체
enum {red, orange,yellow, green, blue, violet, indigo};
int main()
{
	cout << "컬러코드 (1,2,3,4,5,6)를 입력하십시오 : ";
	int code;
	cin >> code;

	while (code >= red && code <= indigo)
	{
		switch (code)
		{
			case red: cout << "입술은 붉었습니다.\n"; break;
			case orange: cout << "머리카락이 귤색이었습니다.\n"; break;
			case yellow: cout << "신발은 노란색이었습니다..\n"; break;
			case green: cout << "손톱은 초록색이었습니다.\n"; break;
			case blue: cout << "스웨터는 파란색이었습니다.\n"; break;
			case violet: cout << "눈은 보라색이었습니다.\n"; break;
			case indigo: cout << "분위기는 쪽빛이었습니다.\n"; break;
		}
		cout << "컬러코드 (1,2,3,4,5,6)를 입력하십시오 : ";
		cin >> code;
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}*/

/* jump 6-12 (340pg)
const int arsize = 80;
int main()
{
	char line[arsize];
	int spaces = 0;

	cout << "한 행의 텍스트를 입력하십시오:\n";
	cin.get(line, arsize);
	cout << "전체 텍스트:\n" << line << endl;
	cout << "첫 마침표까지의 텍스트:\n";

	for (int i = 0; line[i] != '\0'; i++)
	{
		cout << line[i];
		if (line[i] == '.')
			break;
		if (line[i] != ' ')
			continue;
		spaces++;
	}
	cout << "\n빈칸 문자는 " << spaces << "개입니다.\n";
	cout << "종료.\n";

	return 0;
}*/

/* cinfish 6-13 (344pg)
const int Max = 5;
int main()
{
	double fish[Max];
	cout << "오늘 낚은 물고기의 무게를 입력하십시오.\n";
	cout << "물고기는 최대 " << Max << "마리까지 낚을 수 있습니다.\n"
		<< "<입력을 끝내려면 q를 누르십시오.>\n";
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
		cout << "물고기를 한 마리도 낚지 못하셨군요.\n";
	else
		cout << "물고기 " << i << "마리의 평균 무게는 "
		<< total / i << "그램입니다.\n";
	cout << "프로그램을 종료합니다.";

	return 0;
}*/

/* cingolf 6-14 (346pg)
const int Max = 5;
int main()
{
	int golf[Max];
	cout << "골프 점수를 입력하십시오.\n";
	cout << "총 " << Max << "라운드 점수를 입력해야 합니다.\n";
	int i;

	for (i = 0; i < Max; i++)
	{
		cout << "round #" << i + 1 << ": ";
		while (!(cin>>golf[i]))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "골프 점수를 입력하십시오: ";
		}
	}
	double total = 0.0;
	for (i = 0; i < Max; i++)
		total += golf[i];

	cout << "총 " << Max << "라운드의 평균 점수 = "
		 << total / Max << endl;

	return 0;
}*/

/* outfile 6-15 (352pg) //ofstream 출력 파일 스트림이다.
int main()
{
	char automobile[50];
	int year;
	double a_price;
	double b_price;

	ofstream outfile; //출력을 위한 객체 생성
	outfile.open("carinfo.txt"); //파일에 연결

	cout << "자동차 메이커와 차종을 입력하시오 : ";
	cin.getline(automobile, 50);
	cout << "연식을 입력하시오 : ";
	cin >> year;
	cout << "구입 가격을 입력하시오 : ";
	cin >> a_price;
	b_price = 0.913 * a_price;

	cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << "메이커와 차종 " << automobile << endl;
	cout << "연식 " << year << endl;
	cout << "구입 가격 " << a_price << endl;
	cout << "현제 가격 " << b_price << endl;

	outfile << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << "메이커와 차종 " << automobile << endl;
	cout << "연식 " << year << endl;
	cout << "구입 가격 " << a_price << endl;
	cout << "현제 가격 " << b_price << endl;

	outfile.close(); //파일 처리 종료
	return 0;
}*/

/* sumafile 6-16 (358pg) //iffile은 입력 파일 스트림이다.
const int Size = 60;
int main()
{
	char filename[Size];
	ifstream infile;
	cout << "데이터 파일의 이름을 입력하시오: ";
	cin.getline(filename, Size);
	infile.open(filename);

	if (!infile.is_open())
	{
		cout << filename << "파일을 열 수 없습니다."<<endl;
		cout << "프로그램을 종료합니다.\n";
		exit(EXIT_FAILURE);
	}
	double value;
	double sum = 0.0;
	int count = 0;

	infile >> value;
	while (infile.goodbit()) //입력이 양호하고 EOF가 아닌 동안
	{
		++count;
		sum += value;
		infile >> value;
	}
	if (infile.eof())
		cout << "파일에 끝에 도달하였습니다.\n";
	else if (infile.fail())
		cout << "데이터 뷸일치로 입력이 종료되었습니다.\n;";
	else
		cout << "알 수 없는 이유로 종료되었습니다.\n";

	if (count == 0)
		cout << "데이터가 없습니다.\n";
	else
	{
		cout << "읽은 항목의 개수 : " << count << endl;
		cout << "합계 : " << sum << endl;
		cout << "평균 : " << sum / count << endl;
	}
	infile.close();
	return 0;
}*/

//연습문제

/* 1번
int main() {
	char ch;

	// 사용자로부터 문자를 입력받기 위한 안내 문구 출력
	cout << "문자를 입력하세요 (끝내려면 '@'를 입력): ";

	// 물음표('@') 문자가 나올 때까지 문자를 하나씩 읽어옴
	while (cin.get(ch) && ch != '@') {
		// 입력된 문자가 알파벳인지 검사
		if (isalpha(ch)) {
			// 대문자인 경우 소문자로 변환
			if (isupper(ch)) {
				ch = std::tolower(ch);
			}
			// 소문자인 경우 대문자로 변환
			else {
				ch = std::toupper(ch);
			}
			// 변환된 문자 출력
			std::cout << ch;
		}
		// 입력된 문자가 알파벳이 아니라면 그대로 출력
		else {
			std::cout << ch;
		}
	}

	// 루프가 종료된 후 개행 문자 출력
	std::cout << std::endl;

	return 0;
}*/

/* 2번
int main()
{
	cout << "10명의 기분금을 입력하시오\n";
	int money[10], add=0;

	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << "#\n" << ">>> ";
		cin >> money[i];
		add += money[i];
	}
	int average = add / 10;
	cout << "기분금 평균 : " << average <<endl;
	int count = 0;

	for (int i = 0; i < 10; i++)
	{
		if (money[i] >= average)
			count++;
	}
	cout << "기분금의 평균보다 높은 기부자는 " << count << "명입니다.";
	return 0;
}*/

/* 3번
int main()
{
	cout << "다음 사항 중에서 하나를 선택하십시오 (끝내려면 q)\n";
	cout << "c)camera		p)pianist\n"
		 << "t)tree			g)game\n"
		 << "q)종료";

	char str;
	while (1)
	{
		cout << "\n>>> ";
		cin >> str;
		switch (str)
		{
		case 'c': cout << "camera입니다.\n"; continue;

		case 'p': cout << "pianist입니다.\n"; continue;

		case 't': cout << "tree입니다.\n"; continue;

		case 'g': cout << "game입니다.\n"; continue;

		case 'q': cout << "프로그램을 종료합니다.\n"; break;

		default:
			cout << "다시 입력해 주세요\n"; continue;
		}
		return 0;
	}
}*/

/* 4번
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
	cout << "a.실명으로 열람		b.직함으로 열람 \n"
		 << "c.BOP 아이디로 열람	d.회원이 지정한 것으로 열람 \n"
		 << "q.종료\n";
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
			cout << "프로그램을 종료합니다.\n";
			break;
		}


		default: continue;

		}
	}
}*/

/* 5번
int main()
{
	cout << "뉴트로니아 왕국의 환폐 단위는 트바프 입니다.\n"
		 << "0 ~ 5000 트바프 : 0%\n"
		 << "5001 ~ 10000 트바프 : 10%\n"
		 << "10001 ~ 20000 트바프 : 15%\n"
		 << "35000 트바프 : 20%\n";
	cout << "당신의 소득을 알려주세요\n" << "\n>>> ";

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

	cout << "당신의 세금은" << tax << "입니다. \n";

	return 0;
}*/

/* 6번
struct giver
{
	string name;
	double give;
};
int main()
{
	cout << "기부자가 몇명인가요?\n" << ">>> ";
	int num,count1=0, count2 = 0;
	cin >> num;
	giver *a = new giver[num];
	cin.ignore();
	giver* max = new giver[num];
	giver* min = new giver[num];

	for (int i = 0; i < num; i++)
	{
		cout << i + 1 << "번 기부자 이름 : ";
		getline(cin, a[i].name);
		cout << i + 1 << "번 기부자 기부금액 : ";
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

	cout << "\n\n고액 기부자 "<<count1<<"명입니다.\n";
	for (int i = 0; i < count1; i++)
	{
		cout<<"이름 : "<<max[i].name;
		cout <<"| 기부 금액 : " << max[i].give<<endl;
	}
	cout << "\n\n";
	cout << "\n\n소액 기부자 " << count2 << "명입니다.\n";

	if (count2 > 0)
	{
		for (int i = 0; i < count2; i++)
		{
			cout << "이름 : " << min[i].name;
			cout <<"| 기부 금액 : " << min[i].give<<endl;
		}
	}
	else
		cout << "기부자가 없습니다.\n";

	delete[] a, max, min;
	return 0;
}*/

/* 7번
int main() {
	int vowelsCount = 0;
	int consonantsCount = 0;
	std::string word;

	std::cout << "단어를 입력하세요. 'q'를 입력하면 종료됩니다.\n";

	while (true) {
		std::cout << "단어를 입력하세요: ";
		std::cin >> word;

		// 모음과 자음을 확인하기 쉽게 소문자로 변환
		for (char& c : word) {
			c = std::tolower(c);
		}

		// 사용자가 종료하길 원하는지 확인
		if (word == "q") {
			break;
		}

		// 단어가 비어있지 않고, 문자로 시작하는지 확인
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

	std::cout << "모음으로 시작하는 단어 개수: " << vowelsCount << "\n";
	std::cout << "자음으로 시작하는 단어 개수: " << consonantsCount << "\n";

	return 0;
}*/

/* 8번
int main() {
	std::ifstream infile;
	infile.open("main.txt");

	if (!infile) {
		cout << "파일을 열 수 없습니다. 파일이 존재하고 접근 가능한지 확인해주세요.\n";
		return 1;
	}

	string word;
	int wordCount = 0;

	while (infile >> word) { //string형의 world로 단어를 받아서 카운트 한다.
		// 파일로부터 읽은 단어들을 계산하여 개수 세기
		wordCount++;
	}

	infile.close();

	cout << "파일 안의 단어 개수: " << wordCount << "\n";

	return 0;
}*/




