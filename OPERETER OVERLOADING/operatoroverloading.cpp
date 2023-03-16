#include<iostream>
#include<string>

using namespace std;

class stringcls{
    string text;

    public:
        stringcls(string s){
            this->text=s;
        }

        void disp(){
            cout<<"\nData: "<<this->text;
        }

        void operator<<(string s){//overload << to add string to last
            this->text=this->text + s;
        }

        void operator>>(string s){
            this->text=s + this->text ;
        }
};

int main(int argc, char const *argv[])
{
    stringcls obj("samarjeet");
    obj.disp();
    obj<<" shelke";
    obj.disp();
    obj>>"suresh ";
    obj.disp();




    return 0;
}
