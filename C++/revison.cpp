// class and objects 


#include<iostream>

using namespace std;

class student 
{
    protected:
    int id;
    string name;
    string city;

    public:
    void get_data()
    {
        cout<<"Enter Id of student:-";
        cin>>id;
        cout<<"Enter Name of any student:-";
        cin>>name;
        cout<<"Enter Any name of City :-";
        cin>>city;
    }
};

class student_data : public  student
{
    public:
    void pri_data()
    {
        cout<<id<<endl;
        cout<<name<<endl;
        cout<<city<<endl;
    }
};
int main()
{
    student_data s;
    s.get_data();
    s.pri_data();
    return 0;
}
