#include "main.h"


/* arrayone 4-1 (134pg)
int main()
{
	int yams[3] = {7,8,6};

	//사용하는 c++ 컴파일러나 번역기가 이 배열을 초기화할 수 없다면
	//int yamcosts[3] 대신 static int yamcosts[3]을 사용하라
	int yamcosts[3] = { 200,300,50 };

	cout << "고구마 합계 : ";
	cout << yams[0] + yams[1] + yams[2]<<endl;
	cout << yams[1] << "개가 들어 있는 포장은";
	cout << "개당 " << yamcosts[1] << "원씩입니다." << endl;
	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
	total = total + yams[2] * yamcosts[2];
	cout << "세 포장의 총 가격은 " << total << "원 입니다." << endl;
	cout << "\nyams 배열의 크기는 " << sizeof yams << "바이트 입니다." << endl;
	cout << "원소 하나의 크기는 " << sizeof yams[0]<<"바이트 입니다.\n";

	return 0;
}*/

/* string 4-2 (141pg)
int main()
{
	const int size = 15;
	char name1[size];
	char name2[size]="c++owboy";

	cout << "안녕하세요 저는 " << name2 << "입니다."<<" 실례지만 성함이?\n";
	cin >> name1;
	cout << "아! " << name1 << "씨! 당신의 이름은 " << strlen(name1) << "자 입니다만 \n";
	cout << sizeof(name1) << "바이트 크기의 배열에 저장되었습니다.\n";
	cout << "이름이 " << name1[0] << "자로 시작하는군요.\n";
	name2[3] = '\0';
	cout << "제 이름의 처음 세 문자는 다음과 같습니다 : ";
	cout << name2 << endl;

	return 0;
}*/

/* instr1 4-3 (143pg)
int main()
{
	const int arsize = 20;
	char name[arsize];
	char dessert[arsize];

	cout << "이름을 입력하시오 : ";
	cin >> name;
	cout << "좋아하는 디저트를 입력하시오 : ";
	cin >> dessert;
	cout << "맛있는 " << dessert;
	cout << " 디저트를 준비하겠습니다. " << name << " 님!\n";
	return 0;
}*/

/* instr2 4-4 (145pg)
int main()
{
	const int arsize = 20;
	char name[arsize];
	char dessert[arsize];

	cout << "이름을 입력하시오 : ";
	cin.getline(name,arsize);
	cout << "좋아하는 디저트를 입력하시오 : ";
	cin.getline(dessert,arsize);
	cout << "맛있는 " << dessert;
	cout << " 디저트를 준비하겠습니다. " << name << " 님!\n";
	return 0;
}*/

/* instr3 4-4 (145pg)
int main()
{
	const int arsize = 20;
	char name[arsize];
	char dessert[arsize];

	cout << "이름을 입력하시오 : ";
	cin.get(name,arsize).get(); //문자열과 개행 문자를 읽는다.
	cout << "좋아하는 디저트를 입력하시오 : ";
	cin.get(dessert,arsize).get(); //문자열과 개행 문자를 읽는다.
	cout << "맛있는 " << dessert;
	cout << " 디저트를 준비하겠습니다. " << name << " 님!\n";
	return 0;
}*/

/*  numstr 4-6 (149pg)
int main()
{
	cout << "지금 사시는 아파트에 언제 입주하셨습니까?\n"<<">>> ";
	int year;
	cin >> year;
	cout << "사시는 도시를 말씀해 주세요\n" <<">>>";
	char address[80];
	cin.getline(address, 80);
	cout << "아파트 입주 연도 : " << year << endl;
	cout << "도시 : " << address << endl;
	cout << "등록이 완료되었습니다.\n";

	return 0;
}
	cin에서 입력 받은 Enter키의 개행 문자가 큐에 남아서 cin.getline에 저장되어
	연도를 입력 받고 도시를 입주 받지 못하고 입력이 끝이난다.
*/

/* strtype1 4 - 7 (151pg)
int main()
{
	char charr1[20];
	char charr2[20] = "jaguar";

	string str1;
	string str2 = "panther";

	cout << "고양이과의 동물 하나를 입력해주세요\n" << ">>> ";
	cin >> charr1;
	cout << "고양이과의 다른 동물 하나를 입력해주세요\n" << ">>> ";
	cin >> str1;

	cout << "아래 동물 모두 고양이과 입니다.\n";
	cout << charr1 << ", " << charr2 << ", " << str1 << ", " << str2<<endl;

	cout << charr2 << "에서 3번째 글자는 " << charr2[2] << "입니다.\n";
	cout << str2 << "에서 3번째 글자는 " << str2[2] << "입니다.\n";

	return 0;
}*/

/* strtype2 4-8 (154pg)
int main()
{
	string s1 = "penguin", s2, s3;
	cout << "string 객체를 string 객체에 대입할 수 있다 : s2 = s1\n";
	s2 = s1;
	cout << "s1 : " << s1 << ", s2 : " << s2 << endl;
	cout << "string 객체에 c스타일 문자열을 대입할 수 있다\n";
	cout << "s2 = \"buzzard\"\n";
	s2 = "buzzard";
	cout << "s2 : " << s2 << endl;
	cout << "stinr 객체들을 결합할 수 있다 : s3 = s1 + s2\n";
	s3 = s1 + s2;
	cout << "s3 : " << s3 << endl;
	cout << "string 객체들을 추가할 수 있다.\n";
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
	strcpy_s(charr1, charr2); //charr2를 charr1에 복사 //_s를 사용해서 야과된 보안을 보완한다.

	str1 += " paste";
	strcat_s(charr1, " juice"); //charr1 끝에 juice를 추가 //_s를 사용해서 야과된 보안을 보완한다.

	int len1 = str1.size(); //str1의 길이를 구한다.
	int len2 = strlen(charr1);

	cout << str1 << " 문자열에는" << len1 << "개의 문자가 들어 있다.\n";
	cout << charr1 << " 문자열에는" << len2 << "개의 문자가 들어 있다.\n";

	return 0;
}*/

/* 4-10 strtype4 (158pg)
int main()
{
	char charr[20];
	string str;

	cout << "입력 이전의 charr에 있는 문자열의 길이 : " << strlen(charr) << endl;
	cout << "입력 이전의 str에 있는 문자열의 길이 : " << str.size() << endl;

	cout << "텍스트 한행을 입력하시오 : ";
	cin.getline(charr, 20);
	cout << "입력한 텍스트 : " << charr << endl;
	cout << "또 다른 한 행을 입력하시오 : ";
	getline(cin,str);
	cout << "입력한 텍스트 : " << str << endl;

	cout << "입력 이후에 charr에 있는 문자열의 길이 : "<<strlen(charr)<<endl;
	cout << "입력 이후에 str에 있는 문자열의 길이 : " << str.size() << endl;

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

	cout << "지금 판매하고 있는 모형 풍선은" << guest.name;
	cout << "와 " << pal.name << "입니다. \n";

	cout << "두 제품을 $" << guest.price + pal.price << "에 드리겠습니다. \n";

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

	cout << guests[0].name << "와 " << guests[1].name << "의 부피를 합하면\n"
		<< guests[0].volume + guests[1].volume<<" 세제곱피트입니다. \n";

	return 0;
}*/

/* address 4-14 (179pg)
int main()
{
	int donuts = 6;
	double cups = 4.5;

	cout << "dounuts의 값 = " << donuts << " donuts의 주소 = " << &donuts << endl;
	cout << "cups의 값 = " << cups << " cups의 주소 = " << &cups << endl;
}*/

/* pointers 4-15 (181pg)
int main()
{
	int updates = 6;
	int* p_updates; //int형을 지시하는 포인터

	p_updates = &updates; //포인터에 주소를 대입

	cout << "값 : updates = " << updates
		<< ", *p_updates = " << *p_updates << endl;

	cout << "주소 : updates = " << &updates
		<< ", p_updates = " << p_updates << endl;

	*p_updates = *p_updates + 1;                     //*p_updates가 updates의 주소를 가리키는 포인터여서
	cout << "변경된 updates = " << updates << endl;  //updates의 값이 변경이 가능하다.

	return 0;
}*/

/* init_ptr 4-16 (185pg)
int main()
{
	int higgens = 5;
	int* pt = &higgens;

	cout << "higgens = " << higgens<< " higgens의 주소 = "<<&higgens << endl;
	cout << "*pt의 값" << &pt << " pt의 값 = " << pt << endl;

	return 0;
}*/

/* use_new 4-17 (189pg)
int main()
{
	int nights = 1001;
	int* pt = new int; //int형을 저장할 메모리를 대입
	*pt = 1001; //대입된 메모리에 값을 저장

	cout << "nights의 값 = ";
	cout << nights << ": 메모리 위치 " << &nights << endl;
	cout << "int 형";
	cout << "값 = " << *pt << ": 메모리 위치 = " << pt << endl;

	double* pd = new double;
	*pd = 10000001.0;

	cout << "double 형";
	cout << "값 = " << *pd << ": 메모리 위치 = " << pd << endl;
	cout << "포인터 pd의 메모리 위치 : " << &pd << endl;
	cout << "pt의 크기 = " << sizeof(pt);
	cout << ": *pt의 크기" << sizeof(*pt) << endl;
	cout << "pd의 크기 = " << sizeof pd;
	cout<<": *pd의 크기 = " << sizeof(*pd) << endl;

	return 0;
}*/

/* arraynew 4-18 (195pg)
int main()
{
	double* p3 = new double[3];

	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout << "p3[1]은 " << p3[1] << "입니다.\n";
	p3 = p3 + 1;
	cout<<"이제는 p3[0]이 "<<p3[1]<< "입니다.\n";
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
	cout << "pw 포인터에 1을 더함:\n";
	cout << "pw = " << pw << ", *pw = " << *pw << endl;

	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	pw = pw + 1;
	cout << "ps 포인터에 1을 더함:\n";
	cout << "ps = " << ps << ", *ps = " << *ps << endl;

	cout << "배열 표기로 두 원소에 접근\n";
	cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
	cout << "포인터 표기로 두 원소에 접근\n";
	cout << "*stacks = " << *stacks
		<< ", *(stacks + 1) = " << *(stacks + 1) << endl;

	cout << sizeof(wages) << " = wages 배열의 크기\n";
	cout << sizeof(pw) << " = pw 포인터의 크기\n";

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

	cout << "동물의 종류를 입력하시오 : ";
	cin >> animal;

	ps = animal;
	cout << ps << "s!\n";
	cout << "strcpy() 사용 전: \n";
	cout << (int*)animal << ": " << animal << endl; //(int *) 주소 값 반환
	cout << (int*)ps << ": " << ps << endl;

	ps = new char[strlen(animal) + 1];
	strcpy_s(ps, strlen(animal) + 1, animal); //strcpy_s(저장할 위치, 저장할 데이터의 크기 +1, 저장할 데이터);
	cout << "strcpy() 사용 후: \n";
	cout << (int*)animal << ": " << animal << endl; //(int *) 주소 값 반환
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
	cout << "모형풍선의 이름을 입력하십시오: ";
	cin.get(ps->name, 20);
	cout << "부피를 세제곱 피트 단위로 입력하십시오: ";
	cin >> (*ps).volume;
	cout << "가격을 달러 단위로 입력하십시오: $";
	cin >> ps->price;
	cout << "이름: " << (*ps).name << endl;
	cout << "부피: " << ps->volume << " cubic feet\n";
	cout << "가격: " << ps->price << endl;
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
	cout << "이름을 입력하십시오: ";
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

//연습문제

/* 1번
char change(char ch);
int main()
{
	cout << "영문 퍼스트 네임(이름) : ";
	char fname[100];
	cin.getline(fname,'\n');
	cout << "영문 라스트 네임(성) : ";
	string lname;
	cin >> lname;
	cout << "학생이 원하는 학점 : ";
	char s;
	cin >> s;
	cout << "나이 : ";
	int age = 0;
	cin >> age;
	cout << lname << ", " << fname;
	cout << " 학점 : "<< change(s);
	cout << " 나이 : " << age;

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

/* 2번
int main()
{
	string name, dessert;

	cout << "이름을 입력하시오 : ";
	getline(cin, name);
	cout << "좋아하는 디저트를 입력하시오 : ";
	getline(cin, dessert);
	cout << "맛있는 " << dessert;
	cout << " 디저트를 준비하겠습니다. " << name << " 님!\n";
	return 0;
}*/

/* 3번
int main()
{
	cout << "영문 퍼스트 네임(이름) : ";
	char fname[50];
	cin.getline(fname,'\n');
	cout << "영문 라스트 네임(성) : ";
	char lname[50];
	cin.getline(lname, '\n');

	strcat_s(lname, ", "); //strcat_s(1,2); 1번 끝에 2번을 추가한다.
	strcat_s(lname, fname);
	cout << lname;

	return 0;
}*/

/* 4번
int main()
{
	cout << "영문 퍼스트 네임(이름) : ";
	string fname;
	getline(cin,fname);
	cout << "영문 라스트 네임(성) : ";
	string lname;
	getline(cin, lname);
	lname += ", ";
	lname += fname;

	cout << lname;

	return 0;
}*/

/* 5번
int main()
{
	struct candybar
	{
		string name;
		double g;
		int cal;
	}snack;

	snack = { "Moncha munch",2.3, 350 };
	cout << "이름 : " << snack.name << "\n중량 : " << snack.g << "\n칼로리 : " << snack.cal;

	return 0;
}*/

/* 6번
int main()
{
	struct candybar
	{
		string name;
		double g;
		int cal;
	}snack[2];

	snack[0] = { "Moncha munch",2.3, 350 };
	cout << "이름 : " << snack[0].name << "\n중량 : " << snack[0].g << "g\n칼로리 : " << snack[0].cal<<" 칼로리";

	snack[1] = { "choco cake",134.5, 550 };
	cout << "\n\n이름 : " << snack[1].name << "\n중량 : " << snack[1].g << "g\n칼로리 : " << snack[1].cal << " 칼로리";

	return 0;
}*/

/* 7번
int main()
{
	struct pizza
	{
		char name[100];
		int diameter;
		int weight;
	}a;
	cout << "피자 회사의 이름 : ";
	cin.getline(a.name,100);
	cout << "피자의 지름 : ";
	cin >> a.diameter;
	cout << "피자의 중량 : ";
	cin >> a.weight;

	cout << "\n\n피자 회사의 이름 : "<<a.name<<endl;

	cout << "피자의 지름 : "<<a.diameter<<"cm" << endl;

	cout << "피자의 중량 : "<<a.weight<<"g" << endl;

	return 0;
}*/

/* 8번
int main()
{
	struct pizza
	{
		string name;
		int diameter;
		int weight;
	};
	int i;
	cout << "몇개의 제품을 등록할까요?\n" << ">>> ";
	cin >> i;
	pizza *a = new pizza[i];

	for (int k = 0; k < i; k++)
	{
		cout << k + 1 << "번\n";
		cout << "피자의 지름 : ";
		cin >> a[k].diameter;
		cin.ignore(); //입력 버퍼에 남아있는 문자를 지운다.
		cout << "피자 회사의 이름 : ";
		getline(cin, a[k].name);
		cout << "피자의 중량 : ";
		cin >> a[k].weight;
		cout << endl;
	}

	for (int l = 0; l < i; l++)
	{
		cout << endl<<l + 1 << "번\n";
		cout << "피자의 지름 : " << a[l].diameter << "cm" << endl;

		cout << "피자 회사의 이름 : " << a[l].name << endl;

		cout << "피자의 중량 : " << a[l].weight << "g" << endl<<endl;
	}
	delete [] a;
	return 0;
}*/

/* 9번
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
	cout << "이름 : " << snack[0].name << "\n중량 : " << snack[0].g << "g\n칼로리 : " << snack[0].cal << " 칼로리";

	snack[1] = { "choco cake",134.5, 550 };
	cout << "\n\n이름 : " << snack[1].name << "\n중량 : " << snack[1].g << "g\n칼로리 : " << snack[1].cal << " 칼로리";

	delete [] snack;
	return 0;
}*/

/* 10번
int main()
{
	const int a = 3;
	double add = 0;
	array<double, 3>running;
	cout << "40야드 달리기 기록 프로그램(3번 입력)"<<endl;
	for (int i = 0; i < a; i++)
	{
		cout << i + 1 << "차시\n"<<">>> ";
		cin >> running[i];
		add += running[i];
		cout << endl;
	}
	cout << "입력완료" << endl;

	for (int k = 0; k < a; k++)
	{
		cout << k + 1 << "차시 기록\n" << ">>> ";
		cout << running[k];
		cout << endl;
	}
	cout << "\n\n기록의 평균 : " << add/3;

	return 0;
}*/

