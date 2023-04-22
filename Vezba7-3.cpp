#include <iostream>
using namespace std;

//Definiranje na klasa Shape
class Shape {
protected:
    float width, height;
public:
    void setDimensions(float w, float h) {
        cout << "Dimenziite se: " << w << " i " << h << endl;
        width = w;
        height = h;
    }
};

// Definiranje na klasa Rectangle
class Rectangle: public Shape {
public:
    float area() {
        return (width * height);
    }
};

// Definiranje na klasa Triangle
class Triangle: public Shape {
public:
    float area() {
        return (width * height / 2);
    }
};

int main() {
    cout << "===== Programa za demonstracija na nasleduvanje vo c++ =====\n\n";
    
    // Kreiranje na objektite za Rectangle i Triangle
    Rectangle rectangle;
    Triangle triangle;

    // Postavuvanje na dimenziite za Rectangle i Triangle
    rectangle.setDimensions(10, 35);
    triangle.setDimensions(103, 5);

    // Presmetuvanje na povrsinite Rectangle i Triangle
    float rectangleArea = rectangle.area();
    float triangleArea = triangle.area();

    // Pecatenje na povrsinite Rectangle i Triangle
    cout << "\nPlostinata na pravoagolnikot presmetana so koristenje na klasata Rectangle e: " << rectangleArea << endl;
    cout << "Plostinata na triagolnikot presmetana so koristenje na klasata Triangle e: " << triangleArea << endl;

    return 0;
}