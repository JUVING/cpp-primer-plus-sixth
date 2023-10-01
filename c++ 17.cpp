#include "main.h"



/*
//write.cpp 17-1 (1362pg)
int main()
{
	const char* state1 = "Florida";
	const char* state2 = "Kansas";
	const char* state3 = "Euphoria";
	int len = strlen(state2);
	cout << "루프 인덱스 증가:\n";
	int i;
	for (i = 0; i <= len; i++)
	{
		cout.write(state2, i);
		cout << endl;
	}
	cout << "루프 인덱스 감소:\n";
	for (i = 0; i > 0; i--)
		cout.write(state2, i)<< endl;

	cout << "문자열 길이 초과:\n";
	cout.write(state2, len + 5) << endl;

	return 0;
}*/



/*
//defualts.cpp 17-2 (1366pg)
int main()
{
	cout << "1234567890\n";
	char ch = 'K';
	int t = 273;
	cout << ch << "\n";
	cout << t << "\n";
	cout << -t << "\n";

	double f1 = 1.200;
	cout << f1 << "\n";
	cout << (f1 + 1.0 / 9.0) << ":\n";

	double f2 = 1.67E2;
	cout << f2 << ":\n";
	f2 += 1.0 / 9.0;
	cout << f2 << ":\n";
	cout<<(f2*1.0e-4)<< ":\n";

	double f3 = 2.3e-4;
	cout << f3 << "\n";
	cout << f3 + 10 << ":\n";

	return 0;
}*/



/*
//manip.cpp 17-3 (1369pg)
int main()
{
	cout << "하나의 정수를 입력하십시오: ";
	int n;
	cin >> n;

	cout << "n    n*n\n";
	cout << n << "    " << n * n << " (10진법)\n";

	cout << hex;
	cout << n << "    ";
	cout << n * n << " (16진법)\n";

	cout << oct << n;
	cout.width(6);
	cout<< n * n << " (8진법)\n";

	dec(cout);
	cout << n << "    " << n * n << " (10진법)\n";

	return 0;
}*/



/*
//width.cpp 17-4 (1371pg)
int main()
{
	int w = cout.width(30);
	cout << "디폴트 필드 폭 = " << w << ":\n";

	cout.width(5);
	cout << "N" << ':';
	cout.width(8);
	cout << "N * N" << ":\n";

	for (long i = 1; i <= 100; i *= 10)
	{
		cout.width(5);
		cout << i << ':';
		cout.width(8);
		cout << i * i << ":\n";
	}
	return 0;
}*/



/*
//fill.cpp 17-5 (1272pg)
int main()
{
	cout.fill('*');
	const char* stuff[2] = { "윤성일", "박순용" };
	long bonus[2] = { 900, 1350 };

	for (int i = 0; i < 2; i++)
	{
		cout << stuff[i] << ": $";
		cout.width(7);
		cout << bonus[i] << "\n";
	}
	return 0;
}*/



/*
//precise.cpp 17-6 (1373pg)
int main()
{
	float price1 = 20.40;
	float price2 = 1.9 + 8.0 / 9.0;

	cout << "\"손오공 인형\" $" << price1 << "!\n";
	cout << "\"사오정 인형\" $" << price2 << "!\n";

	cout.precision(2);
	cout << "\"손오공 인형\" $" << price1 << "!\n";
	cout << "\"사오정 인형\" $" << price2 << "!\n";

	return 0;
}*/




/*
//showpt.cpp 17-7 (1375pg)
int main()
{
	float price1 = 20.40;
	float price2 = 1.9 + 8.0 / 9.0;

	cout.setf(ios_base::showpoint);
	cout << "\"손오공 인형\" $" << price1 << "!\n";
	cout << "\"사오정 인형\" $" << price2 << "!\n";

	cout.precision(2);
	cout << "\"손오공 인형\" $" << price1 << "!\n";
	cout << "\"사오정 인형\" $" << price2 << "!\n";

	return 0;
}*/




