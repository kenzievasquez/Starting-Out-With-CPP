#ifndef HEMP_H
#define HEMP_H
#include <iostream>
#include <string>

class Hemp {
    private:
    std::string strain;
    float cbdContent; // CBD content percentage

    public:
    Hemp();
    Hemp(std::string s, float cbd);
    virtual ~Hemp();

    void setStrainName(std::string s);
    void setCBDContent(float cbd);

    std::string getStrainName() const;
    float getCBDContent() const;

    friend std::ostream& operator<<(std::ostream &COUT, const Hemp &c);
};

#endif