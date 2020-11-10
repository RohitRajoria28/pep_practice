#include<iostream>
using namespace std;
int main(int args,char** argv){
    long n;
    cin >>n;
    int cout=0;
    while (n){
     n/=10
     cout++
    }

    
}

db.products.insertOne({
    id:1,name:"pen",price:1.20,stock:32,
    review:[
        {
            authorname:"anuj",
            rating: 5,
            reveiw:"best pencil for drowing"
        }
        {
            authorname:"rashmi",
            rating:4,
            reveiw:"nycc pencilll boiiiiii"
        }
    ]
})