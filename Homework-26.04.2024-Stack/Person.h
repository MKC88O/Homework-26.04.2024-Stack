#pragma once
#include <iostream>
#include <string>
using namespace std;
class Person {
    string names[32] = {
        "���������", "�������", "������", "�����", "��������",
        "�������", "�������", "������", "��������", "���������",
        "�������", "��������", "������", "�����", "�������", "�������", "����",
        "�����", "����", "������", "������", "����",
         "������", "������", "�������", "����", "�����",
        "�����", "�����", "������", "������", "���������",

    };
    int namesSize = sizeof(names) / sizeof(names[0]);
    int randomNameIndex = rand() % namesSize;
    string Name = names[randomNameIndex];

    string surnames[85]{
        "��������", "���������", "�������", "������", "��������",
        "�����", "�������", "�������", "�����", "�������",
        "�������", "��������", "���������", "�������", "�����������",
        "��������", "��������", "���������", "��������","��������",
        "������", "����������", "��������", "�������", "����������",
        "������", "��������", "����������", "�������", "�����",
        "�������", "��������", "��������", "�������", "����",
        "�������", "������", "����������", "���������", "��������",
        "��������", "��������", "����������", "���������", "�������",
        "�������", "���������", "�������", "���������", "�������",
        "���������", "�������", "������", "�����������", "����������",
        "������", "���������", "����������", "�����������", "�������",
        "�������", "�����", "�������", "��������", "���������",
        "���������", "�������", "����������", "��������", "����������",
        "��������", "����������", "��������", "���������", "��������",
        "������", "�����������", "����������", "��������", "�������",
        "���������", "�������", "���������", "���������", "���������"
    };
    int surnamesSize = sizeof(surnames) / sizeof(surnames[0]);
    int randomSurnameIndex = rand() % surnamesSize;
    string Surname = surnames[randomSurnameIndex];

    string patronymics[65]{
        "��������", "��������", "�������������", "����������", "���������",
        "����������", "������������", "���������", "����������", "����������",
        "���������", "��������", "���������", "����������", "����������",
        "�����������", "�����������", "����������", "�������������", "��������",
        "���������", "���������", "�����������", "����������", "����������",
        "��������", "����������", "���������", "����������", "������������",
        "���������", "����������", "�������", "����������", "������������",
        "��������", "����������", "����������", "���������", "����������",
        "�������������", "����������", "�������������", "����������", "���������",
        "�������", "�����", "���������", "��������", "�����������",
        "���������", "����������", "�������������", "���������", "�������",
        "����������", "����������", "���������", "����������", "����������",
        "����������", "����������", "��������", "��������", "�������������"
    };
    int patronymicsSize = sizeof(patronymics) / sizeof(patronymics[0]);
    int randomPatronymicIndex = rand() % patronymicsSize;
    string Patronymic = patronymics[randomPatronymicIndex];

    int birthDay = random(1, 31);
    int birthMonth = random(1, 12);
    int birthYear = random(1900, 2024);

    int phoneNumberEnd = random(1000000, 9999999);
    string phoneNumberStart[9]{
        "+38(063)","+38(066)", "+38(068)",
        "+38(073)", "+38(093)", "+38(095)",
        "+38(096)", "+38(097)", "+38(098)",
    };
    int phoneNumberStartSize = sizeof(phoneNumberStart) / sizeof(phoneNumberStart[0]);
    int numberStartIndex = rand() % phoneNumberStartSize;
    string numberStart = phoneNumberStart[numberStartIndex];

    string pasportSerial[100]{
        "��", "��", "��", "��", "��", "��", "��", "��", "��", "��",
        "��", "��", "��", "��", "��", "��", "��", "��", "��", "��",
        "��", "��", "��", "��", "��", "��", "��", "��", "��", "��",
        "��", "��", "��", "��", "��", "��", "��", "��", "��", "��",
        "��", "��", "��", "��", "��", "��", "��", "��", "��", "��",
        "��", "��", "��", "��", "��", "��", "��", "��", "��", "��",
        "��", "��", "��", "��", "��", "��", "��", "��", "��", "��",
        "��", "��", "��", "��", "��", "��", "��", "��", "��", "��",
        "��", "��", "��", "��", "��", "��", "��", "��", "��", "��",
        "��", "��", "��", "��", "��", "��", "��", "��", "��", "��"
    };
    int pasportSerialSize = sizeof(pasportSerial) / sizeof(pasportSerial[0]);
    int randomSerialIndex = rand() % pasportSerialSize;
    string Serial = pasportSerial[randomSerialIndex];
    double pasportNumber = random(100000, 999999);

    long long int IPN = random(1000000000, 9999999999);

    string status[2]{
        "�������", "�� �������"
    };
    int statusSize = sizeof(status) / sizeof(status[0]);
    int randomStatusIndex = rand() % statusSize;
    string Status = status[randomStatusIndex];

    double random(double min, double max);

public:
    void SetName(string Name);
    void SetSurname(string Surname);
    void SetPatronymic(string Patronymic);
    void SetBirthDay(int birthDay);
    void SetBirthMonth(int birthMonth);
    void SetBirthYear(int birthYear);
    void SetPhoneNumberStart(string numberStart);
    void SetPhoneNumberEnd(int phoneNumberEnd);
    void SetPasportSerial(string Serial);
    void SetPasportNumber(int pasportNumber);
    void SetIPN(long long int IPN);
    void SetStatus(string Status);

    string GetName() const;
    string GetSurname() const;
    string GetPatronymic() const;
    int GetBirthDay() const;
    int GetBirthMonth() const;
    int GetBirthYear() const;
    string GetPhoneNumberStart() const;
    int GetPhoneNumberEnd() const;
    string GetPasportSerial() const;
    int GetPasportNumber() const;
    long long int GetIPN() const;
    string GetStatus() const;

    bool operator<(const Person& original) const;

    /*Person();
    Person(string Name, string Surname, string Patronymic, string numberStart, int phoneNumberEnd);
    Person(const Person& original);*/

    ~Person();

    void FullName() const;
    void PhoneNumber() const;
    void Print() const;
};



