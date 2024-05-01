#include "Person.h"

double Person::random(double min, double max)
{
    return (double)(rand()) / RAND_MAX * (max - min) + min;
}

void Person::SetName(string Name) {
    this->Name = Name;
}

void Person::SetSurname(string Surname) {
    this->Surname = Surname;
}

void Person::SetPatronymic(string Patronymic) {
    this->Patronymic = Patronymic;
}

void Person::SetBirthDay(int birthDay) {
    this->birthDay = birthDay;
}

void Person::SetBirthMonth(int birthMonth) {
    this->birthMonth = birthMonth;
}

void Person::SetBirthYear(int birthYear) {
    this->birthYear = birthYear;
}

void Person::SetPhoneNumberStart(string numberStart) {
    this->numberStart = numberStart;
}

void Person::SetPhoneNumberEnd(int phoneNumberEnd) {
    this->phoneNumberEnd = phoneNumberEnd;
}

void Person::SetPasportSerial(string Serial) {
    this->Serial = Serial;
}

void Person::SetPasportNumber(int pasportNumber) {
    this->pasportNumber = pasportNumber;
}

void Person::SetIPN(long long int IPN) {
    this->IPN = IPN;
}

void Person::SetStatus(string Status) {
    this->Status = Status;
}

string Person::GetName() const {
    return Name;
}

string Person::GetSurname() const {
    return Surname;
}

string Person::GetPatronymic() const {
    return Patronymic;
}

int Person::GetBirthDay() const {
    return birthDay;
}

int Person::GetBirthMonth() const {
    return birthMonth;
}

int Person::GetBirthYear() const {
    return birthYear;
}

string Person::GetPhoneNumberStart() const {
    return numberStart;
}

int Person::GetPhoneNumberEnd() const {
    return phoneNumberEnd;
}

string Person::GetPasportSerial() const {
    return Serial;
}

int Person::GetPasportNumber() const {
    return pasportNumber;
}

long long int Person::GetIPN() const {
    return IPN;
}

string Person::GetStatus() const {
    return Status;
}

/*Person::Person() : Person("Иван", "Иванов", "Иванович", "068", 1234567) {}
Person::Person(string Name, string Surname, string Patronymic, string numberStart, int phoneNumberEnd) {
    SetName(Name);
    SetSurname(Surname);
    SetPatronymic(Patronymic);
    SetPhoneNumberStart(numberStart);
    SetPhoneNumberEnd(phoneNumberEnd);
}

Person::Person(const Person& original) : Person("Иван", "Иванов", "Иванович", "068", 1234567) {
    this->Name = original.Name;
    this->Surname = original.Surname;
    this->Patronymic = original.Patronymic;
    this->birthDay = original.birthDay;
    this->birthMonth = original.birthMonth;
    this->birthYear = original.birthYear;
    this->numberStart = original.numberStart;
    this->phoneNumberEnd = original.phoneNumberEnd;
    this->Serial = original.Serial;
    this->pasportNumber = original.pasportNumber;
    this->IPN = original.IPN;
    this->Status = original.Status;
}*/

Person::~Person() {}

bool Person::operator<(const Person& original) const {
    return Name < original.Name;
}

void Person::FullName() const {
    cout << Name << " " << Patronymic << " " << Surname << "\n";
}

void Person::PhoneNumber() const {
    cout << numberStart << phoneNumberEnd << "\n";
}

void Person::Print() const {
    cout << "===============================================================\n";
    cout << "Имя:\t\t\t\t" << GetName() << " " << GetPatronymic() << " " << GetSurname() << "\n";
    cout << "Дата рождения:\t\t\t" << GetBirthDay() << "." << GetBirthMonth() << "." << GetBirthYear() << "\n";
    cout << "Номер телефона:\t\t\t" << GetPhoneNumberStart() << GetPhoneNumberEnd() << "\n";
    cout << "Серия и номер паспорта:\t\t" << GetPasportSerial() << GetPasportNumber() << "\n";
    cout << "Идентификационный номер: \t" << GetIPN() << "\n";
    cout << "Статус:\t\t\t\t" << GetStatus() << "\n";
    cout << "===============================================================\n";
}

