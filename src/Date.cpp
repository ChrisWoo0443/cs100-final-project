#include "../header/Date.hpp"

Date::Date() {}

Date::Date(int day, int month, int year) : year(year), month(month), day(day) {}

void Date::setDay(int d) {
    this->day = d;
}

void Date::setMonth(int m) {
    this->month = m;
}

void Date::setYear(int y) {
    this->year = y;
}

int Date::getDay() {
    return this->day;
}

int Date::getYear() {
    return this->year;
}

int Date::getMonth() {
    return this->month;
}

bool operator==(const Date& lhs, const Date& rhs) {
    return (lhs.day == rhs.day && lhs.month == rhs.month && lhs.year == rhs.year);
}