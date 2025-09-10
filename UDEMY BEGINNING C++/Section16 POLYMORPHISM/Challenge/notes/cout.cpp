
// if you want something to be able to be put on cout (or any std::ostream like std::cerr) directly
struct SomeThing {
    // stuff
    friend std::ostream &operator<<(std::ostream &os, const SomeThing &value);
    // stuff
};

std::ostream &operator<<(std::ostream &os, const SomeThing &value) {
    // stuff
    return os;
}
