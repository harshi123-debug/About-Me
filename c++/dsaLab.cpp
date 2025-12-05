#include<iostream>
#include<Math.h>
using namespace std;
int main(){

    //sum of a digit

    // int sum=0,num,d;
    // cout<<"Enter the number: "<<endl;
    // cin>>num;
    // while(num>0){
    //     d=num%10;
    //     sum+=d;
    //     num=num/10;
    // }
    // cout<<"The sum of digit:  "<<sum<<endl;
    // return 0;

    //rev of a number

//    int num, rev=0,d;
//     cout<<"Enter the number: ";
//     cin>>num;
// while(num>0){
//     d=num%10;
//     rev=rev*10+d;
//     num=num/10;

// }
// cout<<"rev of a number: "<<rev<<endl;
// return 0;

//number is adoms or not

int num,rev=0,d,rev2=0,d2,s,sr;
cout<<"Enter the number: ";
cin>>num;
s=num*num;
while(s>0){

    d=s%10;
    rev=rev*10+d;
    s=s/10;
        
}
sr=sqrt(rev);
while(sr>0){
    d2=sr%10;
    rev2=rev2*10+d2;
  sr=sr/10;  
}
if(rev2==num){
    cout<<"It is adoms"<<endl;
}
else{
    cout<<"It is not adoms"<<endl;
}

return 0;
     }


