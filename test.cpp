#include<iostream> 
#include"test.h"
using namespace std;
int main()
{
	Slist list; 		//����������list 
	int n;
	int m;
	int flag = 1;
	cout << "�������뼯��A��Ԫ�ظ���" << endl;
	cin >> n;
	cout << "���뼯��A��Ԫ��" << endl;
	list.list1(n);
	list.ifBig();
	if (list.flag==1)
	{
		cout << "�����뼯��B��Ԫ�ظ���" << endl;
		cin >> n;
		cout << "�����뼯��B��Ԫ��" << endl;
		list.list2(n);
		list.ifBig();

		system("cls");
		list.display_A();
		list.display_B();
	}
	while (flag)
	{
		cout << endl;
		cout << "************************" << endl;
		cout << "**    1.�󲢼�        **" << endl;
		cout << "**    2.�󽻼�        **" << endl;
		cout << "**    3.���          **" << endl;
		cout << "**    4.�˳�          **" << endl;
		cout << "**    5.��������      **" << endl;
		cout << "************************" << endl;
		if (list.flag)
		{
			cin >> m;
		}
		else
		{
			m = 6;
		}
		if (m == 4)
			break;
		switch (m)
		{
		case 1:
			system("cls");
			list.display_A();
			list.display_B();
			cout << "A��B:";
			list.bing();
			break;
		case 2:
			system("cls");
			list.display_A();
			list.display_B();
			cout << "A��B:";
			list.jiao();
			break;
		case 3:
			system("cls");
			list.display_A();
			list.display_B();
			cout << "A-B:";
			list.cha();
			break;
		case 5:
			system("cls");
			main();
			break;
		case 6:
			system("cls");
			cout << "�����д�д��ĸ�����������룡" << endl;
			main();
			break;
		}
	}
	return 0;
}
