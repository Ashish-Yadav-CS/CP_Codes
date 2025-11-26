//Ashish Yadav
//221CS2301
//Inverse of Polynomial
// C++ program for the finding the inverse of polynomial
#include<bits/stdc++.h>
using namespace std;
class inv
{
    float coff;
    int pow;
    inv* link;
    public:
    inv();
    inv(float,int);
    inv* create_node(inv* ,float,int);
    void poly_divide(inv*,inv*);
};
/*inv::inv()
:coff(0)
,pow(0)
,link(NULL){}*/

inv :: inv(float cof,int p)
{
coff=cof;
pow=p;
link=NULL;
}

inv*  inv :: create_node(inv* root,float  coff,int pow)
{
    if(root==NULL)
    {
        return new inv(coff,pow);
    }
    else
    {
        root->link=create_node(root->link,coff,pow);
    }
}

void inv :: poly_divide(inv *pol1,inv *pol2)
{
    inv *quot=NULL,*rem=NULL;
}

int main()
{
    inv poly1,poly2,*root1=NULL,*root2=NULL;
   // x^5+x^2+1 dividend
    poly1.create_node(root1,1, 5);
	poly1.create_node(root1,1, 2);
	poly1.create_node(root1,1, 0);

	//x^4+x^3+1  divisior
	poly2.create_node(root2,1, 4);
	poly2.create_node(root2,1, 3);
	poly2.create_node(root2,1, 0);
}
