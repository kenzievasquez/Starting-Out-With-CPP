    // pg.887

    #ifndef DATE_H
    #define DATE_H
    #include <iostream>

    const unsigned short MONTHS=12;

    class Date;

    std::ostream& operator<<(std::ostream&, const Date&);
    std::istream& operator>>(std::istream&, Date&);

    class Date {
        private:
            unsigned short month;
            unsigned short day;
            unsigned short year;
            static unsigned short daysMonth[MONTHS];
            void simplify();
            unsigned short dayInMonth();
        public:
            Date();
            Date(unsigned short, unsigned short, unsigned short);
            
            Date operator++();    // prefix
            Date operator++(int); // postfix
            Date operator--();    // prefix
            Date operator--(int);    // postfix
            Date operator-(Date&);

            friend std::ostream& operator<<(std::ostream&, const Date&);
            friend std::istream& operator>>(std::istream&, Date&);

            void setDate(unsigned short, unsigned short, unsigned short); //set date: (day, month, year)
            void printForm1();
            void printForm2();
            void printForm3();
    };

    #endif