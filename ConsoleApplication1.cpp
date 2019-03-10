#include "pch.h"
#include <iostream>
#include <cstring>
#include <string>


using namespace std;

struct dateOfBirth
{
	string day;
	string month;
	string year;
};

struct work 
{
	string surname;
	string name;
	string patronymic;
	string position;
	int salary;
	dateOfBirth date;
};


int main()
{
	 setlocale(LC_ALL, "Russian");


	 work worker[5];
	 worker[0] = { "Тыдень","Денис","Васильевич","Старший ландшафт-дизайнер",150000,"15","10","1991" };
	 worker[1] = { "Нигрецкая","Светлана","Сергеевна","PR-менеджер",45000,"02","05","1985" };
	 worker[2] = { "Стеценко","Игорь","Владимирович","Лесозаготовщик",1000000,"18","05","1901" };
	 worker[3] = { "Бихневич","Константин","Понтилимонович","Футболист",5000,"04","12","2000" };
	 worker[4] = { "Тепляков","Андрей","Александрович","Рем.Мастер",18500,"13","05","1983" };


	 for (int i = 0; i < 5; i++)
		 if (worker[i].date.month == "05")	 
			 std::cout << worker[i].surname << " " << worker[i].name << " " << worker[i].patronymic << std::endl << "Должность: " << worker[i].position << std::endl << "Зарплата: " << worker[i].salary << std::endl << "Дата рождения: " << worker[i].date.day << "." << worker[i].date.month << "." << worker[i].date.year << std::endl << "---------------------" << std::endl;
			 

	
}

