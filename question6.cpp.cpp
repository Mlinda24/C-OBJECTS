#include <iostream>
#include<fstream>
#include <string>
#include<algorithm>


using namespace std;

int main() {
    fstream readData;
    readData.open("textFile.txt", ios::in);

    string fileData;
     getline(readData, fileData);
    
     
     int count=0;
    for ( int i =0;i<=fileData.length(); i++ ){
        if(fileData[i]=='a'||fileData[i]=='e'||fileData[i]=='i'||fileData[i]=='o'||fileData[i]=='u'||fileData[i]=='A'||fileData[i]=='E'||fileData[i]=='I'||fileData[i]=='O'||fileData[i]=='U')
        count+=1;
    }
    cout<<"number of vowels is : "<<count<<"\n";
    int count2=1;
    for (int j=0; j<fileData.length(); j++){
        if(fileData[j]==' ')
        count2+=1; //space starts appearing after one word
    }
    cout<<"number of words is : "<<count2<<"\n";
   reverse(fileData.begin(),fileData.end());
     cout<<fileData<<endl;




}
       
    


