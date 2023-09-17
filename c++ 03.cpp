#include "main.h"




/* limits 3-1 (77pg)
int main()
{
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	//sizeof �����ڴ� ���������̳� ������ ũ�⸦ �˾Ƴ�����
	cout << "int�� " << sizeof(int) << " ����Ʈ�̴�." << endl;
	cout << "short�� " << sizeof(short) << " ����Ʈ�̴�." << endl;
	cout << "long�� " << sizeof(long) << " ����Ʈ�̴�." << endl;
	cout << "long long�� " << sizeof(long long) << " ����Ʈ�̴�." << endl<<endl;

	cout << "�ִ� : " << endl;
	cout << "int�� " << n_int <<endl;
	cout << "short�� " << n_short << endl;
	cout << "long�� " << n_long  << endl;
	cout << "long long�� " << n_llong << endl<<endl;
	cout << "int�� �ּڰ� = " << INT_MIN << endl;
	cout << "����Ʈ �� ��Ʈ �� = " << CHAR_BIT << endl;

}*/

/* exceed 3-2 (82pg)
#define ZERO 0 //�� 0���� ��ü�� ��ȣ ��� ZERO�� �����Ѵ�.
int main()
{
	short Dohee = SHRT_MAX;
	unsigned short Insuk = Dohee;

	cout << "������ ���¿��� : " << Dohee << "���� ��� �ְ�" << endl;
	cout << "�μ����� ���¿��� : " << Insuk << "���� ��� �ְ�" << endl;
	cout << "������ ���¿� 1���� �Ա��Ͽ����ϴ�." << endl;

	Dohee += 1;
	Insuk += 1;

	cout << "Dohee : " << Dohee << endl << "Insuk : " << Insuk << endl;

	cout << "�̷� ���� ���� ������ �߳�?" << endl;
	Dohee = ZERO;
	Insuk = ZERO;

	cout << "Dohee : " << Dohee << endl << "Insuk : " << Insuk << endl;

	cout << "������ ���¿� 1���� �����Ͽ����ϴ�." << endl;
	Dohee -= 1;
	Insuk -= 1; //unsinged�� -1�� �����ϸ� 65535�� ���´�.
	cout << "Dohee : " << Dohee << endl << "Insuk : " << Insuk << endl;

	cout << "�̷� ���� �μ��̰� ���ǿ� ��÷�Ǿ���?" << endl;
	return 0;
}*/

/* hexoct1 3-3 (86pg)
int main()
{
	int chest = 42;
	int waist = 0x42;
	int inseam = 042;

	cout << "�����ѷ� : " << chest<<endl; //10����
	cout << "�㸮�ѷ� : " << waist << endl;//16����
	cout << "�νɵѷ� : " << inseam << endl;//8����
}*/

/* hexoct2 3-4 (87pg)
int main() //dec:10���� , hex:16����, oct:8���� �ٲٴ� ������
{
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "�մ��� ���Ŵ� �Ѹ���� ���� �ݴϴ�!" << endl;
	cout << "�����ѷ� : " << chest <<" (10����)"<< endl; //10����
	cout << hex; //������ �ٲٴ� ������ (16����)
	cout << "�㸮�ѷ� : " << waist <<" (16����)"<< endl;//16����
	cout << oct; //������ �ٲٴ� ������ (10����)
	cout << "�νɵѷ� : " << inseam << " (8����)" << endl;//8����

	return 0;
}*/

/* chartype 3-5
int main()
{
	char str;
	cout << "���ϴ� ���ڸ� �Է��� �ּ���" << endl << ">>> ";
	cin >> str;

	cout << "�����մϴ�. ����� �Է��� ���ڴ� " << str << "�Դϴ�.";
	return 0;
}*/

/* morechar 3-6
int main()
{
	char ch = 'M';
	int i = ch;
	cout << ch<<"�� ASCII�ڵ�� " << i << "�Դϴ�." << endl;

	cout << "�� ���� �ڵ忡 1�� ���� ���ڽ��ϴ�." << endl;
	ch += 1;
	i = ch;
	cout << ch << "�� ASCII�ڵ�� " << i << "�Դϴ�." << endl;

	cout.put(ch);
	cout.put('!');

	cout << endl << "����" << endl;

	return 0;
}*/

/* bondini 3-7
int main()
{
	cout << "\a \"ȭ���� ����\" ������ ���õǾ����ϴ�.!\n"; // \a : �溸  \" : " �̴�.
	cout << "8�ڸ� ��й�ȣ �Է��Ͻÿ�________\b\b\b\b\b\b\b\b"; //\b : _�� �ڸ��� �����մϴ�.

	long code;
	cin >> code;
	cout << "\a�Է��Ͻ� ��й�ȣ�� " << code << "�Դϴ�." << endl;
	cout << "\a ��й�ȣ�� ��ġ�մϴ�." << endl << "z3 ������ �����մϴ�.";

	return 0;
}*/

/* floatnum 3-8
int main()
{
	cout.setf(ios_base::fixed, ios_base::floatfield); //���� �Ҽ��� �������� ���

	float tub = 10.0 / 3.0;
	double mint = 10.0 / 3.0;
	const float million = 1.0e6;

	cout << "tub = " << tub;
	cout << ", a million tubs = " << million * tub;
	cout << ",\nten million tubs = ";
	cout << 10 * million *tub << endl;
	return 0;
}*/

/* fitadd 3-9
int main()
{
	float a = 2.34E+22f;
	float b = a + 1.0f;

	cout << "a = " << a << endl;
	cout << "b - a = " << b - a << endl;

	return 0;
}*/

/* arith 3-10 (111pg)
int main()
{
	float hats, heads;

	cout.setf(ios_base::fixed, ios_base::floatfield); //���� �Ҽ��� �������� ���
	cout<<"�� �ϳ��� �Է��Ͻÿ�"<<endl<<">>> ";
	cin >> hats;
	cout << "�ٸ� �� �ϳ��� �Է��Ͻÿ�" << endl << ">>> ";
	cin >> heads;

	cout << "hats = " << hats << "; heads = " << heads << endl;
	cout << "hats + heads = " << hats + heads << endl;
	cout << "hats - heads = " << hats - heads << endl;
	cout << "hats * heads = " << hats * heads << endl;
	cout << "hats / heads = " << hats / heads << endl;

	return 0;
}*/

/* divide 3-11 (114pg)
int main()
{
	cout.setf(ios_base::fixed, ios_base::floatfield); //���� �Ҽ��� �������� ���
	cout << "���� ������: 9/5 = " << 9 / 5 << endl;
	cout << "�ε� �Ҽ����� ������: 9.0/5.0 = ";
	cout << 9.0 / 5.0 << endl;
	cout << "ȥ�� ������: 9.0/5 = " << 9.0 / 5 << endl;
	cout << "double�� ���: 1e7/9.0 = ";
	cout << 1e7 / 9.0 << endl;
	cout << "float�� ���: 1e7f/9.0f = ";
	cout << 1e7f / 9.0f << endl;
	return 0;
}*/

/* modulus 3-12 (116)
int main()
{
	const int Lbs_per_stn = 14;
	int lbs;

	cout << "����� ü���� �Ŀ�� ������ �Է��Ͻʽÿ�: ";
	cin >> lbs;

	int stone = lbs/Lbs_per_stn;
	int pounds = lbs % Lbs_per_stn;
	cout << lbs << "�Ŀ��� " << stone << "����, " << pounds << " �Ŀ���Դϴ�.\n";

	return 0;
}*/

/* init 3-13 (118pg)
int main()
{
	cout.setf(ios_base::fixed, ios_base::floatfield); //���� �Ҽ��� �������� ���
	float tree = 3;
	int guess = 3.9832;
	int debt = 7.2E12;
	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
	cout << "debt = " << debt << endl;
	return 0;
}*/

/* typecast 3-14 (122)
int main()
{
	int auks, bats, coots;
	//���� ������ �� ���� double������ ���� �Ŀ�
	//�� ���� int������ ��ȯ�Ͽ� �����Ѵ�.
	auks = 19.99 + 11.99;

	//���� �� ������ �� ���� int������ ��ȯ�� �Ŀ� ���Ѵ�.
	bats = (int)19.99 + (int)11.99;
	coots = int(19.99) + int(11.99);
	cout << "�ٴٿ��� = " << auks << ", ���� = " << bats;
	cout << ", �˵տ��� = " << coots << endl;

	char ch = 'Z'; //��ҹ��ڿ� ���� ���� �ٸ��� ex)z = 122, Z = 90
	cout << "�ڵ� " << ch << "�� ���� ";
	cout << int(ch) << endl;
	cout << "��, �ڵ� z�� ���� ";
	cout << static_cast<int>(ch) << endl;
	return 0;
}*/

//���α׷� ����//

/* 1��
int main()
{
	const int miter=100;

	int center;
	cout << "Ű�� ���͹��ͷ� �Է��� �ּ���" << endl << ">>>___\b\b\b ";
	cin >> center;

	cout << "����� Ű�� " << (double)center / miter << "m �̰� " << center << "cm �̴�.";

	return 0;
}*/


/* 2��
int main()
{
	int fit = 0, lb=0;

	cout << "����� Ű�� ��Ʈ ������ �Է��� �ּ���" << endl << ">>> ";
	cin >> fit;

	cout << "ü���� �Ŀ�� ������ �Է��� �ּ���" << endl << ">>> ";
	cin >> lb;

	cout << "����� Ű�� " << fit * 12 << "��ġ�̰� " << (fit * 12) * 0.0254 << "m�̴�."<<endl;
	cout << "����� ü���� " << lb / 2.2 << "ų�α׷��̴�.";
	cout << "����� BMI�� " << (lb / 2.2) / (((fit * 12) * 0.0254) * ((fit * 12) * 0.0254));

}*/

/* 3��
double change(double n, double m, double l);
int main()
{
	cout << "������ ��, ��, �� ������ �Է��� �ּ���" << endl;
	int a,b,c;


	cout << "���� ������ �Է��Ͻÿ� : ";
	cin >> a;

	cout << "�������� �а��� �Է��Ͻÿ� : ";
	cin >> b;

	cout << "���������� �ʰ��� �Է��Ͻÿ� : ";
	cin >> c;


	double aa = change(a, b, c);
	cout << a << "��, " <<b << "��, " << c << "�� = " << aa<<"��";

}
double change(double n, double m, double l)
{
	return n + (m / 60) + (l / 3600);
}*/

/* 4��
void change(long n);
int main()
{
	cout << "�� ���� �Է��Ͻÿ� : ";
	long m = 0;
	cin >> m;

	change(m);

	return 0;
}
void change(long n)
{
	long add = n;
	int d, t, m, s;

	if (add > 86400) //��¥ ���
	{
		d = add / 86400;
		cout << d << "�� ";
		add -= 86400 * d;
	}

	if (add > 3600) //�ð� ���
	{
		t = add / 3600;
		cout << t << "�ð� ";
		add -= 3600 * t;
	}

	if (add > 60) //�� ���
	{
		m = add / 60;
		cout << m << "�� ";
		add -= 60 * m;
	}

	if (add > 1) //�� ���
	{
		t = add / 1;
		cout << t << "�� ";
	}
}*/

/* // 5��
float result(long long n, long long m);
int main()
{
	long long a = 0, b=0;
	cout << "���� �α����� �Է��Ͻÿ� : ";
	cin >> a;
	cout << "�̱��� �α����� �Է��Ͻÿ� : ";
	cin >> b;

	cout << "���� �α������� �̱��� �����ϴ� ������ : " << result(a, b)<< "%�̴�.";

	return 0;
}
float result(long long n, long long m)
{
	return (float)m  / n * 100; //(m/n)���� ������ ��ü�� �ƴ� (m/n) �κи� float�� 0 * 100�� �ȴ�.
}*/


/* 6�� ~ 7��
int main()
{
	cout << "������ �Ÿ��� ���Ϸ� �Է��� �ּ��� : ";
	int a, b;
	cin >> a;

	cout << "�Һ��� �ֹ����� ���� ���� ������ �Է��� �ּ��� : ";
	cin>>b;

	float result = (float)a/b;
	cout << "1������ �̵��� ���� ���� " << result << "�����̴�." << endl;

	cout << "1������ " << result << "������ �̵��Ͽ����ϴ�." << endl;
	cout << "1������ 3.895L �̸� 1������ 1.60934km�̴�." << endl << "100km�� ";
	float l = (float)b * 3.875;
	float km = (float)a * 1.60934;

	float result1 = l/km;
	cout << result1 * 100<<"L�� ����Ѵ�.";

	return 0;
}*/

