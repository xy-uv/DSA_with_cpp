#include<iostream>

using namespace std;

int main(){
    int amount;
    cout<<"Enter the amount you have in BDT: ";
    cin>>amount;

    if(amount<0){
        cout<<"Please enter non-negative valid amount"<<endl;
        return 1;
    }

    int currentNote=1000, numNotes;
    while(amount>0 && currentNote>0){
        switch(currentNote){
            case 1000:{
          numNotes=amount/1000;
            if(numNotes>0){
                cout<<"1000 BDT Notes are: "<<numNotes<<endl;
                amount%=1000;
            }
            currentNote=500;
            break;
            }
            case 500:{
                numNotes=amount/500;
                if(numNotes>0){
                    cout<<"500 BDT Notes are: "<<numNotes<<endl;
                    amount%=500;
                }
                currentNote=200;
                break;
            }
            case 200:{
                numNotes=amount/200;
                if(numNotes>0){
                    cout<<"200 BDT Notes are: "<<numNotes<<endl;
                    amount%=200;
                }
                currentNote=100;
                break;
            }
            case 100:{
                numNotes=amount/100;
                if(numNotes>0){
                    cout<<"100 BDT Notes are: "<<numNotes<<endl;
                    amount%=100;
                }
                currentNote=50;
                break;
            }
            case 50:{
                numNotes=amount/50;
                if(numNotes>0){
                    cout<<"50 BDT Notes are: "<<numNotes<<endl;
                    amount%=50;
                }
                currentNote=20;
                break;
            }
            case 20:{
                numNotes=amount/20;
                if(numNotes>0){
                    cout<<"20 BDT Notes are: "<<numNotes<<endl;
                    amount%=20;
                }
                currentNote=10;
                break;
            }
            case 10:{
                numNotes=amount/10;
                if(numNotes>0){
                    cout<<"10 BDT Notes are: "<<numNotes<<endl;
                    amount%=10;
                }
                currentNote=5;
                break;
            }
            case 5:{
                numNotes=amount/5;
                if(numNotes>0){
                    cout<<"5 BDT Notes are: "<<numNotes<<endl;
                    amount%=5;
                }
                currentNote=2;
                break;
            }
            case 2:{
                numNotes=amount/2;
                if(numNotes>0){
                    cout<<"2 BDT Notes are: "<<numNotes<<endl;
                    amount%=2;
                }
                currentNote=1;
                break;
            }
            case 1:{
                numNotes=amount/1;
                if(numNotes>0){
                    cout<<"1 BDT Notes are: "<<numNotes<<endl;
                    amount%=1;
                }
                currentNote=0;
                break;
            }
            default:{
                currentNote=0;
            }
        }
    }
}