//Name:Reign Sumague
//Activity no. OE3
//Description: Gross pay, tax rate, and net pay are calculated using this salary scheme.
//Date:September 24, 2021

#include <iostream>
#include<string>

using namespace std;

int main(){

   string em_name;
   int nhw, em_id;
   double rph, gp, tr, np;

   cout<< "Enter Employee Name :";
   getline(cin,em_name);

   cout<< "Enter Employee ID :";
   cin>> em_id;

   cout<< "Enter hours worked :";
   cin>> nhw;

   cout<< "Enter rate per hour :";
   cin>> rph;

   gp = rph * nhw;

   if(gp > 40000){
      tr = gp * 0.12;
   }else if(gp < 20000){
      tr = gp * 0.05;
   }else if(gp < 40000){
      tr = gp * 0.10;
   }

   np = gp - tr;

   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   cout<<"\n-----------------------------------------------" <<endl;

   cout<< "Employee Name     :" << em_name <<endl;
   cout<< "Employee ID       :" << em_id <<endl;
   cout<< "Gross Pay         :" << gp <<endl;

   cout<< "\nTax rate          :" << tr <<endl;
   cout<< "\nNet pay           :" << np <<endl;


   return 0;
}
