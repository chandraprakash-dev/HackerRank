#include<bits/stdc++.h>

using namespace std;

class Box {
    int l, b, h; 

    public:
    Box();
    Box(int,int,int);
    Box(Box&);
    int getLength(); 
    int getBreadth (); 
    int getHeight ();  
    long long CalculateVolume(); 

    bool operator<(Box& b);
    friend ostream& operator<<(ostream& out, Box& B);
};

Box :: Box () {
    l = b = h = 0;
}

Box :: Box (int length, int breadth, int height) {
    l = length;
    b = breadth;
    h = height;
}

Box :: Box (Box &B) {
    l = B.l;
    b = B.b;
    h = B.h;
}

int Box :: getLength() {
    return l;
}

int Box :: getBreadth () {
    return b;
}

int Box :: getHeight () {
    return h;
}

long long Box :: CalculateVolume() {
    return (long long)l * b * h;
}

bool Box :: operator<(Box& B) {
    if (l < B.l) return true;
    else if(b < B.b && l == B.l) return true;
    else if(h < B.h && b == B.b && l == B.l) return true;
    else return false;
}

ostream& operator<<(ostream& out, Box& B) {
    out << B.l << ' ' << B.b << ' ' << B.h;
    return out;
}


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
