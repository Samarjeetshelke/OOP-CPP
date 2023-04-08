#include<iostream>

using namespace std;

class Imperials{
    float inch;
    float feet;

    public:
        Imperials(){
            inch=0;
            feet=0;
        }

        Imperials(float a){
            inch =a;
        }

        Imperials(float a,float b){
            inch=a;
            feet=b;
        }

        void operator<<(Imperials im){//overloaded operator for 
             cout<<"\nThe Length in feet: "<<im.feet<<"ft\nand In Inch: "<<im.inch<<"ich";
        }

        void getdata(){
            cout<<"\nEnter the Length in Feet: ";
            cin>>feet;
            cout<<"\nEnter the Length in Inch: ";
            cin>>inch;
        }

        void convertInchToFeet(){
            //feet=inch/12;
            cout<<"\nThe converted Inch to Feet is: "<<(inch/12)<<"ft";
        }

        void convertFeetToInch(){
            //inch=feet*12;
             cout<<"\nThe converted Feet To inch is: "<<(feet*12)<<"ich";
        }

        void convertToMetric(Imperials i){
            cout<<"\nThe "<<i.inch<<" Inches in Meter is: "<<(i.inch/39.37)<<"m & in centimeter is : "<<(i.inch*2.54)<<"cm";
            cout<<"\nThe "<<i.feet<<" feet in Meter is: "<<(i.feet/3.281)<<"in Centimeter is: "<<(i.feet*30.48)<<"cm";
        }

};


class Metric
{   
    float meter;
    float centimeter;
    public:
        Metric(){
            meter=centimeter=0;
        }

        Metric(float a,float b){
            meter=a;
            centimeter=b;
        }

        void getdata(){
            cout<<"\nEnter the lenght in Meter: ";
            cin>>meter;
            cout<<"\nEnter the lenght in Centimeter: ";
            cin>>centimeter;
        }

        void operator<<(Metric m){
            cout<<"\nThe Length in Meter: "<<m.meter<<"m\nand In Centimeter: "<<m.centimeter<<"cm";
        }

        void convertToCenti(){
            cout<<"\nThe Meter "<<meter<<" in centimeter is: "<<(meter*100)<<"cm";
        }

        void convertToMeter(){
            cout<<"\nThe Centimeter "<<centimeter<<" in Meter is: "<<(centimeter/100)<<"m";
        }

        void convertToImperial(Metric m){//convert Metric to Imperial
            cout<<"\nThe "<<m.meter<<" in inches is: "<<(39.37*m.meter)<<"ich & in feet is: "<<(m.meter* 3.281)<<"ft";
            cout<<"\nThe "<<m.centimeter<<" in inches is: "<<(m.centimeter/ 2.54)<<"ich & in feet is: "<<(m.centimeter/30.48)<<"ft";
        }

};

int main(int argc, char const *argv[])
{
    Imperials obj(24,12);//24 inches
    obj<<obj;
    obj.convertFeetToInch();
    obj.convertInchToFeet();
    obj.convertToMetric(obj);

   Metric obj1(12,100);
   obj1<<obj1;
   obj1.convertToCenti();
   obj1.convertToMeter();
    obj1.convertToImperial(obj1);//convert Metric to Imperial
    return 0;
}
