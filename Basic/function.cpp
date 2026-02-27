#include <iostream>
using namespace std;

// void print(string name, string surname){
//    cout<< "Hii" << name << surname;
//}
//int main(){
//    string name, surname;
//    cin >> name >> surname;
//  print(name, surname);
//    return 0;
//}

//int sum(int num1 , int num2){
//    int num3 = num1+ num2;
//    return num3;

//}

//int main(){
// int num1 ,num2;
// cin >> num1 >> num2;
// int res = sum( num1, num2);
// cout << "sum " << res;
//}

// call by value 

//void dosomething( int num){
//    cout << num << endl;
//    num +=5;
//    cout<< num << endl;
//    num +=5;
//    cout << num << endl;
//}

//int main(){
//int  num = 10;
//dosomething(num);
//cout << num << endl;
//}




// pass by refrence


//void dosomething( int &num){
//    cout << num << endl;
//    num +=5;
//    cout<< num << endl;
//    num +=5;
//    cout << num << endl;
//}

//int main(){
//int  num = 10;
//dosomething(num);
//cout << num << endl;
//}



// array by default pass by reference no need to define       ................  & ....... symbol to call refrence

void dosomething(int arr[], int p){
    arr[0] += 5;
    cout<< "value inside function: " << arr[0] << endl;
}
int main(){
   const int p = 5;
   int arr[p];
   for(int i = 0; i<p; i=i+1){
    cin >> arr[1];
   }
   dosomething( arr, p);
   cout << "value inside int main: "<< arr[0] << endl;

}