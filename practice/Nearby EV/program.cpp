#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int total_p;
	int p1,p2,p3,p4;
	// viruses for each 
	int v1,v2,v3,v4;
	int t_v;
	cin>>total_p;
	cin>>p1>>p2>>p3>>p4;
	

	v1 = p1*(p2+p3+p4);
	v2 = p2*(p1+p3+p4);
	v3 = p3*(p1+p2+p4);
	v4 = p4*(p1+p2+p3);
    
	t_v = v1+v2+v3+v4;

cout<<"\n Total viruses in a room = "<<t_v;
	
	return 0;
}