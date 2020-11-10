#include<iostream>
#include<math.h>

using namespace std;


int main(){

    int basic;
    char  grade;
    int GP;


    cin>>basic;
    cin>>grade;


  if( grade == "A"){

       GP=1700;

  }
  else if(grade  =="B"){

       GP=1500;
      
  }
  else{

      GP=1700;
      
  }

  int hra= (20/100)*basic;
  int da = (50/100)*basic;
  int pf= (11/100)*basic;



  int salary= (basic + hra + da + GP - pf);


  cout<<salary;

}
