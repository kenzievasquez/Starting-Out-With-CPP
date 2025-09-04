#ifndef PASSFAILACTIVITY_H
#define PASSFAILACTIVITY_H
#include "GradedActivity.h"

class PassFailActivity : public GradedActivity {
    protected:
    float minPassingScore;

    public:
    PassFailActivity() : GradedActivity(), minPassingScore(0.0f) {}
    PassFailActivity(float mps) : GradedActivity(), minPassingScore(mps) {}

    void setMinPassingScore(float mps) { minPassingScore = mps; }
    float getMinPassingScore() const { return minPassingScore; }

    virtual char getLetterGrade() const {
        char letterGrade;

        if (score >= minPassingScore) letterGrade = 'P';
        else letterGrade = 'F';
        
        return letterGrade;
    }
};

#endif