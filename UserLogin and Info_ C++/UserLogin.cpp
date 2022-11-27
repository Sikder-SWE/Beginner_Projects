#include<iostream>
#include<conio.h>
using namespace std;
int Break(int line);
int login(string username);
    /* Declaring global Variables: Started*/
    string user[5];
    int password[5];
    string Lu;
    int Tu,Lp,Index=-1,GuI=-1;
    /* Declaring global Variables: Ended*/
int Break(int line){
    for(int i=0;i<line;i++){
        printf("__");
    }
    printf("\n");
    return 0;
}
int main(){
    /*string user[5];
    int password[5];
    string Lu;
    int Tu,Lp,GuI;*/
    Break(10);
    cout<<"Input your user data"<< endl;
    cout<<"How many users do you have: ";
    cin>>Tu;
    for(int i=0;i<Tu;i++){
        cout<<"Enter username: ";
        //gets(user[i]);
        cin>>user[i];
        cout<<"Enter password: ";
        cin>>password[i];
        cout<<'\n';
    }

    /*for(int i=0;i<Tu;i++){
        cout<<"\nUsername:" <<user[i] <<" and Password: " <<password[i]<< endl;
    }*/
    printf("\nData input complete...\n");
    Break(10);
    cout<<"Login information\n";
    cout<<"Enter your username:";
    cin>>Lu;
    GuI=login(Lu);
    //Break(10);
    //cout<<"Given username index is: "<<GuI<<endl;
    //Break(15);
    if(GuI!=-1){
       //cout<<"The value of GuI is:"<<GuI<<endl;
        cout<<"Enter your password please:";
        cin>>Lp;
    Break(20);
    if(Lp==password[GuI]){
        cout<<"Login Successful"<<endl;
    }
    else{
        cout<<"Your password is wrong\nTry Again\n";
        return main();
    }

    }
    else
        return main();
   /*cout<<"Enter your password please:";
    cin>>Lp;
    Break(20);
    */


}
    //cout<<Lu;
int login(string username)
{
    int i;
    //cout<<username;
    for(i=0;i<Tu;i++){
        if(username==user[i]){
         Index=i;
         //   return i+1;
        }
    }
    if(Index>=0){
        return Index;
    }
    else{
            cout<<"Wrong Username"<<endl;
            return 0;
        }
}
