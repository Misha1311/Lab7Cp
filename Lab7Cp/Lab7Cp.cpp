#include <iostream>
#include <queue>
#include <stack>
#include <time.h>

using namespace std;



void low()
{

	// создаем очередь значений типа int;
	queue <int> Numbers; // создали очередь Numbers

	cout << "Введите кол-во чисел для ввода: ";

	int size = 0;
	int number = 0;
	int positive = 0;

	cin >> size;

	cout << endl;

	// вносим значения в очередь;
	for (int i = 0; i < size; i++)
	{
		number = 10 - rand() % 20;

		Numbers.push(number); // добавляем в очередь элементы

		if (Numbers.back() >= 0) // Ищем положительные числа
		{
			positive++;
		}
	}

	cout << "Элементы очереди: ";

	// выводим элементы в консоль;
	for (int i = 0; i < size; i++)
	{
		cout << Numbers.front() << " "; //выводим первый элемент очереди		                         
		Numbers.pop(); // удаляем элемент из очереди
	}

	cout << endl << "Кол-во положительных чисел очереди: " << positive << endl << endl;
}


void medium()
{
	queue <string> lines; // создали очередь lines 
	
	string arr[6];

	// добавили в очередь несколько элементов типа string 
	lines.push("one");
	lines.push("two");
	lines.push("three");
	lines.push("four");

	for (int i = 0; i < 4; i++)// выводим эти элементы
	{
		cout << lines.front() << " ";
		arr[i] = lines.front(); //записываем элементы в массив для дальнешего использования
		lines.pop();
	}

	for (size_t i = 0; i < 4; i++)
	{
		lines.push(arr[i]);//считываем наши элементы
	}
	cout << "\nДлина строки : " << arr->length() + 1;

	lines.push("five"); // добавляем в очередь элемент

    // выводим новые элементы
	cout << "\nОчередь после изменений: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << lines.front() << " ";
		lines.pop();
	}

}


void hard()
{


}


int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "RU");

	low();
	medium();
	hard();


}
