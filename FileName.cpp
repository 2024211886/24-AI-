/* ��������������Ԫ��
#include<iostream>
using namespace std;

void main() {
	int arr[5] = { 250,200,150,100,50 };
	int max = 0;
	for (int i = 0; i <= 4; ++i) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << "���ֵΪ" << max << endl;
}*/




/*��ӡ����ѧ�����ܳɼ�
#include<iostream>
#include<string>
using namespace std;

void main() 
{
	int scores[3][3] =
	{
		{100,100,100},
		{50,90,100},
		{60,70,80}
	};

	string names[3] = { "����","����","����" };

	for (int i = 0; i < 3; i++) 
	{
		int sum = 0;
		for (int j = 0; j < 3; j++) 
		{
			sum += scores[i][j];
		}
		cout << names[i] << "�ܳɼ�Ϊ" << sum << endl;
	}
}*/





/*�����ķ��ļ���д(��swap����Ϊ��)
#include"swap.h"


void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << a << "  " << b << endl;
}

void main() {

	int a = 10, b = 20;
	swap(a, b);
	
}*/




/*#include<iostream>
using namespace std;

void main() {

	int arr[5] = { 1,2,3,4,5, };
	cout << arr << endl;
	cout << arr[0] << endl;
	cout << &arr[0] << endl;
}*/



/*#include<iostream>
using namespace std;
void main() {

	int temp = 1;
	int* p = &temp;

	cout << p << endl;
	cout << *p << endl;
	cout << &p << endl;

}*/



/*//ð������
#include<iostream>
using namespace std;



//����ð��������
void bubblesort(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printarray(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}



//��������
void main()
{
	int arr[10] = { 3,7,6,1,9,4,5,2,8,10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	bubblesort(arr, len);
	printarray(arr, len);
}
//�����ͬʱ�������������ð���������ô��*/



#include<iostream>
using namespace std;


int main() {

	int arr[3] = { 1,2,3 };
	int (*arr_ptr)[3] = &arr;
	cout << &arr[0] << endl;
	cout << (*arr_ptr) << endl;
	cout << (*arr_ptr)[0] << endl;
	cout <<arr_ptr << endl;
	cout << &arr_ptr << endl;
	cout << (*arr_ptr)[2] << endl;

	return 0;
 }

/*#include<iostream>
using namespace std;

int main(){

	int a = 1; 
	int* p = &a;
	cout << p << endl;
	cout << *p << endl;
	cout << &p << endl;
	cout << &a<< endl;

	


	return 0;

}*/






