#include<iostream>
#include<string>
using namespace std;

void foon(string str)
{
	int a = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		a++;
	}
	cout << a << " " << "SUMMA SUMBOL" << endl;
}


void main()
{
	char s = 0;
	int i = 0;
	string str;
	getline(cin, str);
	foon(str);
	cout << "VUBIRI SUMBOL =";
	cin >> s;
	while (true)
	{
	int index = str.find(s);
	if (index!=string::npos)
	{
	str.erase(index, 1);

	}
	else
	{
		break;
	}

	}
	cout << str;
	system("pause");
}