class Date{
    private:
        int day;
        int month;
        int year;
    public:
        Date(){};
        Date(int day, int month, int year): year(year), month(month), day(day) {}

        void setDay(int d){
            this->day = d;
        }
        void setMonth(int m){
            this->month = m;
        }
        void setYear(int y){
            this->year = y;
        }
        int getDay(){
            return this->day;
        }
        int getYear(){
            return this->year;
        }
        int getMonth(){
            return this->month;
        }

        
        friend bool operator== (Date &lhs, Date &rhs);
};

bool operator== (Date &lhs, Date &rhs){
    return(lhs.day==rhs.day && lhs.month==rhs.month && lhs.year==rhs.year);
}
