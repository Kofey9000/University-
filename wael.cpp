/*
Wael Ahmed Babiker Alkofey
Computer Engineering
Secand Class
*/
#include <iostream>
#include <string>
using namespace std;

class Shape //الكلاس الاب (مجرد)
{
protected:
    int width;
    int height;
    int radius;
    float pi = 3.14;

public:
    void set_Width() //إدخال القيمة ال width
    {
        cout << "Width = ";
        cin >> width;
    }

    void set_Height() //دالة ادخال قيم height
    {
        cout << "Height = ";
        cin >> height;
    }

    void set_Radius() //دالة ادخال قيم  الridious
    {
        cout << "Radius = ";
        cin >> radius;
    }

    virtual int area(void) = 0; //الداله

    void printArea(void) //print the inheritance class
    {
        cout << this->area() << endl;
    }

    virtual int circumference(void) = 0; //الدالة

    void printCircumference(void) //print the inheritance class
    {
        cout << this->circumference() << endl;
    }
};

class Polygon : public Shape // the polygon inheriting from the Shape class
{
public:
    int area() //لإيجاد المساحه
    {
        cout << "\nThe Polygon's Area = ";
        return (radius * height * width);
    }
    int circumference() //دالة لإيجاد المحيط
    {
        cout << "The Polygon's Circumference = ";
        return (width * height);
    }
};

class Triangle : public Polygon //inheriting from polygon
{
    int area() //لإيجاد مساحة المثلث
    {
        cout << "\nThe Triangle's Area = ";
        return (width * height / 2);
    }
    int circumference() //دالة لإيجاد محيط المثلث
    {
        cout << "The Triangle's Circumference = ";
        return (width + height * 2);
    }
};

class Rectangle : public Polygon //inheriting from public polygon
{
    int area() //لإيجاد مساحة المستطيل
    {
        cout << "\nThe Rectangle's Area = ";
        return (width * height);
    }
    int circumference() //لإيجاد محيط المستطيل
    {
        cout << "The Rectangle's Circumference = ";
        return (2 * (height * width));
    }
};
class Square : public Polygon //inheriting
{
    int area() //لإيجاد مساحةالمربع''''
    {
        cout << "\nThe Square's Area = ";
        return (height * height);
    }
    int circumference() //لإيجاد محيط المربع
    {
        cout << "The Square's Circumference = ";
        return (4 * height);
    }
};

class Ellipse : public Shape //inheriting from public shape
{
public:
    int area() //دالة لإيجاد مساحة ellipse
    {
        cout << "\nThe Ellipse's Area = ";
        return (pi * width * height);
    }
    int circumference() //دالة لإيجاد محيط ellipse
    {
        cout << "The Ellipse's Circumference = ";
        return (pi * (radius * radius));
    }
};
class Circle : public Ellipse //inverting from public ellipse
{
public:
    int area() //دالة لإيجاد مساحة الدائرة
    {
        cout << "\nThe Circle's Area = ";
        return (pi / 4 * (radius * radius));
    }
    int circumference() //دالة لإيجاد محيط الدائره
    {
        cout << "The Circle's Circumference = ";
        return (pi * radius);
    }
};
int main() //main function
{
    Polygon polygon;                //object1
    Triangle triangle;              //object2
    Rectangle rectangle;            //object3
    Square square;                  //object4
    Ellipse ellipse;                //object5
    Circle circle;                  //objects6
    Shape *pointer1 = &polygon;     //getting pointer1 from father class and connecting with polygon
    Shape *pointer2 = &ellipse;     //getting the pointer2 from shape and connecting it with ellipse
    Polygon *pointer3 = &triangle;  //getting the pointer3 from polygon and connecting it with Triangle
    Polygon *pointer4 = &rectangle; //getting the pointer4 from polygon  and connecting it with the Rectangle
    Polygon *pointer5 = &square;    //getting the pointer5 from polygon  and connecting it with the Square
    Ellipse *pointer6 = &circle;    //getting the pointer6  from the Ellipse and connecting it with the Circle

    cout << "<=======find area  & Circumference of Shape=======/n" ; cout << "; //face-off programme;";

    cout << "\nEnter The Value of Polygon's Width , Height and Radius:\n"; //inter and print the values of polygon
    pointer1->set_Width();
    pointer1->set_Height();
    pointer1->set_Radius();
    pointer1->printArea();
    pointer1->printCircumference();

    cout << "\nEnter The Value of Ellipse's Width , Height and Radius:\n";
    pointer2->set_Width();
    pointer2->set_Height();
    pointer2->set_Radius();
    pointer2->printArea();
    pointer2->printCircumference();

    cout << "\n Enter The Value of Triangle's Width and Height:\n"; //inter and print the values of Triangle
    pointer3->set_Width();
    pointer3->set_Height();
    pointer3->printArea();
    pointer3->printCircumference();

    cout << "\n Enter The Value of Rectangle's Width and Height:\n"; //inter and print the values of Rectangle
    pointer4->set_Width();
    pointer4->set_Height();
    pointer4->printArea();
    pointer4->printCircumference();

    cout << "\nEnter The Value of Square's Height:\n"; //inter the values of Square and print it
    pointer5->set_Height();
    pointer5->printArea();
    pointer5->printCircumference();

    cout << "\nEnter The Value of Circle's Radius:\n"; //inter the values of circles and print it
    pointer6->set_Radius();
    pointer6->printArea();
    pointer6->printCircumference();

    cout << "\n<=======the final results======>\n"; //print the final results of all shapes

    //print the result of polygon
    cout << "POLYGON :";
    pointer1->printArea();
    pointer1->printCircumference();

    //print the results of ellipse
    cout << "\nELLIPSE :";
    pointer2->printArea();
    pointer2->printCircumference();

    //print the values of Triangle
    cout << "\nTRIANGLE :";
    pointer3->printArea();
    pointer3->printCircumference();

    //print the values of Rectangle
    cout << "\nRECTANGLE :";
    pointer4->printArea();
    pointer4->printCircumference();

    //print the values of Square
    cout << "\nSQUARE :";
    pointer5->printArea();
    pointer5->printCircumference();

    //print the values of circle
    cout << "\nCIRCLE :";
    pointer6->printArea();
    pointer6->printCircumference();
}