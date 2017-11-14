
#include <iostream>
#include <string>
using namespace std;

    int main(){
    string name;
    double hourlywage;
    int hours;
    int hours2;
    double salary;
    double salary1;
    double salary2;
        cout<<"Enter employee: "<<endl;
        getline(cin,name);
        cout<<"Enter his hourly wage: "<<endl;
        cin>>hourlywage;
        
          if (hourlywage<0){
             cout<<"You can't have negative salary!";
            }
          cout<<"Enter how many hours the employee has worked last week: "<<endl;
          cin>>hours;
              if (hours<=168){
              if (hours <= 36){
                 hours = hours-36;
                 salary=hours*hourlywage;
                 cout<<"Salary of "<<name<<" for the last week is " <<salary;
                  }
              else if (hours>36){
              salary1=36*hourlywage;
              hourlywage = (hourlywage * 140)/100;
              hours2=hours-36;
              salary2=hours2*hourlywage;
              salary=salary1+salary2;
              cout<<"Salary of "<<name<<"  for the last week is "<<salary;
                 }
        else{
        cout<<"Error too many hours";
        }
   }
return 0;
}

