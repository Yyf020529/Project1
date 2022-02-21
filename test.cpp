#include<iostream> 
#include"test.h"
using namespace std;
int main()
{
	Slist list; 		//定义对象变量list 
	int n;
	int m;
	int flag = 1;
	cout << "请先输入集合A的元素个数" << endl;
	cin >> n;
	cout << "输入集合A的元素" << endl;
	list.list1(n);
	list.ifBig();
	if (list.flag==1)
	{
		cout << "请输入集合B的元素个数" << endl;
		cin >> n;
		cout << "请输入集合B的元素" << endl;
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
		cout << "**    1.求并集        **" << endl;
		cout << "**    2.求交集        **" << endl;
		cout << "**    3.求差          **" << endl;
		cout << "**    4.退出          **" << endl;
		cout << "**    5.重新输入      **" << endl;
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
			cout << "A∪B:";
			list.bing();
			break;
		case 2:
			system("cls");
			list.display_A();
			list.display_B();
			cout << "A∩B:";
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
			cout << "错误！有大写字母，请重新输入！" << endl;
			main();
			break;
		}
	}
	return 0;
}
