#include<iostream>
using namespace std;

class A{
	public :
		int lectures,course,i;
		string lecturer,subject;
		A(){
			for(i=0;i<5;i++){
				cout<<"Name of the lecturer : ";
				cin>>lecturer;
				
				cout<<"Course (fullstack = 1,frontend = 2,backend = 3): ";
				cin>>course;
				
				cout<<"Name of the subject : ";
				cin>>subject;
				
				cout<<"Number of lecture : "<<1;
				
				cout<<"\n\nSubject is "<<subject<<".";
				cout<<"\nName is lecturer "<<lecturer<<".";
				switch(course){
					case 1:
						cout<<"\n========== Lecture detail ==========";
						cout<<"\nLecture time is 9:00 A.M to 10:30 A.M";
						cout<<"\nCourse total time is 1 year";
						cout<<"\nTotal subject is c,c++,database,html,css,javascript\n\n";
						break;
						
					case 2:
						cout<<"\n========== Lecture detail ==========";
						cout<<"\nLecture time is 11:00 A.M to 12:30 P.M";
						cout<<"\nCourse total time is 7-8 months";
						cout<<"\nTotal subject is html,css,bootstreap,java\n\n";
						break;
						
					case 3:
						cout<<"\n========== Lecture detail ==========";
						cout<<"\nLecture time is 01:00 P.M to 02:30 P.M";
						cout<<"\nCourse total time is 7-8 months";
						cout<<"\nTotal subject is c,c++,database,html(basic),css(basic),python/java/php\n\n";
						break;
						
					default :
						cout<<"invalid choice...\n";
				}
			}
		}
};
main(){
	A a;
}
