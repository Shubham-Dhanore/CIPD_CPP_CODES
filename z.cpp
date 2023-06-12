//5.1
[8:20 AM] Shubham Dhanore

Define a class to represent a bank account. Include the following members:

Data members:

	•	Name of the depositor.

	•	Account number.

	•	Type of account.

	•	Balance amount in the account.

Member functions:

	•	To assign initial values.

	•	To deposit an amount.

	•	To withdraw an amount after checking the balance.

	•	To display the name and balance.

Write a main program to test the progra

[8:20 AM] Shubham Dhanore

include<iostream>

#include<iomanip>

using namespace std;

class bank

{

    char name[40];

    int ac_no;

    char ac_type[20];

    double balance;

public:

    int assign(void);

    void deposite(float b);

    void withdraw(float c);

    void display(void);

};


int bank::assign(void)

{

    float initial;

    cout<<" You have to pay   500 TK to open your account \n"

    <<" You have to store at least 500 TK to keep your account active\n"

    <<"Would you want to open a account????\n"

    <<" If Yes press 1 \n"

    <<" If No press 0 : ";

    int test;

    cin>>test;

    if(test==1)

    {

        initial=500;

        balance=initial;

      cout<<" Enter name ,account number & account type to creat account : \n";

         cin>>name>>ac_no>>ac_type;

    }

    else

    ;// do nothing


    return  test;


}

void bank::deposite(float b)

{

    balance+=b;

}

void bank::withdraw(float c)

{

    balance-=c;

    if(balance<500)

    {

        cout<<" Sorry your balance is not sufficient to withdraw "<<c<<"TK\n"

             <<" You have to store at least 500 TK to keep your account active\n";

                balance+=c;

    }

}

void bank::display(void)

{

    cout<<setw(12)<<"Name"<<setw(20)<<"Account type"<<setw(12)<<"Balance"<<endl;

    cout<<setw(12)<<name<<setw(17)<<ac_type<<setw(14)<<balance<<endl;

}


int main()

{

    bank account;


    int  t;

    t=account.assign();

    if(t==1)

    {

        cout<<" Would you want to deposite: ?"<<endl

        <<"If NO press 0(zero)"<<endl

        <<"If YES enter deposite ammount :"<<endl;

        float dp;

        cin>>dp;

        account.deposite(dp);

        cout<<" Would you want to withdraw : ?"<<endl

        <<"If NO press 0(zero)"<<endl

        <<"If YES enter withdrawal ammount :"<<endl;

        float wd;

        cin>>wd;

        account.withdraw(wd);

        cout<<" see details :"<<endl<<endl;

        account.display();

    }

            else if(t==0)

    cout<<" Thank you ,see again\n";

    return 0;

}

//5.2
Write a class to represent a vector (a series of float values). Include member functions to perform the following tasks:
• (a) To create the vector.
• (b) To modify the value of a given element.
• (c) To multiply by a scalar value.
• (d) To display the vector in the form (10, 20, 30 …)

Write a program to test your class.
Answer
#include<iostream>
#include<iomanip>
using namespace std;
class vector
{
   float *p;
   int size;
public:
   void creat_vector(int a);
   void set_element(int i,float value);
   void modify(void);
   void multiply(float b);
   void display(void);
};

void vector::creat_vector(int a)
{
   size=a;
   p=new float[size];
}
void vector::set_element(int i,float value)
{
   p[i]=value;
}
void vector :: multiply(float b)
{
   for(int i=0;i<size;i++)
       p[i]=b*p[i];
}
void vector:: display(void)
{
     cout<<"p["<<size<<"] = ( ";
     for(int i=0;i<size;i++)
     {
         if(i==size-1)
             cout<<p[i];
         else
         cout<<p[i]<<" , ";

     }
     cout<<")"<<endl;
}

void vector::modify(void)
{
   int i;
   cout<<" to edit a given element enter position of the element : ";
   cin>>i;
   i--;
   cout<<" Now enter new value of "<<i+1<<"th  element : ";
   float v;
   cin>>v;
   p[i]=v;
   cout<<" Now new contents : "<<endl;
   display();

   cout<<" to delete an element enter position of the element :";
   cin>>i;
   i--;

   for(int j=i;j<size;j++)
   {
       p[j]=p[j+1];
   }
   size--;
   cout<<" New contents : "<<endl;
   display();
}

int main()
{
   vector santo;
   int s;
   cout<<" enter size of vector : ";
   cin>>s;
   santo.creat_vector(s);
   cout<<" enter "<<s<<" elements  one by one :"<<endl;
   for(int i=0;i<s;i++)
   {
       float v;
       cin>>v;
       santo.set_element(i,v);
   }
   cout<<" Now contents  :"<<endl;
   santo.display();
   cout<<" to multiply this vector by a scalar quantity enter this scalar quantity : ";
   float m;
   cin>>m;
   santo.multiply(m);
   cout<<" Now contents : "<<endl;
   santo.display();
   santo.modify();
   return 0;
}
//5.3
Modify the class and the program of Exercise 5.1 for handling 10 customers.
Answer
#include<iostream>
#include<iomanip>
#define size 10
using namespace std;
char *serial[size]={" FIRST "," SECOND "," THIRD "," 4th "," 5th "," 6th "," 7th "," 8th "," 9th ","10th"};

class bank
{
   char name[40];
   int ac_no;
   char ac_type[20];
   double balance;
public:
   int assign(void);
   void deposit(float b);
   void withdraw(float c);
   void displayon(void);
         void displayoff(void);
};

int bank::assign(void)
{
   float initial;
   cout<<" You have to pay   500 TK to open your account \n"
<<" You have to store at least 500 TK to keep your account active\n"
<<"Would you want to open a account????\n"
<<" If Yes press 1 \n"
<<" If No press 0 : ";
   int test;
   cin>>test;
   if(test==1)
   {
       initial=500;
       balance=initial;
cout<<" Enter name ,account number & account type to create account : \n";
        cin>>name>>ac_no>>ac_type;
   }
   else
   ;// do nothing

   return  test;

}
void bank::deposit(float b)
{
   balance+=b;
}
void bank::withdraw(float c)
{
   balance-=c;
   if(balance<500)
   {
   cout<<" Sorry your balance is not sufficient to withdraw "<<c<<"TK\n"
<<" You have to store at least 500 TK to keep your account active\n";
               balance+=c;
   }
}
void bank::displayon(void)
{
   cout<<setw(12)<<name<<setw(17)<<ac_type<<setw(14)<<balance<<endl;
}
void bank::displayoff(void)
{        cout<<” Account has not created”<<endl;  }
int main()
{
   bank account[size];
         int  t[10];
   for(int i=0;i<size;i++)
   {
                   cout<<" Enter information for "<<serial[i]<<"customer : "<<endl;
       t[i]=account[i].assign();
                   if(t[i]==1)
                  {
           cout<<" Would you want to deposit: ?"<<endl
<<"If NO press 0(zero)"<<endl
<<"If YES enter deposit amount :"<<endl;
           float dp;
           cin>>dp;
           account[i].deposit(dp);
           cout<<" Would you want to with draw : ?"<<endl
<<"If NO press 0(zero)"<<endl
<<"If YES enter withdrawal amount :"<<endl;
           float wd;
           cin>>wd;
           account[i].withdraw(wd);
           cout<<endl<<endl;
                  }
                  else if(t[i]==0)
                  cout<<”Thank  you , see again  \n”;

   }

    cout<<" see details :"<<endl<<endl;
    cout<<setw(12)<<"Name"<<setw(20)<<"Account type"
<<setw(12)<<"Balance"<<endl;

   for(i=0;i<size;i++)
   {
                     if(t[i]==1)
          account[i].displayon();
                    else  if(t[i]==0)
                      account[i].displayoff();
   }
   return 0;
}
Note: Here we will show output only for Three customers. But when you run this program you can see output for 10 customer
//5.4
[8:21 AM] Shubham Dhanore

Modify the class and the program of Exercise 5.12 such that the program would be able to add two vectors and display the resultant vector. (Note that we can pass objects as function arguments)

Answer

#include<iostream>

#include<iomanip>

#define size 8

using namespace std;

class vector

{

    float *p;


public:

    void creat_vector(void);

    void set_element(int i,float value);

    friend void add(vector v1,vector v2);


};

void vector::creat_vector(void)

{

    p=new float[size];

}

void vector::set_element(int i,float value)

{

    p[i]=value;

}

void add(vector v1,vector v2)

{


    float *sum;

    cout<<"sum["<<size<<"] = (";

    sum= new float[size];


    for(int i=0;i<size;i++)

    {

        sum[i]=v1.p[i]+v2.p[i];

        if(i==size-1)

             cout<<sum[i];

        else

            cout<<sum[i]<<" , ";

    }

    cout<<")"<<endl;


}


int main()

{

    vector x1,x2,x3;

    x1.creat_vector();

    x2.creat_vector();

    x3.creat_vector();

    cout<<" Enter "<<size<<" elements of FIRST vector : ";

    for(int i=0;i<size;i++)

    {

         float v;

         cin>>v;

         x1.set_element(i,v);

    }


    cout<<" Enter "<<size<<" elements of SECOND vector : ";

    for(i=0;i<size;i++)

    {

               float v;

         cin>>v;

         x2.set_element(i,v);

    }

    add(x1,x2);


    return 0;

}

[8:22 AM] Shubham Dhanore

Create two classes DM and DB which store the value of distances. DM stores distances in meters and centimeters and DB in feet and inches. Write a program that can read values for the class objects and add one object of DM with another object of DB.

Use a friend function to carry out the addition operation. The object that stores the results may be a DM object or DB object, depending on the units in which the results are required.

The display should be in the format of feet and inches or meters and centimeters depending on the object on display.
//5.5
include<iostream>
#define factor 0.3048
using namespace std;
class DB;
class DM
{
                   float d;
        public:
        void store(float x){d=x;}
        friend void sum(DM,DB);
        void show();
};
class DB
{
       float d1;
       public:
       void store(float y){d1=y;}
       friend void sum(DM,DB);
       void show();
};

void DM::show()
{

     cout<<"\n Distance = "<<d<<" meter or "<<d*100<<" centimeter\n";
}

void DB::show()
{

     cout<<"\n Distance = "<<d1<<" feet or "<<d1*12<<" inches \n";
}
void sum(DM m,DB b)
{

        float sum;

        sum=m.d+b.d1*factor;
        float f;
        f=sum/factor;
        DM m1;
        DB b1;

        m1.store(sum);
        b1.store(f);

      cout<<" press 1 to display result in meter\n"
<<" press 2 to display result in feet \n"
<<" What is your option ? : ";
         int test;
         cin>>test;

            if(test==1)
            m1.show();
            else if(test==2)
            b1.show();


}


int main()
{
    DM dm;
    DB db;
    dm.store(10.5);
    db.store(12.3);
   sum(dm,db);
    return 0;
}



//6.2
Define a class String that could work as a user-defined string type. Include constructors that will enable us to create an uninitialized string:
String s1; // string with length 0
And also initialize an object with a string constant at the time of creation like
String s2(“Well done!”);
Include a function that adds two strings to make a third string. Note that the statement
S2 = s1;
will be perfectly reasonable expression to copy one string to another.
Write a complete program to test your class to see that it does the following tasks:
• (a) Creates uninitialized string objects.
• (b) Creates objects with string constants.
• (c) Concatenates two strings properly.
• (d) Displays a desired string object.

Answer
#include<iostream>
#include<iomanip>
using namespace std;
class string
{
char *str;
int length;

public:
string()
{
length = 0;
str = new char [length + 1] ;
}
string(char *s);
void concat(string &amp;m,string &amp;n);
string(string &amp;x);
void display();

};
string::string(string &amp;x)
{
length = x.length + strlen(x.str);
str = new char[length + 1];
strcpy(str, x.str);

}
void string:: concat(string &amp;m,string &amp;n)
{
length=m.length+n.length;
delete str;
str=new char[length+1];
strcpy(str,m.str);
strcat(str,n.str);
}
void string:: display()
{
cout&lt;&lt;str&lt;&lt;"\n";
}
string::string(char *s)
{
length = strlen(s);
str = new char[length + 1];
strcpy(str,s);
}

int main()
{
string s1;
string s2(" Well done ");
string s3(" Badly done ");
s2.display();
s1.concat(s2,s3);
s2=s3;
s2.display();
s1.display();
return 0;
}

//6.3
A book shop maintains the inventory of books that are being sold at the shop. The list includes details such as author, title, price, publisher and stock position. Whenever a customer wants a book, the sales person inputs the title and author and the system searches the list and displays whether it is available or not. If it is not, an appropriate message is displayed. If it is, then the system displays the book details and requests for the number of copies required. If the requested copies are available, the total cost of the requested copies is displayed; otherwise “Required copies not in stock” is displayed.
Design a system using a class called books with suitable member functions and constructors. Use new operator in constructors to allocate memory space required.
Answer
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;
class book
{
char **author;
char **title;
float *price;
char **publisher;
int *stock_copy;
int size;

public:
book();
void book_detail(int i);
void buy(int i);
int search();
};

book :: book()
{
size=4;
author=new char*[80];
title=new char*[80];
publisher=new char*[80];

for(int i=0;i<size;i++)
{
author[i]=new char[80];
title[i]=new char[80];
publisher[i]=new char[80];
}
stock_copy=new int[size];
price=new float[size];

title[0]="object oriented programming with c++";
title[1]="programming in ANCI";
title[2]="electronic circuit theory";
title[3]="computer algorithm";

author[0]="balagurusamy";
author[1]="balagurusamy";
author[2]="boyelstade";
author[3]="shahani";

stock_copy[0]=200;
stock_copy[1]=150;
stock_copy[2]=50;
stock_copy[3]=80;

price[0]=120.5;
price[1]=115.75;
price[2]=140;
price[3]=180.5;

}
void book::book_detail(int i)
{
cout<<" *********book detail **********\n";
cout<<setw(12)<<"Title"<<setw(25)<<"Author Name"
<<setw(18)<<"Stock copy\n";
cout<<setw(15)<<title[i]<<setw(16)<<author[i]<<setw(15)
<<stock_copy[i]<<"\n";

}
int book::search()
{
char name[80],t[80];
cout<<"Enter author name : ";

gets(name);
cout<<"and title of book in small letter : ";
gets(t);

int count=-1;
int a,b;
for(int i=0;i<size;i++)
{

a=strcmp(name,author[i]);
b=strcmp(t,title[i]);
if(a==0 &amp;&amp; b==0)

count=i;

}

return count;
}

void book::buy(int i)
{
if(i<0)
cout<<" This book is not available \n";

else
{
book_detail(i);
cout<<" How many copies of this book is required : ? "; int copy; cin>>copy;
int remaining_copy;
if(copy<=stock_copy[i])
{
remaining_copy=stock_copy[i]-copy;
float total_price;
total_price=price[i]*copy;
cout<<"Total price = "<<total_price<<" TK\n";
}
else
cout<<" Sorry your required copies is not available \n";
}
}

int main()
{
book b1;
int result;

result=b1.search();
b1.buy(result);
return 0;
}
//6.4
Improve the system design in Exercise 6.3 to incorporate the following features:
• (a) The price of the books should be updated as and when required. Use a private member function to implement this.
• (b) The stock value of each book should be automatically updated as soon as a transaction is completed.
• (c) The number of successful and unsuccessful transactions should be recorded for the purpose of statistical analysis. Use static data members to keep count of transactions.

Answer
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;
class book
{
static int successful,unsuccessful;
char **author;
char **title;
float *price;
char **publisher;
int *stock_copy;
int size;

public:
book();
void book_detail(int i);
void buy(int i);
int search();
void showtransaction();
void showdetail();
void edit_price();
};
int book::successful=0;
int book::unsuccessful=0;

book :: book()
{
size=5;
author=new char*[80];
title=new char*[80];
publisher=new char*[80];

for(int i=0;i<size;i++)
{
author[i]=new char[80];
title[i]=new char[80];
publisher[i]=new char[80];
}
stock_copy=new int[size];

price=new float[size];

title[0]="object oriented programming with c++";
title[1]="programming in ANCI";
title[2]="electronic circuit theory";
title[3]="computer algorithm";
title[4]="complete solution of balagurusamy(c++)";

author[0]="balagurusamy";
author[1]="balagurusamy";
author[2]="boyelstade";
author[3]="shahani";
author[4]="abdus sattar";

stock_copy[0]=200;
stock_copy[1]=150;
stock_copy[2]=50;
stock_copy[3]=80;
stock_copy[4]=300;

price[0]=120.5;
price[1]=115.75;
price[2]=140;
price[3]=180.5;
price[4]=120;

}

void book::book_detail(int i)
{
cout<<" *********book detail **********\n";
cout<<setw(25)<<"Title"<<setw(30)<<"Author Name"
<<setw(18)<<"Stock copy\n";
cout<<setw(15)<<title[i]<<setw(16)<<author[i]<<setw(15)
<<stock_copy[i]<<"\n";

}

int book::search()
{
char name[80],t[80];
cout<<"Enter author name in small letter : ";
gets(name);
cout<<" title of book in small letter : ";
gets(t);

int count=-1;
int a,b;
for(int i=0;i<size;i++)
{

a=strcmp(name,author[i]);
b=strcmp(t,title[i]);
if(a==0 &amp;&amp; b==0)

count=i;

}

return count;
}

void book::buy(int i)
{
if(i<0)
{
cout<<" This book is not available \n";
unsuccessful++;
}

else
{
book_detail(i);
cout<<" How many copies of this book is required : ? "; int copy; cin>>copy;

if(copy<=stock_copy[i])
{
stock_copy[i]=stock_copy[i]-copy;
float total_price;
total_price=price[i]*copy;
cout<<"Total price = "<<total_price<<" TK\n";
successful++;
}
else
{
cout<<" Sorry your required copies is not available \n";
unsuccessful++;
}
}
}

void book::edit_price()
{
cout<<" To edit price ";
int i;
i=search();
cout<<"Enter new price : "; float p; cin>>p;
price[i]=p;
}
void book::showdetail()
{
cout<<setw(22)<<"Title"<<setw(30)<<" stock copy "<<setw(20)
<<" Price per book "<<endl;
for(int i=0;i<size;i++)
{
cout<<setw(35)<<title[i]<<setw(10)<<stock_copy[i]
<<setw(18)<<price[i]<<endl;
}
}
void book::showtransaction()
{
cout<<setw(22)<<"Successful transaction"<<setw(34)
<<"unsuccessful transaction "<<endl<<setw(10)
<<successful<<setw(32)<<unsuccessful<<endl;
}

int main()
{
book b1;
int result;

result=b1.search();
b1.buy(result);
b1.showdetail();
b1.showtransaction();
b1.edit_price();
cout<<"************details after edit price
*****************"<<endl;
b1.showdetail();

return 0;
}
//7.1
Crate a class FLOAT that contains one float data member. Overload all the four arithmetic operators so that they operate on the objects of FLOAT.
#include <iostream>

class FLOAT
{
    float data;

public:
    FLOAT() {}
    FLOAT(float d) { data = d; }
    FLOAT operator+(FLOAT& f1);
    FLOAT operator-(FLOAT& f2);
    FLOAT operator*(FLOAT& f3);
    FLOAT operator/(FLOAT& f4);
    void display();
};

FLOAT FLOAT::operator+(FLOAT& f1)
{
    FLOAT temp;
    temp.data = data + f1.data;
    return temp;
}

FLOAT FLOAT::operator-(FLOAT& f2)
{
    FLOAT temp;
    temp.data = data - f2.data;
    return temp;
}

FLOAT FLOAT::operator*(FLOAT& f3)
{
    FLOAT temp;
    temp.data = data * f3.data;
    return temp;
}

FLOAT FLOAT::operator/(FLOAT& f4)
{
    FLOAT temp;
    temp.data = data / f4.data;
    return temp;
}

void FLOAT::display()
{
    std::cout << data << "\n";
}

int main()
{
    FLOAT F1, F2, F3, F4, F5, F6;
    F1 = FLOAT(2.5);
    F2 = FLOAT(3.1);
    F3 = F1 + F2;
    F4 = F1 - F2;
    F5 = F1 * F2;
    F6 = F1 / F2;
    std::cout << "F1 = ";
    F1.display();
    std::cout << "F2 = ";
    F2.display();
    std::cout << "F1 + F2 = ";
    F3.display();
    std::cout << "F1 - F2 = ";
    F4.display();
    std::cout << "F1 * F2 = ";
    F5.display();
    std::cout << "F1 / F2 = ";
    F6.display();

    return 0;
}

//7.2
Design a class Polar which describes a point in the plane using polar coordinates radius and angle. A point in polar coordinates is shown below figure 7.3
Use the overload + operator to add two objects of Polar.
Note that we cannot add polar values of two points directly. This requires first the conversion of points into rectangular coordinates, then adding the respective rectangular coordinates and finally converting the result back into polar coordinates. You need to use the following trigonometric formula:
x = r * cos(a);



y = r * sin(a);
a = atan(y/x); //arc tangent
r = sqrt(x*x + y*y);

#include<iostream>
#include<math.h>
#define pi 3.1416
using namespace std;
class polar
{
                  float r,a,x,y;
                  public:
                  polar(){};
                  polar(float r1,float a1);
                  polar operator+(polar r1);
                  void display(void);
};

polar :: polar(float r1,float a1)
{
              r=r1;
             a=a1*(pi/180);
             x=r*cos(a);
             y=r*sin(a);
}

polar polar :: operator+(polar r1)
{
             polar R;

             R.x=x+r1.x;
             R.y=y+r1.y;
             R.r=sqrt(R.x*R.x+R.y*R.y);
             R.a=atan(R.y/R.x);

   return R;
}

void polar::display()
{
           cout<<"radius = "<<r<<"\n angle = "<<a*(180/pi)<<"\n";
}

int main()
{
 polar p1,p2,p3;
 float r,a;
 cout<<" Enter radius and angle : ";
 cin>>r>>a;
 p1=polar(r,a);
 p2=polar(8,45);
 p3=p1+p2;
 cout<<" p1 : \n";
 p1.display();
 cout<<" p2 : \n ";
 p2.display();
 cout<<" p3 : \n ";
 p3.display();
 return 0;
}

//7.3
Create a class MAT of size m * n. Define all possible matrix operations for MAT type objects.
#include <iostream>
#include <iomanip>
using namespace std;

class mat
{
    float **m;
    int rs, cs;

public:
    mat() {}
    void creat(int r, int c);
    friend istream &operator>>(istream &din, mat &a);
    friend ostream &operator<<(ostream &dout, mat &a);
    mat operator+(mat &m2);
    mat operator-(mat &m2);
    mat operator*(mat &m2);
};

void mat::creat(int r, int c)
{
    rs = r;
    cs = c;
    m = new float *[r];
    for (int i = 0; i < r; i++)
    {
        m[i] = new float[c];
    }
}

istream &operator>>(istream &din, mat &a)
{
    int r = a.rs;
    int c = a.cs;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            din >> a.m[i][j];
        }
    }
    return din;
}

ostream &operator<<(ostream &dout, mat &a)
{
    int r = a.rs;
    int c = a.cs;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            dout << setw(5) << a.m[i][j];
        }
        dout << "\n";
    }
    return dout;
}

mat mat::operator+(mat &m2)
{
    mat mt;
    mt.creat(rs, cs);
    for (int i = 0; i < rs; i++)
    {
        for (int j = 0; j < cs; j++)
        {
            mt.m[i][j] = m[i][j] + m2.m[i][j];
        }
    }
    return mt;
}

mat mat::operator-(mat &m2)
{
    mat mt;
    mt.creat(rs, cs);
    for (int i = 0; i < rs; i++)
    {
        for (int j = 0; j < cs; j++)
        {
            mt.m[i][j] = m[i][j] - m2.m[i][j];
        }
    }
    return mt;
}

mat mat::operator*(mat &m2)
{
    mat mt;
    mt.creat(rs, m2.cs);
    for (int i = 0; i < rs; i++)
    {
        for (int j = 0; j < m2.cs; j++)
        {
            mt.m[i][j] = 0;
            for (int k = 0; k < cs; k++)
            {
                mt.m[i][j] += m[i][k] * m2.m[k][j];
            }
        }
    }
    return mt;
}

int main()
{
    mat m1, m2, m3, m4, m5;
    int r1, c1, r2, c2;
    cout << "Enter size of the first matrix: ";
    cin >> r1 >> c1;
    m1.creat(r1, c1);
    cout << "Enter elements of matrix m1:\n";
    cin >> m1;
    cout << "Enter size of the second matrix: ";
    cin >> r2 >> c2;
    m2.creat(r2, c2);
    cout << "Enter elements of matrix m2:\n";
    cin >> m2;
    cout << "m1:\n";
    cout << m1;
    cout << "m2:\n";
    cout << m2;
    cout << endl;

    if (r1 == r2 && c1 == c2)
    {
        m3 = m1 + m2;
        cout << "m1 + m2:\n";
        cout << m3 << endl;

        m4 = m1 - m2;
        cout << "m1 - m2:\n";
        cout << m4 << endl;
    }
    else
    {
        cout << "Summation and subtraction are not possible.\n"
             << "Two matrices must have the same size for summation and subtraction.\n";
    }

    if (c1 == r2)
    {
        m5 = m1 * m2;
        cout << "m1 * m2:\n";
        cout << m5;
    }
    else
    {
        cout << "Multiplication is not possible.\n"
             << "The number of columns in the first matrix must be equal to the number of rows in the second matrix.\n";
    }

    return 0;
}

//7.4
Define a class String. Use overload == operator to compare two strings.
Answer
#include<iostream>
#include<string>
#include<stdio>
using namespace std;
class string
{
                char str[1000];
                public:
                void input(){gets(str);}
                         int operator==(string s2);
};
int string::operator==(string s2)
{
                     int t= strcmp(str,s2.str);
           if(t==0)
                        t=1;
           else
           t=0;
       return t;
}

int main()
{

       char st1[1000],st2[1000];
       string s1,s2;
        cout<<" Enter 1st string : ";
        s1.input();
        cout<<" enter 2nd string : ";
        s2.input();

       if(s1==s2)
       cout<<" Two strings are equal ";
       else
       cout<<" Two string are not equal ";
   return 0;

}

//7.5
Define two classes Polar and Rectangle to r... by Shubham Dhanore

Define two classes Polar and Rectangle to represent points in the polar and rectangle systems. Use conversion routines to convert from one system to the other.
Answer
#include<iostream>
#include<math>
#define pi 3.1416
using namespace std;
class conversion_point
{
               float x,y,r,theta;
                public:
                 void set_xy();
                 void set_r_theta();
                 void show_xy();
                 void show_r_theta();
                 void conversion(int t);
};
       void conversion_point::set_xy()
{
        cout<<"Enter the value of x & y : ";
        cin>>x>>y;
}
        void conversion_point::set_r_theta()
{
          cout<<"Enter the value of r & theta :";
          cin>>r>>theta;
          theta=(pi/180)*theta;
}

        void conversion_point::show_xy()
{
            cout<<" CERTECIAN FORM :\n"
<<" x = "<<x<<"\n"
<<" y = "<<y<<"\n";
}
void conversion_point::show_r_theta()
{
              cout<<" POLAR FORM :\n"
<<" r = "<<r<<"\n"
<<" theta = "<<(180/pi)*theta<<" degree \n";
}

void conversion_point::conversion(int t)
{
          if(t==1)
           {
                      r=sqrt(x*x+y*y);

                     if(x!=0)
                      {
                            theta=atan(y/x);
                            show_r_theta();
                      }

                   else
                     {
                             cout<<" POLAR FORM :\n"
<<" r = "<<r<<"\n"
<<" theta = 90 degree\n";
                     }

            }
      else if(t==2)
         {
                   x=r*cos(theta);
                   y=r*sin(theta);
                  show_xy();
         }
}

int main()
{
              conversion_point santo;
               int test;
              cout<<" press 1 to input certecian point \n"
<<" press 2 to input polar point \n "
<<" what is your input ? : ";
                   cin>>test;
                   if(test==1)
                   santo.set_xy();
                   else if(test==2)
                   santo.set_r_theta();
                   santo.conversion(test);

      return 0;
}
