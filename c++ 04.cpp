#include "main.h"


/* arrayone 4-1 (134pg)
int main()
{
	int yams[3] = {7,8,6};

	//����ϴ� c++ �����Ϸ��� �����Ⱑ �� �迭�� �ʱ�ȭ�� �� ���ٸ�
	//int yamcosts[3] ��� static int yamcosts[3]�� ����϶�
	int yamcosts[3] = { 200,300,50 };

	cout << "���� �հ� : ";
	cout << yams[0] + yams[1] + yams[2]<<endl;
	cout << yams[1] << "���� ��� �ִ� ������";
	cout << "���� " << yamcosts[1] << "�����Դϴ�." << endl;
	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
	total = total + yams[2] * yamcosts[2];
	cout << "�� ������ �� ������ " << total << "�� �Դϴ�." << endl;
	cout << "\nyams �迭�� ũ��� " << sizeof yams << "����Ʈ �Դϴ�." << endl;
	cout << "���� �ϳ��� ũ��� " << sizeof yams[0]<<"����Ʈ �Դϴ�.\n";

	return 0;
}*/

/* string 4-2 (141pg)
int main()
{
	const int size = 15;
	char name1[size];
	char name2[size]="c++owboy";

	cout << "�ȳ��ϼ��� ���� " << name2 << "�Դϴ�."<<" �Ƿ����� ������?\n";
	cin >> name1;
	cout << "��! " << name1 << "��! ����� �̸��� " << strlen(name1) << "�� �Դϴٸ� \n";
	cout << sizeof(name1) << "����Ʈ ũ���� �迭�� ����Ǿ����ϴ�.\n";
	cout << "�̸��� " << name1[0] << "�ڷ� �����ϴ±���.\n";
	name2[3] = '\0';
	cout << "�� �̸��� ó�� �� ���ڴ� ������ �����ϴ� : ";
	cout << name2 << endl;

	return 0;
}*/

/* instr1 4-3 (143pg)
int main()
{
	const int arsize = 20;
	char name[arsize];
	char dessert[arsize];

	cout << "�̸��� �Է��Ͻÿ� : ";
	cin >> name;
	cout << "�����ϴ� ����Ʈ�� �Է��Ͻÿ� : ";
	cin >> dessert;
	cout << "���ִ� " << dessert;
	cout << " ����Ʈ�� �غ��ϰڽ��ϴ�. " << name << " ��!\n";
	return 0;
}*/

/* instr2 4-4 (145pg)
int main()
{
	const int arsize = 20;
	char name[arsize];
	char dessert[arsize];

	cout << "�̸��� �Է��Ͻÿ� : ";
	cin.getline(name,arsize);
	cout << "�����ϴ� ����Ʈ�� �Է��Ͻÿ� : ";
	cin.getline(dessert,arsize);
	cout << "���ִ� " << dessert;
	cout << " ����Ʈ�� �غ��ϰڽ��ϴ�. " << name << " ��!\n";
	return 0;
}*/

/* instr3 4-4 (145pg)
int main()
{
	const int arsize = 20;
	char name[arsize];
	char dessert[arsize];

	cout << "�̸��� �Է��Ͻÿ� : ";
	cin.get(name,arsize).get(); //���ڿ��� ���� ���ڸ� �д´�.
	cout << "�����ϴ� ����Ʈ�� �Է��Ͻÿ� : ";
	cin.get(dessert,arsize).get(); //���ڿ��� ���� ���ڸ� �д´�.
	cout << "���ִ� " << dessert;
	cout << " ����Ʈ�� �غ��ϰڽ��ϴ�. " << name << " ��!\n";
	return 0;
}*/

/*  numstr 4-6 (149pg)
int main()
{
	cout << "���� ��ô� ����Ʈ�� ���� �����ϼ̽��ϱ�?\n"<<">>> ";
	int year;
	cin >> year;
	cout << "��ô� ���ø� ������ �ּ���\n" <<">>>";
	char address[80];
	cin.getline(address, 80);
	cout << "����Ʈ ���� ���� : " << year << endl;
	cout << "���� : " << address << endl;
	cout << "����� �Ϸ�Ǿ����ϴ�.\n";

	return 0;
}
	cin���� �Է� ���� EnterŰ�� ���� ���ڰ� ť�� ���Ƽ� cin.getline�� ����Ǿ�
	������ �Է� �ް� ���ø� ���� ���� ���ϰ� �Է��� ���̳���.
*/

/* strtype1 4 - 7 (151pg)
int main()
{
	char charr1[20];
	char charr2[20] = "jaguar";

	string str1;
	string str2 = "panther";

	cout << "����̰��� ���� �ϳ��� �Է����ּ���\n" << ">>> ";
	cin >> charr1;
	cout << "����̰��� �ٸ� ���� �ϳ��� �Է����ּ���\n" << ">>> ";
	cin >> str1;

	cout << "�Ʒ� ���� ��� ����̰� �Դϴ�.\n";
	cout << charr1 << ", " << charr2 << ", " << str1 << ", " << str2<<endl;

	cout << charr2 << "���� 3��° ���ڴ� " << charr2[2] << "�Դϴ�.\n";
	cout << str2 << "���� 3��° ���ڴ� " << str2[2] << "�Դϴ�.\n";

	return 0;
}*/

/* strtype2 4-8 (154pg)
int main()
{
	string s1 = "penguin", s2, s3;
	cout << "string ��ü�� string ��ü�� ������ �� �ִ� : s2 = s1\n";
	s2 = s1;
	cout << "s1 : " << s1 << ", s2 : " << s2 << endl;
	cout << "string ��ü�� c��Ÿ�� ���ڿ��� ������ �� �ִ�\n";
	cout << "s2 = \"buzzard\"\n";
	s2 = "buzzard";
	cout << "s2 : " << s2 << endl;
	cout << "stinr ��ü���� ������ �� �ִ� : s3 = s1 + s2\n";
	s3 = s1 + s2;
	cout << "s3 : " << s3 << endl;
	cout << "string ��ü���� �߰��� �� �ִ�.\n";
	s1 += s2;
	cout << "s1+=s2 --> s1 = " << s1 << endl;
	s2 += " for a day";
	cout << "s2 += \" for a day \" --> s2 = " << s2 << endl;

	return 0;
}*/

/* strtype3 4-9 (155pg)
int main()
{
	char charr1[20];
	char charr2[20] = "jaguar";

	string str1;
	string str2 = "panther";

	str1 = str2;
	strcpy_s(charr1, charr2); //charr2�� charr1�� ���� //_s�� ����ؼ� �߰��� ������ �����Ѵ�.

	str1 += " paste";
	strcat_s(charr1, " juice"); //charr1 ���� juice�� �߰� //_s�� ����ؼ� �߰��� ������ �����Ѵ�.

	int len1 = str1.size(); //str1�� ���̸� ���Ѵ�.
	int len2 = strlen(charr1);

	cout << str1 << " ���ڿ�����" << len1 << "���� ���ڰ� ��� �ִ�.\n";
	cout << charr1 << " ���ڿ�����" << len2 << "���� ���ڰ� ��� �ִ�.\n";

	return 0;
}*/

/* 4-10 strtype4 (158pg)
int main()
{
	char charr[20];
	string str;

	cout << "�Է� ������ charr�� �ִ� ���ڿ��� ���� : " << strlen(charr) << endl;
	cout << "�Է� ������ str�� �ִ� ���ڿ��� ���� : " << str.size() << endl;

	cout << "�ؽ�Ʈ ������ �Է��Ͻÿ� : ";
	cin.getline(charr, 20);
	cout << "�Է��� �ؽ�Ʈ : " << charr << endl;
	cout << "�� �ٸ� �� ���� �Է��Ͻÿ� : ";
	getline(cin,str);
	cout << "�Է��� �ؽ�Ʈ : " << str << endl;

	cout << "�Է� ���Ŀ� charr�� �ִ� ���ڿ��� ���� : "<<strlen(charr)<<endl;
	cout << "�Է� ���Ŀ� str�� �ִ� ���ڿ��� ���� : " << str.size() << endl;

	return 0;
}*/

/* structur 4-11 (164pg)
struct inflatable
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	inflatable guest =
	{
		"Glorius Gloria",
		1.88,
		29.99
	};
	inflatable pal =
	{
		"Audacious Arthur",
		3.13,
		32.99
	};

	cout << "���� �Ǹ��ϰ� �ִ� ���� ǳ����" << guest.name;
	cout << "�� " << pal.name << "�Դϴ�. \n";

	cout << "�� ��ǰ�� $" << guest.price + pal.price << "�� �帮�ڽ��ϴ�. \n";

	return 0;
}*/

/* assgn_st 4-12 (168pg)
struct inflatable
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	inflatable bouquet =
	{
		"sunflowers",
		0.20,
		12.49
	};
	inflatable choice;

	cout << "bouquet : " << bouquet.name << " for $ : " << bouquet.price<<endl;

	choice = bouquet;
	cout << "choice : " << choice.name << " for $ : " << choice.price << endl;

	return 0;
}*/

/* arrstruc 4-13 (171pg)
struct inflatable
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	inflatable guests[2] =
	{
		{"bambi", 0.5, 21.99},
		{"godzilla", 2000, 565.99}
	};

	cout << guests[0].name << "�� " << guests[1].name << "�� ���Ǹ� ���ϸ�\n"
		<< guests[0].volume + guests[1].volume<<" ��������Ʈ�Դϴ�. \n";

	return 0;
}*/

/* address 4-14 (179pg)
int main()
{
	int donuts = 6;
	double cups = 4.5;

	cout << "dounuts�� �� = " << donuts << " donuts�� �ּ� = " << &donuts << endl;
	cout << "cups�� �� = " << cups << " cups�� �ּ� = " << &cups << endl;
}*/

/* pointers 4-15 (181pg)
int main()
{
	int updates = 6;
	int* p_updates; //int���� �����ϴ� ������

	p_updates = &updates; //�����Ϳ� �ּҸ� ����

	cout << "�� : updates = " << updates
		<< ", *p_updates = " << *p_updates << endl;

	cout << "�ּ� : updates = " << &updates
		<< ", p_updates = " << p_updates << endl;

	*p_updates = *p_updates + 1;                     //*p_updates�� updates�� �ּҸ� ����Ű�� �����Ϳ���
	cout << "����� updates = " << updates << endl;  //updates�� ���� ������ �����ϴ�.

	return 0;
}*/

/* init_ptr 4-16 (185pg)
int main()
{
	int higgens = 5;
	int* pt = &higgens;

	cout << "higgens = " << higgens<< " higgens�� �ּ� = "<<&higgens << endl;
	cout << "*pt�� ��" << &pt << " pt�� �� = " << pt << endl;

	return 0;
}*/

/* use_new 4-17 (189pg)
int main()
{
	int nights = 1001;
	int* pt = new int; //int���� ������ �޸𸮸� ����
	*pt = 1001; //���Ե� �޸𸮿� ���� ����

	cout << "nights�� �� = ";
	cout << nights << ": �޸� ��ġ " << &nights << endl;
	cout << "int ��";
	cout << "�� = " << *pt << ": �޸� ��ġ = " << pt << endl;

	double* pd = new double;
	*pd = 10000001.0;

	cout << "double ��";
	cout << "�� = " << *pd << ": �޸� ��ġ = " << pd << endl;
	cout << "������ pd�� �޸� ��ġ : " << &pd << endl;
	cout << "pt�� ũ�� = " << sizeof(pt);
	cout << ": *pt�� ũ��" << sizeof(*pt) << endl;
	cout << "pd�� ũ�� = " << sizeof pd;
	cout<<": *pd�� ũ�� = " << sizeof(*pd) << endl;

	return 0;
}*/

/* arraynew 4-18 (195pg)
int main()
{
	double* p3 = new double[3];

	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout << "p3[1]�� " << p3[1] << "�Դϴ�.\n";
	p3 = p3 + 1;
	cout<<"������ p3[0]�� "<<p3[1]<< "�Դϴ�.\n";
	p3 = p3 - 1;
	delete [] p3;

	return 0;
}*/

/* addpntrs 4-19 (196pg)
int main()
{
	double wages[3] = { 10000.0, 20000.0, 30000.0 };
	short stacks[3] = { 3, 2, 1 };

	double* pw = wages;
	short* ps = &stacks[0];

	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	pw = pw + 1;
	cout << "pw �����Ϳ� 1�� ����:\n";
	cout << "pw = " << pw << ", *pw = " << *pw << endl;

	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	pw = pw + 1;
	cout << "ps �����Ϳ� 1�� ����:\n";
	cout << "ps = " << ps << ", *ps = " << *ps << endl;

	cout << "�迭 ǥ��� �� ���ҿ� ����\n";
	cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
	cout << "������ ǥ��� �� ���ҿ� ����\n";
	cout << "*stacks = " << *stacks
		<< ", *(stacks + 1) = " << *(stacks + 1) << endl;

	cout << sizeof(wages) << " = wages �迭�� ũ��\n";
	cout << sizeof(pw) << " = pw �������� ũ��\n";

	return 0;
}*/

/* ptrstr 4-20 (204pg)
int main()
{
	char animal[20] = "bear";
	const char* bird = "wren";
	char* ps;

	cout << animal << " and ";
	cout << bird << "\n";

	cout << "������ ������ �Է��Ͻÿ� : ";
	cin >> animal;

	ps = animal;
	cout << ps << "s!\n";
	cout << "strcpy() ��� ��: \n";
	cout << (int*)animal << ": " << animal << endl; //(int *) �ּ� �� ��ȯ
	cout << (int*)ps << ": " << ps << endl;

	ps = new char[strlen(animal) + 1];
	strcpy_s(ps, strlen(animal) + 1, animal); //strcpy_s(������ ��ġ, ������ �������� ũ�� +1, ������ ������);
	cout << "strcpy() ��� ��: \n";
	cout << (int*)animal << ": " << animal << endl; //(int *) �ּ� �� ��ȯ
	cout << (int*)ps << ": " << ps << endl;
	delete [] ps;

	return 0;
}*/

/*  newstrct 4-21 (211pg)
struct inflatable
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	inflatable* ps = new inflatable;
	cout << "����ǳ���� �̸��� �Է��Ͻʽÿ�: ";
	cin.get(ps->name, 20);
	cout << "���Ǹ� ������ ��Ʈ ������ �Է��Ͻʽÿ�: ";
	cin >> (*ps).volume;
	cout << "������ �޷� ������ �Է��Ͻʽÿ�: $";
	cin >> ps->price;
	cout << "�̸�: " << (*ps).name << endl;
	cout << "����: " << ps->volume << " cubic feet\n";
	cout << "����: " << ps->price << endl;
	delete ps;

	return 0;
}*/

/* delete 4-22 (213pg)
char* getname(void);
int main()
{
	char* name;

	name = getname();
	cout << (int*)name << ": " << name << "\n";
	delete [] name;

	name = getname();
	cout << (int*)name << ": " << name << "\n";
	delete[] name;

	return 0;
}
char* getname(void)
{
	char temp[80];
	cout << "�̸��� �Է��Ͻʽÿ�: ";
	cin >> temp;
	char* pn = new char[strlen(temp) + 1];
	strcpy_s(pn,strlen(temp)+1, temp);

	return pn;
}*/

/* mixtypes 4-23 (219pg)
struct antarctica_years_end
{
	int year;
};
int main()
{
	antarctica_years_end s01, s02, s03;
	s01.year = 1998;
	antarctica_years_end* pa = &s02;
	pa->year = 1999;
	antarctica_years_end trio[3];
	trio[0].year = 2003;
	cout << trio->year << endl;
	const antarctica_years_end* arp[3] = { &s01, &s02, &s03 };
	cout << (*arp[1]).year << endl;
	const antarctica_years_end** ppa = arp;
	auto ppb = arp;
	cout << (*ppa)->year << endl;
	cout << (*(ppa + 1))->year << endl;

	return 0;
}*/

/* choises 4-24 (222pg)
int main()
{
	double a1[] = { 1.2, 2.4, 3.6, 4.8 };
	vector<double>a2(4);
	a2[0] = 1.0 / 3.0;
	a2[1] = 1.0 / 5.0;
	a2[2] = 1.0 / 7.0;
	a2[3] = 1.0 / 9.0;

	array<double, 4>a3 = { 3.14, 2.72,1.62,1.41 };
	array<double, 4>a4;
	a4 = a3;
	cout << "a1[2] : " << a1[2] << " at " << &a1[2] << endl;
	cout << "a2[2] : " << a1[2] << " at " << &a2[2] << endl;
	cout << "a3[2] : " << a1[2] << " at " << &a3[2] << endl;
	cout << "a4[2] : " << a1[2] << " at " << &a4[2] << endl;

	a1[-2] = 20.2;
	cout << "a1[-2] : " << a1[-2] << " at " << &a1[-2] << endl;
	cout << "a3[2] : " << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2] : " << a4[2] << " at " << &a4[2] << endl;

	return 0;
}*/

//��������

/* 1��
char change(char ch);
int main()
{
	cout << "���� �۽�Ʈ ����(�̸�) : ";
	char fname[100];
	cin.getline(fname,'\n');
	cout << "���� ��Ʈ ����(��) : ";
	string lname;
	cin >> lname;
	cout << "�л��� ���ϴ� ���� : ";
	char s;
	cin >> s;
	cout << "���� : ";
	int age = 0;
	cin >> age;
	cout << lname << ", " << fname;
	cout << " ���� : "<< change(s);
	cout << " ���� : " << age;

	return 0;
}
char change(char ch)
{
	switch (ch)
	{
	case 'a': return 'B';
		break;
	case 'b': return 'C';
		break;
	case 'c': return 'D';
		break;
	}
	return 0;
}*/

/* 2��
int main()
{
	string name, dessert;

	cout << "�̸��� �Է��Ͻÿ� : ";
	getline(cin, name);
	cout << "�����ϴ� ����Ʈ�� �Է��Ͻÿ� : ";
	getline(cin, dessert);
	cout << "���ִ� " << dessert;
	cout << " ����Ʈ�� �غ��ϰڽ��ϴ�. " << name << " ��!\n";
	return 0;
}*/

/* 3��
int main()
{
	cout << "���� �۽�Ʈ ����(�̸�) : ";
	char fname[50];
	cin.getline(fname,'\n');
	cout << "���� ��Ʈ ����(��) : ";
	char lname[50];
	cin.getline(lname, '\n');

	strcat_s(lname, ", "); //strcat_s(1,2); 1�� ���� 2���� �߰��Ѵ�.
	strcat_s(lname, fname);
	cout << lname;

	return 0;
}*/

/* 4��
int main()
{
	cout << "���� �۽�Ʈ ����(�̸�) : ";
	string fname;
	getline(cin,fname);
	cout << "���� ��Ʈ ����(��) : ";
	string lname;
	getline(cin, lname);
	lname += ", ";
	lname += fname;

	cout << lname;

	return 0;
}*/

/* 5��
int main()
{
	struct candybar
	{
		string name;
		double g;
		int cal;
	}snack;

	snack = { "Moncha munch",2.3, 350 };
	cout << "�̸� : " << snack.name << "\n�߷� : " << snack.g << "\nĮ�θ� : " << snack.cal;

	return 0;
}*/

/* 6��
int main()
{
	struct candybar
	{
		string name;
		double g;
		int cal;
	}snack[2];

	snack[0] = { "Moncha munch",2.3, 350 };
	cout << "�̸� : " << snack[0].name << "\n�߷� : " << snack[0].g << "g\nĮ�θ� : " << snack[0].cal<<" Į�θ�";

	snack[1] = { "choco cake",134.5, 550 };
	cout << "\n\n�̸� : " << snack[1].name << "\n�߷� : " << snack[1].g << "g\nĮ�θ� : " << snack[1].cal << " Į�θ�";

	return 0;
}*/

/* 7��
int main()
{
	struct pizza
	{
		char name[100];
		int diameter;
		int weight;
	}a;
	cout << "���� ȸ���� �̸� : ";
	cin.getline(a.name,100);
	cout << "������ ���� : ";
	cin >> a.diameter;
	cout << "������ �߷� : ";
	cin >> a.weight;

	cout << "\n\n���� ȸ���� �̸� : "<<a.name<<endl;

	cout << "������ ���� : "<<a.diameter<<"cm" << endl;

	cout << "������ �߷� : "<<a.weight<<"g" << endl;

	return 0;
}*/

/* 8��
int main()
{
	struct pizza
	{
		string name;
		int diameter;
		int weight;
	};
	int i;
	cout << "��� ��ǰ�� ����ұ��?\n" << ">>> ";
	cin >> i;
	pizza *a = new pizza[i];

	for (int k = 0; k < i; k++)
	{
		cout << k + 1 << "��\n";
		cout << "������ ���� : ";
		cin >> a[k].diameter;
		cin.ignore(); //�Է� ���ۿ� �����ִ� ���ڸ� �����.
		cout << "���� ȸ���� �̸� : ";
		getline(cin, a[k].name);
		cout << "������ �߷� : ";
		cin >> a[k].weight;
		cout << endl;
	}

	for (int l = 0; l < i; l++)
	{
		cout << endl<<l + 1 << "��\n";
		cout << "������ ���� : " << a[l].diameter << "cm" << endl;

		cout << "���� ȸ���� �̸� : " << a[l].name << endl;

		cout << "������ �߷� : " << a[l].weight << "g" << endl<<endl;
	}
	delete [] a;
	return 0;
}*/

/* 9��
int main()
{
	struct candybar
	{
		string name;
		double g;
		int cal;
	};

	candybar *snack = new candybar[2];
	snack[0] = { "Moncha munch",2.3, 350 };
	cout << "�̸� : " << snack[0].name << "\n�߷� : " << snack[0].g << "g\nĮ�θ� : " << snack[0].cal << " Į�θ�";

	snack[1] = { "choco cake",134.5, 550 };
	cout << "\n\n�̸� : " << snack[1].name << "\n�߷� : " << snack[1].g << "g\nĮ�θ� : " << snack[1].cal << " Į�θ�";

	delete [] snack;
	return 0;
}*/

/* 10��
int main()
{
	const int a = 3;
	double add = 0;
	array<double, 3>running;
	cout << "40�ߵ� �޸��� ��� ���α׷�(3�� �Է�)"<<endl;
	for (int i = 0; i < a; i++)
	{
		cout << i + 1 << "����\n"<<">>> ";
		cin >> running[i];
		add += running[i];
		cout << endl;
	}
	cout << "�Է¿Ϸ�" << endl;

	for (int k = 0; k < a; k++)
	{
		cout << k + 1 << "���� ���\n" << ">>> ";
		cout << running[k];
		cout << endl;
	}
	cout << "\n\n����� ��� : " << add/3;

	return 0;
}*/

