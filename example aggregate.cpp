#include<iostream>
using namespace std;
main()
{
 int matric;
 int inter;
 int ecat;
 float matric_percent;
 float inter_percent;
 float ecat_percent;
 float total;
 cout<<"Enter your Matric Marks: ";
 cin>>matric;
 cout<<"Enter your Inter marks: ";
 cin>>inter;
 cout<<"enter your Ecat marks: ";
 cin>>ecat;
 matric_percent=matric/1100.0*100.0*0.25;
 inter_percent=inter/1100.0*100.0*0.45;
 ecat_percent=ecat/400.0*100.0*0.30;
 total=matric_percent+inter_percent+ecat_percent;
 cout<<total;
}