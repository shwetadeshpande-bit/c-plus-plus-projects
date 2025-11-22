#include<iostream>
using namespace std;
class teacher{
    public :
    string teacher_name;
    string subject_name;
    int teacher_id;
    int teacher_salary;

    teacher(string teacher_name , string subject_name ,  int teacher_id , int teacher_salary){
         this->teacher_name=teacher_name;
         this->subject_name=subject_name;
         this->teacher_id=teacher_id;
         this->teacher_salary=teacher_salary;
    }

    void teacher_data(){
        cout<<"Teacher name : "<<teacher_name<<endl;
         cout<<"Teacher Subject : "<<subject_name<<endl;
          cout<<"Teacher id : "<<teacher_id<<endl;
           cout<<"Teacher salary : "<<teacher_salary<<endl;
    }
};
int main(){
    teacher t1("Madhura","C#",45,65000);
    t1.teacher_data();
}
    


