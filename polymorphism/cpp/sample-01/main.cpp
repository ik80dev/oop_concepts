#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class CShape {
    public:
        virtual void draw() = 0;
};
typedef shared_ptr<CShape *> CShapeRef;

class CRectangle: CShape {
    public:
        CRectangle() {
            //cout << __FUNCTION__ << endl;
        }
        void draw() override{
            cout << "Drawing Rectangle" << endl;
        }
        ~CRectangle(){
            //cout << __FUNCTION__ << endl;
        }
};

class CCircle: CShape {
    public:
        void draw() override{
            cout << "Drawing Circle" << endl;
        }
};

class CTriangle: CShape {
    public:
        void draw() override{
            cout << "Drawing Triangle" << endl;
        }
};

class CSquare: CShape {
    public:
        void draw() override{
            cout << "Drawing Square" << endl;
        }
};



int main() {
    //vector<shared_ptr<CRectangle>> shapes; 
    shared_ptr<CRectangle> sp1 = make_shared<CRectangle>(new CRectangle());
    sp1->draw();

    // shapes.push_back(make_shared(CRectangle()));

    

    // vector<CShapeRef>::iterator iter = shapes.begin();
    // int offset = 0;
    // while(iter != shapes.end()){
    //     //(*iter)->draw();
    //     iter++;
    //     cout << "Element: " << offset ++ << endl;
    // }


    return 0;
}