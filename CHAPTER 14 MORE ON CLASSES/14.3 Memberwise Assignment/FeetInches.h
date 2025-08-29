#ifndef FEETINCHES_H
#define FEETINCHES_H

class FeetInches {
    private:
        int feet;
        int inches;

        void simplify();

    public:
        FeetInches();
        FeetInches(int, int);

        void setFeet(const int);
        void setInches(const int);

        FeetInches operator+(FeetInches&);
        FeetInches operator-(FeetInches&);
        FeetInches operator--();
        FeetInches operator--(int);
};

#endif