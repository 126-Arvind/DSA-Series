#include <iostream>
using namespace std;
int main()
{
    // int x , y;
    // cin >> x ;
    // cin >> y ;
    // cout << "Value of x :" << x;
    // cout << "Value of y :" << y;Z

    //    string s1;
    //    string s2;
    // cin>> s1 >> s2;
    // cout<< s1 << "" << s2 << "";

    // char ch;
    // cin>> ch;
    // cout<< ch;

    // if esle consition

    // int age;
    // cin>>age;
    // if(age>20){
    //     cout<< "Hey my age is :" << age;
    // }
    // else if(age ==18){
    //     cout<< "Hey am"<< age <<"years old";
    // }
    // else{
    //     cout<< "sorry but am younger then you";
    // }

    int age;

    cin >> age;
    if (age > 57)
    {
        cout << "retirement time";
    }
    else if (age >= 55 && age<= 57)
    {
        cout << "eligible for job but retirement soon";
    }
    else if (age >=18)
    {
        cout << "eligible for job"; /* code */
    }
    else if (age <18)
    {
        cout << "not eligible for job";
    }

    return 0;
}