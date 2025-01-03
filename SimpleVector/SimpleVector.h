#pragma once
#include <algorithm>

template<typename T>
class SimpleVector
{
public:
	SimpleVector();
	SimpleVector(int size);
	SimpleVector(const SimpleVector& other);
	~SimpleVector();

	void push_back(const T& value);
	void pop_back();

	void resize(int size);
	int size() const;
	int capacity() const;

	void sortData();

	T& operator[](const int& rhs);

private:
	void reallocate(int newCapacity);

	T* data = nullptr;
	int currentSize = 0;
	int currentCapacity = 10;
};

template<typename T>
SimpleVector<T>::SimpleVector() {
	data = new T[currentCapacity];
}

template<typename T>
SimpleVector<T>::SimpleVector(int size) {
	currentCapacity = size;
	data = new T[size];
}

template<typename T>
SimpleVector<T>::SimpleVector(const SimpleVector& other) {
	currentSize = other.currentSize;
	currentCapacity = other.currentCapacity;

	data = new T[currentCapacity];
	for (int i = 0; i < currentSize; i++)
	{
		data[i] = other.data[i];
	}
}

template<typename T>
SimpleVector<T>::~SimpleVector() {
	delete[] data;
}

template<typename T>
void SimpleVector<T>::push_back(const T& value) {
	// 배열 공간 부족할 경우 배열 확장
	if (currentSize >= currentCapacity)
	{
		std::cout << "배열 공간이 부족합니다! 확장을 시도하겠습니다!\n";
		// 5 만큼 기존배열 크기를 확장
		this->reallocate(currentCapacity + 5);
	}

	data[currentSize] = value;
	currentSize++;

}

template<typename T>
void SimpleVector<T>::pop_back() {
	if (currentSize > 0)
	{
		currentSize--;
	}
}

template<typename T>
void SimpleVector<T>::resize(int size) {
	if (size > currentCapacity)
	{
		reallocate(size);
	}
	//currentSize = size;
}

template<typename T>
int SimpleVector<T>::size() const {
	return currentSize;
}

template<typename T>
int SimpleVector<T>::capacity() const {
	return currentCapacity;
}

template<typename T>
void SimpleVector<T>::sortData() {
	std::sort(data, data + currentSize);
}

template<typename T>
T& SimpleVector<T>::operator[](const int& rhs) {
	return SimpleVector::data[rhs];
}

template<typename T>
void SimpleVector<T>::reallocate(int newCapacity)
{		
	T* newData = new T[newCapacity];
	for (int i = 0; i < currentSize; ++i) {
		newData[i] = data[i];
	}

	delete[] data;
	data = newData;
	currentCapacity = newCapacity;
}