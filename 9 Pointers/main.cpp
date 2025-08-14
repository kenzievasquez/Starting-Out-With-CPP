#include <iostream>
#include <string>

class Character
{
    public:
        using Action = void (Character::*)();
        Character(std::string _name) : name(_name), currentAction(&Character::idle) {}


        void setAction(Action action) {
            currentAction = action;
        }

        void performAction() {
            (this->*currentAction)();
        }
    
    private:
        std::string name;
        Action currentAction;

        void idle() {
            std::cout << name << " is standing still!\n";
        }

        void walk() {
            std::cout << name << " is standing walking!\n";
        }

        void attack() {
            std::cout << name << " swings their sword!\n";
        }

    public:
        static Action IdleAction;
        static Action WalkAction;
        static Action AttackAction;
};

Character::Action Character::IdleAction = &Character::idle;
Character::Action Character::WalkAction = &Character::walk;
Character::Action Character::AttackAction = &Character::attack;

int main()
{
    Character hero("Feanor");
    hero.performAction();

    hero.setAction(Character::WalkAction);
    hero.performAction();

    hero.setAction(Character::AttackAction);
    hero.performAction();

    hero.setAction(Character::IdleAction);
    hero.performAction();

    std::cin.get();
    return 0;
}