#pragma once
#include <iostream>
#include <string>
using namespace std;
class Person {
    string names[32] = {
        "Александр", "Алексей", "Андрей", "Артем", "Валентин",
        "Валерий", "Василий", "Виктор", "Владимир", "Владислав",
        "Георгий", "Григорий", "Даниил", "Денис", "Дмитрий", "Евгений", "Иван",
        "Игорь", "Илья", "Кирилл", "Максим", "Юрий",
         "Михаил", "Никита", "Николай", "Олег", "Федор",
        "Павел", "Роман", "Руслан", "Сергей", "Станислав",

    };
    int namesSize = sizeof(names) / sizeof(names[0]);
    int randomNameIndex = rand() % namesSize;
    string Name = names[randomNameIndex];

    string surnames[85]{
        "Колесник", "Федоренко", "Тихонов", "Грицай", "Онищенко",
        "Жуков", "Гордеев", "Мельник", "Гусев", "Баранов",
        "Суханов", "Родионов", "Кузьменко", "Дубенко", "Шаповаленко",
        "Тимофеев", "Горбунов", "Богатырев", "Трофимов","Павленко",
        "Беляев", "Пархоменко", "Костенко", "Тарасов", "Гончаренко",
        "Шевель", "Барсуков", "Богданенко", "Поляков", "Белов",
        "Сергеев", "Гаврилов", "Мартынов", "Лисенко", "Зуев",
        "Краснов", "Марков", "Жуковський", "Григорьев", "Ткаченко",
        "Максимов", "Филиппов", "Григоренко", "Морозенко", "Зубенко",
        "Рябенко", "Приходько", "Лазарев", "Комаренко", "Соломон",
        "Сидоренко", "Фоменко", "Зайцев", "Лукъянченко", "Лукъяненко",
        "Шевцов", "Даниленко", "Михайленко", "Мельниченко", "Сорокин",
        "Романов", "Жуков", "Зубенко", "Карпенко", "Куликенко",
        "Корниенко", "Потапов", "Бондаренко", "Кривенко", "Мартиненко",
        "Савченко", "Павлюченко", "Петренко", "Дементьев", "Савельев",
        "Козлов", "Шаповаленко", "Гончаренко", "Горбунов", "Кононов",
        "Морозенко", "Соломон", "Сидоренко", "Тарасенко", "Семененко"
    };
    int surnamesSize = sizeof(surnames) / sizeof(surnames[0]);
    int randomSurnameIndex = rand() % surnamesSize;
    string Surname = surnames[randomSurnameIndex];

    string patronymics[65]{
        "Иванович", "Петрович", "Александрович", "Николаевич", "Сергеевич",
        "Михайлович", "Владимирович", "Андреевич", "Алексеевич", "Дмитриевич",
        "Борисович", "Егорович", "Артемович", "Максимович", "Аркадьевич",
        "Григорьевич", "Анатольевич", "Тимофеевич", "Станиславович", "Игоревич",
        "Федорович", "Денисович", "Ярославович", "Кириллович", "Викторович",
        "Павлович", "Васильевич", "Матвеевич", "Филиппович", "Валентинович",
        "Романович", "Георгиевич", "Никитич", "Валерьевич", "Вячеславович",
        "Олегович", "Евгеньевич", "Леонидович", "Семенович", "Витальевич",
        "Святославович", "Богданович", "Владиславович", "Валериевич", "Артурович",
        "Львович", "Ильич", "Андреевич", "Глебович", "Альбертович",
        "Тарасович", "Савельевич", "Святославович", "Сергеевич", "Львович",
        "Платонович", "Валерьевич", "Антонович", "Васильевич", "Аркадиевич",
        "Николаевич", "Михайлович", "Павлович", "Иванович", "Александрович"
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
        "АА", "АБ", "АВ", "АГ", "АД", "АЕ", "ПП", "ПЖ", "ПЗ", "ПИ",
        "БА", "ББ", "БВ", "БГ", "БД", "БЕ", "ЖА", "ЖБ", "ЖВ", "ЖГ",
        "ВА", "ВБ", "ВВ", "ВГ", "ВД", "ВЕ", "ЗА", "ЗБ", "ЗВ", "ЗГ",
        "ГА", "ГБ", "ГВ", "ГГ", "ГД", "ГЕ", "ИА", "ИБ", "ИВ", "ИГ",
        "ДА", "ДБ", "ДВ", "ДГ", "ДД", "ДЕ", "ЙА", "ЙБ", "ЙВ", "ЙГ",
        "ЕА", "ЕБ", "ЕВ", "ЕГ", "ЕД", "ЕЕ", "КА", "КБ", "КВ", "КГ",
        "РА", "РБ", "РВ", "РГ", "РД", "РЕ", "ЛА", "ЛБ", "ЛВ", "ЛГ",
        "ЖД", "ЖЕ", "ЖТ", "ЖЖ", "ЖЗ", "ЖИ", "МА", "МБ", "МВ", "МГ",
        "ЗД", "ЗЕ", "ЗТ", "ЗЖ", "ЗЗ", "ЗИ", "НА", "НБ", "НВ", "НГ",
        "ИД", "ИЕ", "ИТ", "ИЖ", "ИЗ", "ИИ", "ОА", "ОБ", "ОВ", "ОГ"
    };
    int pasportSerialSize = sizeof(pasportSerial) / sizeof(pasportSerial[0]);
    int randomSerialIndex = rand() % pasportSerialSize;
    string Serial = pasportSerial[randomSerialIndex];
    double pasportNumber = random(100000, 999999);

    long long int IPN = random(1000000000, 9999999999);

    string status[2]{
        "Ухилянт", "Не ухилянт"
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



