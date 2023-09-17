#include "main.h"




/*  myfirst 2 - 1 (24pg)
int main()
{
	cout << "c++ 세계로 오신걸 환영합니다." << endl;
	cout << "후회하지 않으실겁니다.";
	return 0;
}
*/

/* carrots 2-2 (40pg)
int main()
{
	int carrots = 25;

	cout << "나는 " << carrots << "개의 당근을 가지고 있습니다." << endl;

	carrots - 1;
	cout << "아삭아삭, 이제 당근은 " << carrots << "개 입니다.";
	return 0;
}*/

/*  getinfo 2-3 (45pg)
int main()
{
	cout << "당근을 몇 개나 가지고 있나?"<<endl<<">>> ";

	int carrots = 0;

	cin >> carrots;

	cout << "여기에 두 개가 더 있다. 이제 당근은 모두 " << carrots + 2 << "개 입니다.";
	return 0;
}*/

/* sqrt 2-4 (53pg)
#include <cmath>
int main()
{
	double area = 0;
	cout << "마루 면적을 평방피트 단위로 입력하시오" << endl << ">>> ";

	cin >> area;

	double side;
	side = sqrt(area); //sqrt(); 제곱근을 구할 수 있다.

	cout << "사각형 마루라면 한 변이" << side;
	return 0;
}*/

/* ourfunc 2-5 (56pg)
void simon(int n);
int main()
{
	simon(3);

	int num = 0;

	cout << "정수를 하나 고르시오" << endl << ">>> ";
	cin >> num;

	simon(num);
	return 0;
}

void simon(int n)
{
	cout << "simon 왈, 발가락을 " << n << "번 두드려라" << endl;
}*/

/* convert 2-6 (60pg)
int stone(int n);
int main()
{
	cout << "체중을 스톤 단위로 입력해 주세요" << endl<<">>> ";
	int num = 0;
	cin >> num;

	cout << num << " 스톤은 " << stone(num) << " 파운드입니다.";

}
int stone(int n);
{
	return n * 14;
}*/

//프로그래밍 연습//

/* 1번
int main()
{
	cout << "주소 : 대구시" << endl << "이름 : 000";
}*/

/* 2번
double maile(int n);
const double mm = 1.60934;
int main()
{
	int num = 0;
	cout << "몇 마일을 이동하였나요?" << endl << ">>> ";
	cin >> num;
	cout<<num<<"마일은 " << maile(num)<<"km만큼 이동하였습니다.";
}
double maile(int n)
{
	return n * mm;
}*/

/* 3번
void re(string n);
void turn(string n);
int main()
{
	string n1, n2;
	cout << ">>> ";
	cin >> n1;

	cout << ">>> ";
	cin >> n2;

	cout << endl << endl;

	re(n1);
	turn(n2);

	return 0;
}
void re(string n)
{
	for (int i = 0; i < 2; i++)
		cout << ">>> " << n<<endl;
}
void turn(string n)
{
	for (int i = 0; i < 2; i++)
		cout << ">>> " << n<<endl;
}*/

/* 4번
void Age(int n);
int main()
{
	cout << "Enter Your Age >>> ";
	int age = 0;
	cin >> age;
	Age(age);
}
void Age(int n)
{
	cout << "당신의 나이는 " << n << "살이며 개월 수는 " << n * 12 << "개월 입니다.";
}*/

/* 5번
void fahrenheit(int n);
int main()
{
	cout << "섭씨 온도를 입력하고 Enter카를 누르십시오 : ";
	int num = 0;
	cin >> num;

	fahrenheit(num);
	return 0;
}
void fahrenheit(int n)
{
	double Fahrenheit = 1.8 * n + 32.0;
	cout << "섭씨 " << n << "도는 화씨로 " << Fahrenheit<<"도 입니다.";
}*/

/* 6번
int main()
{
	cout << "광년 수를 입력하고 Enter키를 누르시오 : ";
	double light = 0;
	cin >> light;

	cout << light << "광년은 " << light * 63240 << "천문 단위입니다.";
	return 0;
}*/

/*  //7번
void time(int n, int m);
const char *realtime = "오전"; // 문자열이라 *를 사용하여 포인터로 만든다.
int main()
{
	int n, m;

	cout << "시각을 입력하고 Enter 키를 누르시오 :";
	cin >> n;

	while(1)
	{
	cout << "분을 입력하고 Enter 키를 누르시오 :";
	cin >> m;

	if (m <= 60)
		break;

	else
		cout << endl << "정확하지 않은 값입니다." << endl << "다시 입력하시오" << endl << endl;
	}

	if (n > 12){
		n -= 12;
		realtime = "오후";
	}


	time(n, m);
	return 0;
}
void time(int n, int m)
{
	if(n>=10)
		cout << "현제 시간은 >>> "<<"["<<realtime<<"]" << n << " : ";
	else if(n<10)
		cout << "현제 시간은 >>> " << "[" << realtime << "]"<< "0" << n << " : ";

	if (m >= 10)
		cout << m;
	else if (m < 10)
		cout << "0" << m;

}*/

