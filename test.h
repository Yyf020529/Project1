#include<iostream> 
using namespace std;
const int MaxSize = 20;		//设置最大长度为20 

class Slist
{
public:
	void list1(int n);		//构造函数1
	void list2(int n); 		//构造函数2
	void bing();			//集合的并 
	void jiao(); 			//集合的交 
	void cha();
	void display_A();
	void display_B();
	void ifBig();
	int flag;
private:
	char Adata[MaxSize];		//存放集合1元素的数组A 
	char Bdata[MaxSize]; 	//存放集合2元素的数组B 
	int lengtha; 			//存放集合1元素数组A的长度 
	int lengthb;//存放集合2元素数组B的长度 

};
void Slist::list1(int n) 	//构造集合1
{
	int i;
	if (n > MaxSize || n < 1)
	{
		cout << "长度有误!" << endl;
	}
	else
	{
		for (i = 0; i < n; i++) 	//定义集合1
		{
			cin >> Adata[i];
		}
		lengtha = n; 			//数组A的长度 
	}
}
void Slist::list2(int n) 	//构造集合2
{
	int i;
	if (n > MaxSize || n < 1)
	{
		cout << "长度有误!" << endl;
	}
	else
	{
		for (i = 0; i < n; i++) 	//定义集合2
		{
			cin >> Bdata[i];
		}
		lengthb = n; 			//数组B的长度 
	}
}
void Slist::bing() 					//求并集函数 
{
	int i, j, m, s;
	char k, l;
	for (i = 0; i < lengtha; i++) 			//遍历数组1 
	{
		cout << Adata[i] <<" ";		//输出集合1所有元素 
	}
	for (m = 0; m < lengthb; m++) 			//遍历集合2所有元素 
	{
		l = Bdata[m]; 					//使集合2中元素为l 
		s = 0; 						//定义累加器 
		for (j = 0; j < lengtha; j++)
			//遍历集合1，将集合2中元素与集合1中元素逐个比较,若累加器s没有加，则出现新的元素，将其输出 
		{
			k = Adata[j]; 				//使集合1中元素为k 
			if (l == k) 			//两集合中元素重复，累加器累加，不必再输出集合2中与集合1一样的元素  
			{
				s = s + 1;
			}
		}
		if (s == 0) 					//累加器没有增加 则出现新元素，输出即可 
		{
			cout << l << " ";
		}
	}
}
void Slist::jiao()
{
	int i, j;
	char k, l;
	for (i = 0; i < lengthb; i++) 		//遍历集合2 
	{
		l = Bdata[i]; 				//使集合2中元素为l 
		for (j = 0; j < lengtha; j++) 	//遍历集合1 
		{
			k = Adata[j]; 			//使集合1中元素为k 
			if (l == k) 			//若l=k,则输出两集合相同的元素 
			{
				cout << l << " ";
			}
		}
	}
}

void Slist::cha()
{
	int i, j;
	int flag;
	for (i = 0; i < lengtha; i++)
	{
		flag = 1;
		for (j = 0; j < lengthb; j++)
		{
			if (Adata[i] == Bdata[j])//集合A中每个元素与集合B比较，如果相等则不输出
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)//如果有与集合B元素不一样的则输出
		{
			cout << Adata[i] << " ";
		}
	}
}
void Slist::display_A()
{
	int i;
	cout << "集合A:";
	for (i = 0; i < lengtha; i++)
	{
		cout << Adata[i] << " ";
	}
	cout << endl;
}

void Slist::display_B()
{
	int i;
	cout << "集合B:";
	for (i = 0; i < lengthb; i++)
	{
		cout << Bdata[i] << " ";
	}
	cout << endl;
}

void Slist::ifBig()
{
	for (int n = 0; n < lengtha; n++)
	{
		if (Adata[n] <= 'z' and Adata[n] >= 'a')
		{
			flag = 1;
		}
		else
		{
			flag = 0;
			break;
		}
	}

	for (int n = 0; n < lengthb; n++)
	{
		if (Bdata[n] <= 'z' and Bdata[n] >= 'a')
		{
			flag = 1;
		}
		else
		{
			flag = 0;
			break;
		}
	}
}