#include <iostream>
#include "SimpleVector.h";

using namespace std;

int main()
{
	SimpleVector<int> sv;
	SimpleVector<int> simpleVector(15);

	cout << "�⺻ ������ !!\n" << "���� ���� ����:" << sv.size();
	cout << " �迭 ũ��:" << sv.capacity() << endl;

	cout << "int ���ڰ��� �޴� ���� ���� ������ !!\n" << "���� ���� ����:" << simpleVector.size();
	cout << " �迭 ũ��:" << simpleVector.capacity() << endl;

	cout << "\n�迭�� 23, 1 ���� �߰�!" << endl;
	sv.push_back(23);
	sv.push_back(1);

	cout << "���� ����/�迭ũ��:" << sv.size() << "/" << sv.capacity() << endl;

	cout << "\n�迭�� ���� 10�� �߰�!" << endl;
	for (int i = 0; i < 10; i++)
	{
		sv.push_back(i);
	}

	cout << "���� ����/�迭ũ��:" << sv.size() << "/" << sv.capacity() << endl;
}
