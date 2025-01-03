#include <iostream>
#include "SimpleVector.h";

using namespace std;

int main()
{
	SimpleVector<int> sv;
	SimpleVector<int> simpleVector(15);

	cout << "기본 생성자 !!\n" << "현재 원소 개수:" << sv.size();
	cout << " 배열 크기:" << sv.capacity() << endl;

	cout << "int 인자값을 받는 다중 정의 생성자 !!\n" << "현재 원소 개수:" << simpleVector.size();
	cout << " 배열 크기:" << simpleVector.capacity() << endl;

	cout << "\n배열에 23, 1 원소 추가!" << endl;
	sv.push_back(23);
	sv.push_back(1);

	cout << "원소 개수/배열크기:" << sv.size() << "/" << sv.capacity() << endl;

	cout << "\n배열에 원소 10개 추가!" << endl;
	for (int i = 0; i < 10; i++)
	{
		sv.push_back(i);
	}

	cout << "원소 개수/배열크기:" << sv.size() << "/" << sv.capacity() << endl;
}
