#include<iostream>
using namespace std;

class Hawkeye{
	public :
		void skill(){
			cout<<"# Master Of Marksman Avenger"<<endl;
		}
};

class Thor{
	public :
		void skill(){
			cout<<"# Master Of Thunder Avenger"<<endl;
		}
};

class IronMan{
	public :
		void skill(){
			cout<<"# Master Of Techonology Avenger"<<endl;
		}
};

class ThreeAvengers : public Hawkeye, public Thor, public IronMan{
	public :
		void skill(){
			cout<<"# Master Of Marksman + Thunder + Technology"<<endl;
		}
};

int main(){
	ThreeAvengers Team;
	cout<<"Skill Team \t: "<<endl; 
	Team.skill();						//Multiple Inheritance
	cout<<endl;
	IronMan hero_techno;
	cout<<"Iron Man Skill \t: "<<endl;
	hero_techno.skill();				//Overriding
}

// Created By : Muhammad Eko Lutfianto_185150301111037_Class-D
