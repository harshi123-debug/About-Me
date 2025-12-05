#include<iostream>
using namespace std;
int add(int a,int b){
    
    return a+b;
}
float add(float a, float b){
    return a+b;
} 
int multiply(int a, int b){
    return a*b;
}
float multiply(float a, float b){
    return a*b;
}
int main(){
    int choice;
while(true){
    cout<<"====Simple Calculator===="<<endl;
    cout<<"1. Add two integer "<<endl;
    cout<<"2. Add two decimal "<<endl;
    cout<<"3. Multiply two integer "<<endl;
    cout<<"4. Multiply two decimal "<<endl;
    cout<<"5. Print numbers from 1 to n "<<endl;
    cout<<"6. Exit "<<endl;
    cout<<"Enter choice: ";
    cin>>choice;
   

    if(choice==1){
        int x,y;
        cout<<"Enter two integer: "<<endl;
        cin>>x>>y;
        cout<<"Result : "<<add(x,y)<<endl;

    }
    else if(choice==2){
        float x,y;
        cout<<"Enter two decimal: "<<endl;
        cin>>x>>y;
        cout<<"Result: "<<add(x,y)<<endl;

    }
    else if(choice==3){
        int x,y;
        cout<<"Enter two integer: "<<endl;
        cin>>x>>y;
        cout<<"Result: "<<multiply(x,y)<<endl;

    }

    else if(choice==4){
        float x,y;
        cout<<"Enter two decimal: "<<endl;
        cin>>x>>y;
        cout<<"Result: "<<multiply(x,y)<<endl;
    }
else if(choice==5){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    cout<<"Numbers form 1 to n : "<<n<<endl;
    for(int i=1; i<=n; i++){
        cout<<i<<" ";

    }
    cout<<endl;
}
else if(choice==6){
    cout<<"Exit "<<endl<< "Thankyou";
    break;
}
else{
    cout<<"Invalid choice "<<endl;
}

}
return 0;
}



