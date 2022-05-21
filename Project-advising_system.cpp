#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class advising_ver{
    string name;
    string course_name
    string course_day;
    string course_name_serch;
    string student_name;
    string compleated_course;
    string student_id;
    string compleated_courses;
    int sec_num;
    int sec_seat;
    int course_room;
    int compleated_credit;
    float time1;
    float time2;
};

class advising_fun: public advising_ver{
    void get_info_course();
    void get_info_stu():
    void advising();
    int sech_id();
    int course_name_serch();
    int student_info_search():
    int course_show();
    int coures_advising();
};

advising_fun::get_info_course(){
      ofstream TareqsFile("CourseInfo.txt",ios::app);
    cout<<"**** Please Use( _ ) sign instead of spaces( ) ****"<<endl;
    cout<<"Enter the course name: \n";
    cin>>course_name;
    TareqsFile<<course_name<<endl;
    cout<<"Enter the section number: \n";
    cin>>sec_num;
    TareqsFile<<sec_num<<endl;
    cout<<"Enter room number: \n";
    cin>>course_room;
    TareqsFile<<course_room<<endl;
    cout <<"Enter the days: \n";
    cin >>course_day;
    TareqsFile<<course_day<<endl;
    cout<<"Enter the time from: \n";
    cin>>time1;
    TareqsFile<<time1<<endl;
    cout<<" to:";
    cin>>time2;
    TareqsFile<<time2<<endl;
    cout <<"Enter total seat: \n";
    cin >> course_seat;
    TareqsFile<<course_seat<<endl;
    TareqsFile.close();
}
void advising_fun::course_show(){
	ifstream tareqsFileS("CourseInfo.txt",ios::in);
	while(inf.good()){
        cout<<endl<<"------******______******------"<<endl<<endl;
        inf>>name;
		if(tareqsFileS.eof()) break;
		cout<<"Course name: "<<name<<endl;
		inf>>name;
		if(tareqsFileS.eof()) break;
		cout<<"Section is: "<<name<<endl;
		inf>>name;
		if(tareqsFileS.eof()) break;
		cout<<"Room number is: "<<name<<endl;
		inf>>name;
		if(tareqsFileS.eof()) break;
		cout<<"Days are:"<<name<<endl;
		inf>>name;
		if(tareqsFileS.eof()) break;
		cout<<"Time is: "<<name;
		inf>>name;
		if(tareqsFileS.eof()) break;
		cout<<" to: "<<name<<endl;
		inf>>name;
		if(tareqsFileS.eof()) break;
		cout<<"Seat avabile is: "<<name<<endl;
	}
	cout<<endl<<"------******______******------"<<endl<<endl;
	inf.close();
}
advising_fun::course_name_serch(string x){
ifstream TFS("CourseInfo.txt");
string CN;
string CSec;
int CR;

string CD;
float t1;
float t2;
while(TFS >>CN>> CSec >>CR >>CD >>t1 >>t2){
    if(CN=x){

        cout <<"Course Title: " <<CN <<endl;
        cout <<"Course Section: " <<CSec <<endl;
        cout <<"Course Room: " <<CR <<endl;
        cout <<"Course Days: " <<CD <<endl;
        cout <<"Course Time: " <<t1 <<"to" <<t2 <<endl;

    }
}
}
   advising_fun::get_info_stu(){
    ofstream TFG("StudentInfo.txt",ios::app);
    cout<<"**** Please Use( _ ) sign instead of spaces( ) ****"<<endl;
    cout<<"Enter the student id: \n";
    cin>>student_id;
    TFg<<student_id<<endl;
    cout<<"Enter student name: \n";
    cin>>student_name;
    TFG<<student_name<<endl;
    cout<<"Enter compleated credit: \n";
    cin>>com_credit;
    TFG<<com_credit<<endl;
    cout<<"Enter the CGPA: \n";
    cin>>stu_CGPA;
    TFG<<stu_CGPA<<endl;
    TFG.close();
}
advising_fun::student_info_search(string x){
ifstream TFS("StudentInfo.txt");
string id;
string name;
int CCr;
float CGPA;
while(TFS >>id>> name >>CCr >>CGpa ){
    if(id=x){

        cout <<"Student ID: " <<id <<endl;
        cout <<"Student Name: " <<name <<endl;
        cout <<"Compleated credit: " <<CCr <<endl;
        cout <<"Course Days: " <<CGPA <<endl;

    }
}
}
advising_fun::advising(string x){
ifstream TFS("StudentInfo.txt");
ifstream TFS2("CourseInfo.txt");
ofstream TFS22("CourseInfo.txt");
string id;
string name;
int CCr;
float CGPA;
while(TFS >>id>> name >>CCr >>CGpa ){
    if(id=x){

        cout <<"Student ID: " <<id <<endl;
        cout <<"Student Name: " <<name <<endl;
        cout <<"Compleated credit: " <<CCr <<endl;
        cout <<"Course Days: \n\n" <<CGPA <<endl;

    }
    else{
        cout <<"Invalid ID or invalid adviser" <<endl;
    }
    }
    cout <<"**Let's start advising**\n\n"<<endl;

    cout <<"Enter how many courses do you want to take: " <<endl;
    cin >>int Ccount;
    string stdAd[10][10];
    for(int i =0;i<Ccount;i++){
    cout <<"Enter a course: "<<endl;
    cin >> string Cor;
    cout<<"Enter the Section: "<<endl;
    cin >>int sec;
    string N;
    int S;
    int R;
    int Day;
    float t1;
    float t2;
    int seat;
    while(TFS2 >>N >> S >> R >> Day >>t1 >>t2 >>seat){

        if(N==cor&& S==sec){

            TFS22 <<seat++;
            stdAd[i][0]=N;
            stdAd[i][1]=S;
            stdAd[i][2]=R;
            stdAd[i][3]=Day;
            stdAd[i][4]=t1;
            stdAd[i][5]=t2;

        }
    }
    }
}


int main(){

    advising_fun a;

    int choice=0;
    int choice_sec=0;
    int chs_sec=0;
    while(true){
    cout<<endl<<"__________---------- Main Menu ----------__________"<<endl;
    cout<<endl<<"Enter the number according to your choice: "<<endl<<
    "1. Enter a new course section."<<endl<<
    "2. Show all the sections."<<endl<<
    "3. Show all the sections for a specic course."<<endl<<
    "4. Enter a student information."<<endl<<
    "5. Get a student's information."<<endl<<
    "6. Advising for a student."<<endl;
    "7. Exit."<<endl;
    cin>>choice;
    switch (choice){
        case (1):{
        a.get_info_course();
        break;
        }
        case (2):{
        a.course_serch();
        break;
        }
        case (3):{
            cout <<"Enter the name of the course: " <<endl;
            cin >>string nam;
        a.course_name_serch(nam);
        break;
        }
        case (4):{
        a.get_info_stu();
        break;
        }

        case (5):{
            cout <<"Enter Student ID: " <<endl;
            cin >> string SID;
        a.student_info_search(SID);
       case (6):{
            cout <<"Enter Student ID: " <<endl;
            cin >> string ID;
        a.advising()(ID);

        }

}








