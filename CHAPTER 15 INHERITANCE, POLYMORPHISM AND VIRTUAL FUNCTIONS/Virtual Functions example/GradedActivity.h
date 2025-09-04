#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H

class GradedActivity {
    protected:
    char letter;
    double score;
    void determineGrade();

    public:
    GradedActivity() : letter(' '), score(0.0f) {}
    GradedActivity(float s) : score(s) {}
    
    void setScore(float s) { score = s; }
    float getScore() const { return score; }

    virtual char getLetterGrade() const { return letter; }
};

#endif