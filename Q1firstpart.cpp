#include <iostream>
#include <CSTDLIB>
#include <Ctime>
using namespace std;

int main() {
   srand(time(0));
   int daysUntilExpiration=rand()%11;
   if (daysUntilExpiration <=10 && daysUntilExpiration>=5){
    cout<<"Your subscription will expire soon. Renew now!"<<"\n";
   }
     if(daysUntilExpiration<=5 && daysUntilExpiration>1){
        cout<<"Your subscription expires in "<<daysUntilExpiration<<" days Renew now and save 10%!"<<endl;
    }
     if(daysUntilExpiration==1){
        cout<<"Your subscription expires within a day! Renew now and save 20%!"<<endl;
    }
     if(daysUntilExpiration==0) {
        cout<<"Your subscription has expired.";
    }
     if(daysUntilExpiration>10) {
        cout<<"You have an active subscription.";
    }
 

}