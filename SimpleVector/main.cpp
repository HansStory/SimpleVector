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
	sv.push_back(4);
	sv.push_back(7);

	cout << "기본 생성자 원소 개수/배열크기:" << sv.size() << "/" << sv.capacity() << endl;

	SimpleVector<int> copyVector(sv);
	cout << "\n복사 생성자 !!\n" << "현재 원소 개수:" << copyVector.size();
	cout << " 배열 크기:" << copyVector.capacity() << endl;
	cout << "복사 생성자 원소 개수/배열크기:" << copyVector.size() << "/" << copyVector.capacity() << endl;

	copyVector.resize(22);
	cout << "\n복사 생성자 resize() 22개로!\n" << "현재 원소 개수:" << copyVector.size();
	cout << " 배열 크기:" << copyVector.capacity() << endl;
	cout << "복사 생성자 원소 개수/배열크기:" << copyVector.size() << "/" << copyVector.capacity() << endl;

	cout << "\n기본생성자 배열에 원소 10개 추가!" << endl;
	for (int i = 0; i < 10; i++)
	{
		sv.push_back(i);
	}

	cout << "원소 개수/배열크기:" << sv.size() << "/" << sv.capacity() << endl;

	SimpleVector<int> sortedVector(sv);
	sortedVector.sortData();
	cout << "\n배열 정렬을 시작합니다!" << endl;
	cout << "[기존데이터 영역]       [정렬데이터 영역]" << endl;
	for (int i = 0; i < sv.size(); i++)
	{
		cout << "        " << sv[i] << "                      " << sortedVector[i] << "  " << endl;
	}

}
