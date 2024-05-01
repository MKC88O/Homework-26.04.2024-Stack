// Homework-26.04.2024-Stack.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stack>
#include "Person.h"

using namespace std;

void operator << (ostream& cout, Person& person);
void showStackPerson(stack<Person>Stack);
void showStack(stack<int>Stack);

int main()
{
    setlocale(0, "");

    stack<int>Stack;
    
    cout << "Stack size:" << Stack.size() << "\n\n";
    cout << "Stack: ";
    showStack(Stack);
    
    Stack.push(256);
    Stack.push(356);
    Stack.push(456);
    Stack.push(556);
    Stack.push(56);
    
    cout << "Stack size:" << Stack.size() << "\n\n";
    cout << "Stack: ";
    showStack(Stack);
    
    Stack.pop();
    Stack.pop();
    
    cout << "Stack size:" << Stack.size() << "\n\n";
    cout << "Stack: ";
    showStack(Stack);
    
    Stack.push(256);
    Stack.push(356);
    Stack.push(456);
    Stack.push(556);
    Stack.push(56);
    
    cout << "Stack size:" << Stack.size() << "\n\n";
    cout << "Stack: ";
    showStack(Stack);
    
    Stack.pop();
    Stack.pop();
    
    cout << "Stack size:" << Stack.size() << "\n\n";
    cout << "Stack: ";
    showStack(Stack);
    
    Stack.emplace(274);
    
    cout << "Stack size:" << Stack.size() << "\n\n";
    cout << "Stack: ";
    showStack(Stack);
   
    stack<int>Stack1;
    
    cout << "Stack1 size:" << Stack1.size() << "\n\n";
    cout << "Stack1: ";
    showStack(Stack1);
    
    Stack.swap(Stack1);
    
    cout << "Stack1 size:" << Stack1.size() << "\n\n";
    cout << "Stack1: ";
    showStack(Stack1);

    stack<Person>stackPerson;

    cout << "stackPerson size:" << stackPerson.size() << "\n\n";
    cout << "stackPerson: \n";
    showStackPerson(stackPerson);

    stackPerson.push(Person());
    stackPerson.push(Person());
    stackPerson.push(Person());
    stackPerson.push(Person());
    stackPerson.push(Person());

    cout << "stackPerson size:" << stackPerson.size() << "\n\n";
    cout << "stackPerson: \n";
    showStackPerson(stackPerson);

    stackPerson.pop();
    stackPerson.pop();

    cout << "stackPerson size:" << stackPerson.size() << "\n\n";
    cout << "stackPerson: \n";
    showStackPerson(stackPerson);

    stackPerson.emplace(Person());

    cout << "stackPerson size:" << stackPerson.size() << "\n\n";
    cout << "stackPerson: \n";
    showStackPerson(stackPerson);

    stack<Person>stackPerson1;

    cout << "stackPerson1 size:" << stackPerson1.size() << "\n\n";
    cout << "stackPerson1: \n";
    showStackPerson(stackPerson1);

    stackPerson.swap(stackPerson1);

    cout << "stackPerson1 size:" << stackPerson1.size() << "\n\n";
    cout << "stackPerson1: \n";
    showStackPerson(stackPerson1);
    
}

void operator << (ostream& cout, Person& person) {
    cout << "===============================================================\n";
    cout << "Информация о person: \n\n";
    cout << "Имя:\t\t\t\t" << person.GetName() << " " << person.GetPatronymic() << " " << person.GetSurname() << "\n";
    cout << "Номер телефона:\t\t\t" << person.GetPhoneNumberStart() << person.GetPhoneNumberEnd() << "\n";
    cout << "Дата рождения:\t\t\t" << person.GetBirthDay() << "." << person.GetBirthMonth() << "." << person.GetBirthYear() << "\n";
    cout << "Серия и номер паспорта:\t\t" << person.GetPasportSerial() << person.GetPasportNumber() << "\n";
    cout << "Идентификационный номер: \t" << person.GetIPN() << "\n";
    cout << "Статус:\t\t\t\t" << person.GetStatus() << "\n";
    cout << "===============================================================\n";
}

void showStack(stack<int>Stack) {
    for (; !Stack.empty(); Stack.pop()) {
        cout << Stack.top() << " ";
    }
    cout << "\n\n";
}

void showStackPerson(stack<Person>Stack) {
    for (; !Stack.empty(); Stack.pop()) {
        cout << Stack.top();
    }
    cout << "\n\n";
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
