#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    int id;
    string name;
    string section;
    double  marks;
    Student(int _id,string _name,string _section,double _marks){
        this->id = _id;
        this->name = _name;
        this->section = _section;
        this->marks = _marks;  
    }
    
};
int main()
{
    int t;
    cin >> t;
    while(t--){
       Student * student[3];
        for(int i=0;i<3;i++){
            int id ;
            string name,section;
            double marks;
            cin >> id >> name >> section >> marks;
            
            student[i] = new Student(id,name,section,marks);
        }
        Student * ans = student[0];
        for(int i=1;i<3;i++){
            if(student[i]->marks>ans->marks || (student[i]->marks == ans->marks && student[i]->id<ans->id)){
                ans = student[i]; 
            }
        }
        cout << ans->id << " " <<  ans->name << " " << ans->section << " " << (int) ans->marks << endl;
        
        
}

    return 0;
}
