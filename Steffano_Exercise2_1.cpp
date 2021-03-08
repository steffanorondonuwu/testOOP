#include <iostream>
#include <conio.h>
using namespace std;
class employee{
 private:
  int emp_num;
  float emp_comp;
 public:
  void entData(){
   cout << "Masukkan employee\'s Number ";
   cin >> emp_num;
   cout << "Masukkan employee\'s Salary " ;
   cin >> emp_comp;
  }
  void display(){
   cout << "employee\'s Number " << emp_num << endl;
   cout << "enployee\'s Salary " << emp_comp << endl;
  }
};
int main(){
 employee emp1, emp2, emp3;
 cout << "Masukkan Data For employee 1" << endl;
 emp1.entData();
 cout << "Masukkan Data For employee 2" << endl;
 emp2.entData();
 cout << "Masukkan Data For employee 3" << endl;
 emp3.entData();
 cout << "Total Data Entered Is" << endl;
 emp1.display();
 emp2.display();
 emp3.display();
}