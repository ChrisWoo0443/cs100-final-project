#ifndef DATE_H
#define DATE_H

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date();
    Date(int day, int month, int year);

    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);
    int getDay();
    int getYear();
    int getMonth();

    friend bool operator==(const Date& lhs, const Date& rhs);
};

#endif // DATE_H