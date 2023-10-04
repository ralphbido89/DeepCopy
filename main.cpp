#include <iostream>

using namespace std;

class Deep {
    private:
        int *data;

    public:
        void set_data_value(int d) { *data = d; }
        int get_data_value() { return *data; }
        //CONSTRUCTOR
        Deep(int d);
        //COPY
        Deep(const Deep &source);
        //DESTRUCTOR
        ~Deep();
};

Deep::Deep(int d) {
    data = new int;
    *data = d;
}

Deep::Deep(const Deep &source)
    : Deep {*source.data} {
        cout << "Copy contructor - deep copy" << endl;
    }


void display_deep(Deep s) {
    cout << s.get_data_value() << endl;
}


// x is an l-value
//l_ref is an l-reference
int x {100}; 
int &l_ref = x;
// l_ref = 10;

int y {10};
void func(int &&num);

int global = 100;
int& setGlobal() 
{
    return global;
}


int main() {
    Deep object1 {100};
    display_deep(object1);
    func(100);

    int y {10};
    int& y_ref = y;
    y_ref++;
    // y ref is 11

    
}