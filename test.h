#include<iostream> 
using namespace std;
const int MaxSize = 20;		//������󳤶�Ϊ20 

class Slist
{
public:
	void list1(int n);		//���캯��1
	void list2(int n); 		//���캯��2
	void bing();			//���ϵĲ� 
	void jiao(); 			//���ϵĽ� 
	void cha();
	void display_A();
	void display_B();
	void ifBig();
	int flag;
private:
	char Adata[MaxSize];		//��ż���1Ԫ�ص�����A 
	char Bdata[MaxSize]; 	//��ż���2Ԫ�ص�����B 
	int lengtha; 			//��ż���1Ԫ������A�ĳ��� 
	int lengthb;//��ż���2Ԫ������B�ĳ��� 

};
void Slist::list1(int n) 	//���켯��1
{
	int i;
	if (n > MaxSize || n < 1)
	{
		cout << "��������!" << endl;
	}
	else
	{
		for (i = 0; i < n; i++) 	//���弯��1
		{
			cin >> Adata[i];
		}
		lengtha = n; 			//����A�ĳ��� 
	}
}
void Slist::list2(int n) 	//���켯��2
{
	int i;
	if (n > MaxSize || n < 1)
	{
		cout << "��������!" << endl;
	}
	else
	{
		for (i = 0; i < n; i++) 	//���弯��2
		{
			cin >> Bdata[i];
		}
		lengthb = n; 			//����B�ĳ��� 
	}
}
void Slist::bing() 					//�󲢼����� 
{
	int i, j, m, s;
	char k, l;
	for (i = 0; i < lengtha; i++) 			//��������1 
	{
		cout << Adata[i] <<" ";		//�������1����Ԫ�� 
	}
	for (m = 0; m < lengthb; m++) 			//��������2����Ԫ�� 
	{
		l = Bdata[m]; 					//ʹ����2��Ԫ��Ϊl 
		s = 0; 						//�����ۼ��� 
		for (j = 0; j < lengtha; j++)
			//��������1��������2��Ԫ���뼯��1��Ԫ������Ƚ�,���ۼ���sû�мӣ�������µ�Ԫ�أ�������� 
		{
			k = Adata[j]; 				//ʹ����1��Ԫ��Ϊk 
			if (l == k) 			//��������Ԫ���ظ����ۼ����ۼӣ��������������2���뼯��1һ����Ԫ��  
			{
				s = s + 1;
			}
		}
		if (s == 0) 					//�ۼ���û������ �������Ԫ�أ�������� 
		{
			cout << l << " ";
		}
	}
}
void Slist::jiao()
{
	int i, j;
	char k, l;
	for (i = 0; i < lengthb; i++) 		//��������2 
	{
		l = Bdata[i]; 				//ʹ����2��Ԫ��Ϊl 
		for (j = 0; j < lengtha; j++) 	//��������1 
		{
			k = Adata[j]; 			//ʹ����1��Ԫ��Ϊk 
			if (l == k) 			//��l=k,�������������ͬ��Ԫ�� 
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
			if (Adata[i] == Bdata[j])//����A��ÿ��Ԫ���뼯��B�Ƚϣ������������
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)//������뼯��BԪ�ز�һ���������
		{
			cout << Adata[i] << " ";
		}
	}
}
void Slist::display_A()
{
	int i;
	cout << "����A:";
	for (i = 0; i < lengtha; i++)
	{
		cout << Adata[i] << " ";
	}
	cout << endl;
}

void Slist::display_B()
{
	int i;
	cout << "����B:";
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