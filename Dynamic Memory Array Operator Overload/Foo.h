#ifndef FOO_H
#define FOO_H

class Foo {
    private:
    int size;
    int* arr;

    public:
        Foo(int);
        Foo(const Foo&);
        ~Foo();

        const Foo operator=(const Foo&);

        int getSize();
        void fill();
        void printArr();
};

#endif