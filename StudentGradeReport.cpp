#include <iostream>
using namespace std;

int main()
{
    string name;
    int roll_no,m1,m2,m3,total;
    float percentage;
    string grade;

    cout<<"Please the information accurately."<<endl;
    cout<<"Enter your name: ";
    getline(cin,name);

    cout<<"Enter your rollno: ";
    cin>>roll_no;

    cout<<"Enter your Computer Network Marks: ";
    cin>>m1;

    cout<<"Enter your Operating System Marks: ";
    cin>>m2;

    cout<<"Enter your Numerical Analysis with C++ Marks: ";
    cin>>m3;

    total=m1+m2+m3;
    percentage=total/3.0;

    cout<<endl<<"\t\t\t\t---Student Report--- ";
    cout<<endl<<endl;

    if (percentage>=90)
    {
        grade="O";
    }
    else if (percentage>=80)
    {
        grade="A+";
    }
    else if (percentage>=70)
    {
        grade="A";
    }
    else if (percentage>=60)
    {
        grade="B";
    }
    else if(percentage>=50)
    {
        grade="C";
    }
    else if(percentage>=35)
    {
        grade="D";
    }
    else 
    {
        grade="E";
    }
cout<<"\tName of Student "<<"\t\t\t"<<name<<"\n\tRoll.No of Student"<<"\t\t\t"<<roll_no<<"\n\tComputer Network Marks"<<"\t\t\t"<<m1<<"\n\tOperating System Marks"<<"\t\t\t"<<m2<<"\n\tNumerical Analysis with C++ Marks"<<"\t"<<m3;
cout<<"\n\tTotal"<<"\t\t\t\t\t"<<total<<"\n\tPercentage"<<"\t\t\t\t"<<percentage<<"\n\tGrade"<<"\t\t\t\t\t"<<grade;

return 0;
}
