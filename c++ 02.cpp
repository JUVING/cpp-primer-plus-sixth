#include "main.h"




/*  myfirst 2 - 1 (24pg)
int main()
{
	cout << "c++ ����� ���Ű� ȯ���մϴ�." << endl;
	cout << "��ȸ���� �����ǰ̴ϴ�.";
	return 0;
}
*/

/* carrots 2-2 (40pg)
int main()
{
	int carrots = 25;

	cout << "���� " << carrots << "���� ����� ������ �ֽ��ϴ�." << endl;

	carrots - 1;
	cout << "�ƻ�ƻ�, ���� ����� " << carrots << "�� �Դϴ�.";
	return 0;
}*/

/*  getinfo 2-3 (45pg)
int main()
{
	cout << "����� �� ���� ������ �ֳ�?"<<endl<<">>> ";

	int carrots = 0;

	cin >> carrots;

	cout << "���⿡ �� ���� �� �ִ�. ���� ����� ��� " << carrots + 2 << "�� �Դϴ�.";
	return 0;
}*/

/* sqrt 2-4 (53pg)
#include <cmath>
int main()
{
	double area = 0;
	cout << "���� ������ �����Ʈ ������ �Է��Ͻÿ�" << endl << ">>> ";

	cin >> area;

	double side;
	side = sqrt(area); //sqrt(); �������� ���� �� �ִ�.

	cout << "�簢�� ������ �� ����" << side;
	return 0;
}*/

/* ourfunc 2-5 (56pg)
void simon(int n);
int main()
{
	simon(3);

	int num = 0;

	cout << "������ �ϳ� ���ÿ�" << endl << ">>> ";
	cin >> num;

	simon(num);
	return 0;
}

void simon(int n)
{
	cout << "simon ��, �߰����� " << n << "�� �ε����" << endl;
}*/

/* convert 2-6 (60pg)
int stone(int n);
int main()
{
	cout << "ü���� ���� ������ �Է��� �ּ���" << endl<<">>> ";
	int num = 0;
	cin >> num;

	cout << num << " ������ " << stone(num) << " �Ŀ���Դϴ�.";

}
int stone(int n);
{
	return n * 14;
}*/

//���α׷��� ����//

/* 1��
int main()
{
	cout << "�ּ� : �뱸��" << endl << "�̸� : 000";
}*/

/* 2��
double maile(int n);
const double mm = 1.60934;
int main()
{
	int num = 0;
	cout << "�� ������ �̵��Ͽ�����?" << endl << ">>> ";
	cin >> num;
	cout<<num<<"������ " << maile(num)<<"km��ŭ �̵��Ͽ����ϴ�.";
}
double maile(int n)
{
	return n * mm;
}*/

/* 3��
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

/* 4��
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
	cout << "����� ���̴� " << n << "���̸� ���� ���� " << n * 12 << "���� �Դϴ�.";
}*/

/* 5��
void fahrenheit(int n);
int main()
{
	cout << "���� �µ��� �Է��ϰ� Enterī�� �����ʽÿ� : ";
	int num = 0;
	cin >> num;

	fahrenheit(num);
	return 0;
}
void fahrenheit(int n)
{
	double Fahrenheit = 1.8 * n + 32.0;
	cout << "���� " << n << "���� ȭ���� " << Fahrenheit<<"�� �Դϴ�.";
}*/

/* 6��
int main()
{
	cout << "���� ���� �Է��ϰ� EnterŰ�� �����ÿ� : ";
	double light = 0;
	cin >> light;

	cout << light << "������ " << light * 63240 << "õ�� �����Դϴ�.";
	return 0;
}*/

/*  //7��
void time(int n, int m);
const char *realtime = "����"; // ���ڿ��̶� *�� ����Ͽ� �����ͷ� �����.
int main()
{
	int n, m;

	cout << "�ð��� �Է��ϰ� Enter Ű�� �����ÿ� :";
	cin >> n;

	while(1)
	{
	cout << "���� �Է��ϰ� Enter Ű�� �����ÿ� :";
	cin >> m;

	if (m <= 60)
		break;

	else
		cout << endl << "��Ȯ���� ���� ���Դϴ�." << endl << "�ٽ� �Է��Ͻÿ�" << endl << endl;
	}

	if (n > 12){
		n -= 12;
		realtime = "����";
	}


	time(n, m);
	return 0;
}
void time(int n, int m)
{
	if(n>=10)
		cout << "���� �ð��� >>> "<<"["<<realtime<<"]" << n << " : ";
	else if(n<10)
		cout << "���� �ð��� >>> " << "[" << realtime << "]"<< "0" << n << " : ";

	if (m >= 10)
		cout << m;
	else if (m < 10)
		cout << "0" << m;

}*/

