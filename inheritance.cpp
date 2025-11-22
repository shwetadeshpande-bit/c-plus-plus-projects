#include <iostream>
using namespace std;
//single inheritance
// Base class (Parent)
class colleges {
public:
    char clgname[20];
      int ranking;
};
class privateclg :colleges {
public:
   void put(){
    cout<<"enter pivate college ranking"<<endl;
         cin>>ranking;
      if(ranking>=50){
        cout<<"student can get admission in private college "<<endl;
     
     for(int i=1;i<=5;i++){
        cout << "enter college name:" << endl;
    cin>>clgname;
    cout<<"college name is: "<<clgname<<endl;
     }
      }
      else{
        cout<<"student can't get admission in private college"<<endl;
        }
}
};
class governmentclg :colleges{
  public:
   void put(){
    cout<<"enter government college ranking"<<endl;
         cin>>ranking;
      if(ranking>=50){
        cout<<"student can get admission in government college "<<endl;
      
     for(int i=1;i<=5;i++){
        cout << "enter college name:" << endl;
    cin>>clgname;
    cout<<"college name is: "<<clgname<<endl;
     }
     }
      else{
        cout<<"student can't get admission in government college"<<endl;
        }
}
};
int main() {
    privateclg p1;
     p1.put();
     cout<<endl;
     governmentclg g1;
     g1.put();
    return 0;
}
