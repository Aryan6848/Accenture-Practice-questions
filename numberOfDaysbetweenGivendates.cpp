#include<iostream>
using namespace std;

struct date{
    int d,m,y;
};

int countLeapyear(date date1){
    
    int years=date1.y;
    if(date1.m<=2){
        years--;
    }

    return years/4-years/100+years/400;


}

const int monthDays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

int getDifference(date date1, date date2){
    int n1 = date1.y *365 + date1.d;

    for(int i=0; i<date1.m-1;i++){
        n1+= monthDays[i];
    }

    n1+= countLeapyear(date1);
    
    int n2 = date2.y*365 + date2.d;

    for(int i=0; i<date2.m -1; i++){
       n2+= monthDays[i];
    }

    n2 += countLeapyear(date2);

    return n2-n1;

}


int main(){
    date date1 = {1,1,2024};
    date date2 = {29,2,2024}; 

    cout<<"difference between two dates is "<< getDifference(date1,date2);
}