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
};