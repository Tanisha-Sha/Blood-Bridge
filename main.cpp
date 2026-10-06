#include<iostream>
#include<string.h>
#include<vector>
using namespace std; 

void register_donor();
void display_donors();
void create_blood_request();
void update_donor();

class Donor
{
  private:
   int donor_id;
   string donor_name;
   int contact;
   int age;
   string city;
   string blood_group;
   string status; 
  public:
   Donor(int donor_id,string donor_name,int age,string city,int contact,string blood_group);
   //void display_donor_info();
   void set_status(string status);
   void set_donor_id(int donor_id);
   void set_donor_name(string donor_name);
   void set_contact(int contact);
   void set_age(int age);
   void set_city(string city);
   void set_blood_group(string blood_group);
   string get_donor_name();
   string get_status();
   int get_donor_id();
   int get_contact();
   int get_age();
   string get_city();
   string get_blood_group();
};

class Blood_Request
{
private:
int request_id;
string patient_name;
string blood_group;
string city;
int contact;
int units_required;
public:
Blood_Request(string patient_name,int age,string city,int contact,string blood_group,int units_required);
};

vector<Donor>donors;
vector<Blood_Request>blood_requests;

int main()
{
int choice;
do
{
cout<<"Blood Bridge: Blood Donor Finder"<<endl;
cout<<"1.Display Donor"<<endl;
cout<<"2.Register Donor"<<endl;
cout<<"3.Create Blood Request"<<endl;
cout<<"4.Update Donor"<<endl;
cout<<"5.Exit"<<endl;
cout<<"Enter your choice"<<endl;
cin>>choice;
if(choice==1)
{
display_donors();
}
else if(choice==2)
{
register_donor();
}
else if(choice==3)
{
create_blood_request();
}
else if(choice==4)
{
update_donor();
}
}
while(choice!=5);
return 0;
}

Donor::Donor(int donor_id,string donor_name,int age,string city,int contact,string blood_group)
{
this->donor_id=donor_id;
this->donor_name=donor_name;
this->contact=contact;
this->age=age;
this->city=city;
this->blood_group=blood_group;
cout<<"Donor Registered"<<endl;
}

void register_donor()
{
string name;
int age;
int id;
string city;
int contact;
string blood_group;
cout<<"Enter your name :";
cin>>name;
cout<<"Enter your id : "<<endl;
cin>>id;
cout<<"Enter your age: ";
cin>>age;
cout<<"Enter your city name: ";
cin>>city;
cout<<"Enter your blood group: ";
cin>>blood_group;
cout<<"Enter your contact number: ";
cin>>contact;
Donor donor(id,name,age,city,contact,blood_group);
donors.push_back(donor);
}

void display_donors()
{
int i;
for(i=0;i<donors.size();i++)
{
cout<<donors[i].get_donor_id();
cout<<donors[i].get_donor_name()<<endl;
}
}

Blood_Request::Blood_Request(string patient_name,int age,string city,int contact,string blood_group,int units_required)
{
this->patient_name=patient_name;
this->blood_group=blood_group;
this->city=city;
this->contact=contact;
this->units_required=units_required;
cout<<"Blood request created"<<endl;
}

void create_blood_request()
{
string name;
int age;
string city;
int contact;
string blood_group;
int units_required;
cout<<"Enter your name :";
cin>>name;
cout<<"Enter your age: ";
cin>>age;
cout<<"Enter your city name: ";
cin>>city;
cout<<"Enter your blood group: ";
cin>>blood_group;
cout<<"Enter your contact number: ";
cin>>contact;
cout<<"Enter the units of blood required : ";
cin>>units_required;
Blood_Request request(name,age,city,contact,blood_group,units_required);
blood_requests.push_back(request);
}

void update_donor()
{
int donor_id;
cout<<"Enter your Donor ID : "<<endl;
cin>>donor_id;
for(int i=0;i<donors.size();i++)
{
if(donors[i].get_donor_id()==donor_id) cout<<"update function working"<<endl;
}
}
  
void  Donor::set_donor_name(string donor_name)
{
this->donor_name=donor_name;
}
void  Donor::set_contact(int contact)
{
this->contact=contact;
}
void  Donor::set_age(int age)
{
this->age=age;
}
void  Donor::set_city(string city)
{
this->city=city;
}
void  Donor::set_blood_group(string blood_group)
{
this->blood_group=blood_group;
}
string  Donor::get_donor_name()
{
return this->donor_name;
}
int  Donor::get_contact()
{
return this->contact;
}
int  Donor::get_age()
{
 return this->age;
}
string  Donor::get_city()
{
 return this->city;
}
string  Donor::get_blood_group()
{
return this->blood_group;
}
void  Donor::set_status(string status)
{
this->status=status;
}
string  Donor::get_status()
{
return this->status;
}
void  Donor::set_donor_id(int donor_id)
{
this->donor_id=donor_id;
}
int  Donor::get_donor_id()
{
return this->donor_id;
}



/*void Donor::display_donor_info()
{
cout<<"Name : "<<donor_name<<endl;
cout<<"Age : "<<age<<endl;
cout<<"Blood group : "<<blood_group<<endl;
cout<<"City : "<<city<<endl;
cout<<"Contact Number : "<<contact<<endl;
}
*/
