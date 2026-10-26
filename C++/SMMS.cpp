/* 
    Student Marks Management System 
        Task: Create a C program to manage marks of students. 
        Requirements: 
        1. Accept the names and marks of 5 students.  
        2. Store marks using an array.  
        3. Create a user-defined function to calculate the average marks.  
        4. Create a struct Student containing:  
            Roll No  
            Name  
            Marks  
        5. Display all student details.  
        6. Store student details in a file named students.txt.  
        7. Read the data from the file and display it.  
        Concepts: Array + Function + Structure + File Handling 
*/

#include<iostream>
using namespace std;

int noffs; // Number of Students

struct student 
{
    int roll_no;
    string name;
    float marks;
} st[5];

int main()
{
    cout<<"=========================================="<<endl;
    cout<<"How many students do you wanna add?:-";
    cin>>noffs;
    cout<<"=========================================="<<endl;

    for (int i=0;i<noffs;i++)
    {
        cout<<"Enter Roll number of student "<<i+1<<":-";
        cin>>st[i].roll_no;

        cout<<"Enter Name of student "<<i+1<<":-";
        cin>>st[i].name;

        cout<<"Enter Marks of student "<<i+1<<":-";
        cin>>st[i].marks;
        cout<<"---------------------------------"<<endl;
    }

    cout<<"    Details of Students    "<<endl;
    cout<<"---------------------------------"<<endl;

    for(int i=0;i<noffs;i++)
    {   
        cout<<"---------------------------------"<<endl;
        cout<<"Student's Name:-        "<<st[i].name<<endl;
        cout<<"Student's Roll_Number:- "<<st[i].roll_no<<endl;
        cout<<"Student's Marks:-       "<<st[i].marks<<endl;
        cout<<"---------------------------------"<<endl;
    }
    return 0;
}