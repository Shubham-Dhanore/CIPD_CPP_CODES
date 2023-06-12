Assume that a bank maintains two kinds of accounts for customers, one called as 
savings and the other as current account. The savings account provides compound interest 
and withdrawal facilities but no cheque book facility. The current account provides cheque 
book facility but no interest. Current account holders should also maintain a minimum 
balance and if the balance falls below this level a service charge is imposed.
Create a class account that stores customer name, account number and type of account. 
From this derive the classes cur_acct and sav_acct to make them more specific to their 
requirements. Include necessary member functions in order to achieve the following tasks:
(a) Accept the deposit from a customer and update the balance.
(b) Display the balance.
(c) Compute and deposit interest.
(d) Permit withdrawal and update the balance.
(e) Check for the minimum balance, impose penalty, necessary and update the balance.
Do not use any constructors. Use member functions to initialize class members.
Solution:
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#define minimum 500
#define service_charge 100
#define r 0.15
class account
{
protected:
char name[100];
int ac_number;
char ac_type[100];
public:
void creat( char *t);
};
void account::creat(char *t)
{
cout<<" Enter customer name :";
gets(name);
strcpy(ac_type,t);
cout<<" Enter account number :";
cin>>ac_number;
}
class cur_acct: public account
{
private:
float balance;
public:
void deposite(float d);
void withdraw(float w);
void display();
};
void cur_acct::deposite(float d)
{
balance=d;
}
void cur_acct::withdraw(float w)
{
if(balance<w)
cout<<" sorry your balance is less than your withdrawal amount \n";
else
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
{
balance-=w;
if(balance<minimum)
cout<<"\n your current balance is :"<<balance<<" which is less than"<<minimum<<"\n 
your account is discharged by "<<service_charge<<"TK \n"<<" You must store 
"<<minimum<<"TK to avoid discharge \n "<<" Do you want to withdraw ? press 1 for yes 
press 0 for no \n"<<" what is your option ?";
int test;
cin>>test;
if(test==0)
balance+=w;
}
}
void cur_acct::display()
{
cout<<"\n Now balance = "<<balance<<"\n";
}
class sav_acct:public account
{
float balance;
int d,m,y;
public:
void deposite(float d);
void withdraw(float w);
void display();
void set_date(int a,int b,int c){d=a;m=b;y=c;}
void interest();
};
void sav_acct::deposite(float d)
{
int x,y,z;
cout<<" Enter today's date(i,e day,month,year) : ";
cin>>x>>y>>z;
set_date(x,y,z);
balance=d;
}
void sav_acct::withdraw(float w)
{
if(balance<w)
cout<<" sorry your balance is less than your withdrawal amount \n";
else
{
balance-=w;
if(balance<minimum)
{
cout<<"\n your current balance is :"<<balance<<" which is less than"<<minimum<<"\n 
98
99
100
101
102
103
104
105
106
107
108
109
110
111
112
113
114
115
116
117
118
119
120
121
122
123
124
125
126
127
128
129
130
131
132
133
134
135
136
137
138
139
140
141
142
143
144
145
146
147
148
your account is discharged by "<<service_charge<<"TK \n"<<" You must store 
"<<minimum<<"TK to avoid discharge \n "<<" Do you want to withdraw ? press 1 for yes 
press 0 for no \n"<<" what is your option ?";
int test;
cin>>test;
if(test==0)
balance+=w;
}
}
}
void sav_acct::display()
{
cout<<"\n Now balance = "<<balance;
}
void sav_acct::interest()
{
int D[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int d1,y1,m1;
cout<<" Enter today's date :(i,e day,month,year) ";
cin>>d1>>m1>>y1;
int iday,fday;
iday=d;
fday=d1;
for(int i=0;i<m1;i++)
{
fday+=D[i];
}
for(i=0;i<m;i++)
{
iday+=D[i];
}
int tday;
tday=fday-iday;
float ty;
ty=float(tday)/365+y1-y;
float intrst;
intrst=ty*r*balance;
cout<<" Interest is : "<<intrst<<"\n";
balance+=intrst;
}
int main()
{
sav_acct santo;
santo.creat("savings");
float d;
cout<<" Enter your deposit amount : ";
cin>>d;
149
150
151
152
153
154
155
156
157
158
159
160
santo.deposite(d);
santo.display();
int t;
cout<<"\n press 1 to see your interest : \n"
<<" press 0 to skip : ";
cin>>t;
if(t==1)
santo.interest();
cout<<"\n Enter your withdrawal amount :";
float w;
cin>>w;
santo.withdraw(w);
santo.display();
return 0;
}
output
Enter customer name :Rimo
Enter account number :10617
Enter your deposit amount : 10000
Enter today’s date(i,e day,month,year) : 13 7 2010
Now balance = 10000
press 1 to see your interest :
press 0 to skip : 1
Enter today’s date :(i,e day,month,year) 15 8 2010
Interest is : 135.61644
Enter your withdrawal amount :500
Now balance = 9635.616211
8.2: Modify the program of exercise 8.1 to include constructors for all three classes.
Solution:
1
2
3
4
5
6
7
8
#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#define minimum 500
#define service_charge 100
#define r 0.15
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
class account
{
protected:
char name[100];
int ac_number;
char ac_type[100];
public:
account( char *n,char *t,int no);
};
account::account(char *n,char *t,int no)
{
strcpy(name,n);
strcpy(ac_type,t);
ac_number=no;
}
class cur_acct: public account
{
private:
float balance,d,w;
public:
void withdraw(float ww);
void deposit(float d){balance=d;}
cur_acct(char *n,char *t,int number,float dp,float wd):
account(n,t,number)
{
d=dp;
w=wd;
deposit(d);
withdraw(w);
}
void display();
};
void cur_acct::withdraw(float ww)
{
if(balance<ww)
cout<<" sorry your balance is less than your withdrawal amount \n";
else
{
balance-=ww;
if(balance<minimum)
{
cout<<"\n your current balance is :"<<balance<<" which is less than"<<minimum<<"\n your 
account is discharged by "<<service_charge<<"TK \n"<<" You must store 
"<<minimum<<"TK to avoid discharge \n "<<" Do you want to withdraw ? press 1 for yes 
press 0 for no \n"<<" what is your option ?";
int test;
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
100
101
102
103
104
105
106
107
108
109
110
cin>>test;
if(test==0)
balance+=w;
}
else
;
}
}
void cur_acct::display()
{
cout<<"\n Now balance = "<<balance<<"\n";
}
class sav_acct:public account
{
float balance;
int d,m,y;
public:
void deposite(float d){balance=d;set_date();}
void withdraw(float w);
void display();
void set_date(){d=12;m=1;y=2010;}
void interest();
sav_acct(char *n,char *t,int number,float dp,float wd):
account(n,t,number)
{
float d,w;
d=dp;
w=wd;
deposite(d);
interest();
withdraw(w);
}
};
void sav_acct::withdraw(float w)
{
if(balance<w)
cout<<" sorry your balance is less than your withdrawal amount \n";
else
{
balance-=w;
if(balance<minimum)
{
cout<<"\n your current balance is :"<<balance<<" which is less than"<<minimum<<"\n your 
account is discharged by "<<service_charge<<"TK \n"<<" You must store 
"<<minimum<<"TK to avoid discharge \n "<<" Do you want to withdraw ? press 1 for yes 
press 0 for no \n"<<" what is your option ?";
int test;
cin>>test;
if(test==0)
111
112
113
114
115
116
117
118
119
120
121
122
123
124
125
126
127
128
129
130
131
132
133
134
135
136
137
138
139
140
141
142
143
144
145
146
147
148
149
150
151
152
153
154
155
156
157
158
159
160
161
balance+=w;
}
else
;
}
}
void sav_acct::display()
{
cout<<"\n Now balance = "<<balance;
}
void sav_acct::interest()
{
int D[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int d1,y1,m1;
cout<<" Enter today's date :(i,e day,month,year) ";
cin>>d1>>m1>>y1;
int iday,fday;
iday=d;
fday=d1;
for(int i=0;i<m1;i++)
{
fday+=D[i];
}
for(i=0;i<m;i++)
{
iday+=D[i];
}
int tday;
tday=fday-iday;
float ty;
ty=float(tday)/365+y1-y;
balance=balance*pow((1+r),ty);
}
int main()
{
float d;
cout<<" Enter customer name :";
char name[100];
gets(name);
cout<<" Enter account number :";
int number;
cin>>number;
cout<<" Enter your deposit amount : ";
cin>>d;
cout<<" Enter your withdrawal amount :";
float w;
cin>>w;
//cur_acct s("current",name,number,d,w);
//s.display();
sav_acct c("savings",name,number,d,w);
c.display();
return 0;
}
output
Enter customer name :mehedi
Enter account number :1457
Enter your deposit amount : 5000
Enter your withdrawal amount :1200
Enter today’s date :(i,e day,month,year) 13 7 2010
Now balance = 4160.875977
8.3: An educational institution wishes to maintain a database of its employees. The database 
is divided into a number of classes whose hierarchical relationships are shown in following 
figure. The figure also shows the minimum information required for each class. Specify all 
classes and define functions to create the database and retrieve individual information as 
and when required.
Solution:
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
#include<iostream.h>
#include<iomanip.h>
#include<string.h>
class staff
{
public:
int code;
char name[100];
public:
void set_info(char *n,int c)
{
strcpy(name,n);
code=c;
}
};
class teacher : public staff
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
{
protected:
char sub[100],publication[100];
public:
void set_details(char *s,char *p)
{
strcpy(sub,s);strcpy(publication,p);
}
void show()
{
cout<<"name"<<setw(8)<<"code"<<setw(15)<<"subject"<<setw(25)
<<"publication"<<endl<<name<<setw(8)<<code<<setw(25)<<sub<<setw(22)<<publication<<endl;
}
};
class officer:public staff
{
char grade[100];
public:
void set_details(char *g)
{
strcpy(grade,g);
}
void show()
{
cout<<" name "<<setw(15)<<"code"<<setw(15)<<"Category "<<endl
<<name<<setw(10)<<code<<setw(15)<<grade<<endl;
}
};
class typist: public staff
{
protected:
float speed;
public:
void set_speed(float s)
{
speed=s;
}
};
class regular:public typist
{
protected:
float wage;
public:
void set_wage(float w){wage=w;}
void show()
{
cout<<"name"<<setw(16)<<"code"<<setw(15)<<"speed"<<setw(15)
<<"wage"<<endl<<name<<setw(10)<<code<<setw(15)<<speed
<<setw(15)<<wage<<endl;
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
100
101
102
103
104
105
106
107
108
109
110
111
112
113
114
115
116
}
};
class causal:public typist
{
float wage;
public:
void set_wage(float w){wage=w;}
void show()
{
cout<<"name"<<setw(16)<<"code"<<setw(15)<<"speed"<<setw(15)
<<"wage"<<endl<<name<<setw(10)<<code<<setw(15)<<speed
<<setw(15)<<wage<<endl;
}
};
int main()
{
teacher t;
t.set_info("Ataur",420);
t.set_details("programming with c++"," Tata McGraw Hill");
officer o;
o.set_info("Md. Rashed",222);
o.set_details("First class");
regular rt;
rt.set_info("Robiul Awal",333);
rt.set_speed(85.5);
rt.set_wage(15000);
causal ct;
ct.set_info("Kawser Ahmed",333);
ct.set_speed(78.9);
ct.set_wage(10000);
cout<<" About teacher: "<<endl;
t.show();
cout<<" About officer:"<<endl;
o.show();
cout<<" About regular typist :"<<endl;
rt.show();
cout<<" About causal typist :"<<endl;
ct.show();
return 0;
}
output
About teacher:
name code subject publication
Ataur 420 programming with c++ Tata McGraw Hill
About officer:
name code Category
Md. Rashed 222 First class
About regular typist :
name code speed wage
Robiul Awal 333 85.5 15000
About causal typist :
name code speed wage
Kawser Ahmed 333 78.900002 10000
8.4: The database created in exercise 8.3 does not include educational information of the 
staff. It has been decided to add this information to teachers and officers (and not for typists) 
which will help management in decision making with regard to training, promotions etc. 
Add another data class called education that holds two pieces of educational information 
namely highest qualification in general education and highest professional qualification. 
This class should be inherited by the classes teacher and officer. Modify the program of 
exercise 8.19 to incorporate these additions.
Solution:
1
2
3
4
5
6
7
8
9
10
11
12
13
14
#include<iostream.h>
#include<iomanip.h>
#include<string.h>
class staff
{
protected:
int code;
char name[100];
public:
void set_info(char *n,int c)
{
strcpy(name,n);
code=c;
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
}
};
class education:public staff
{
protected:
char quali[100];
public:
void set_qualification(char *q){strcpy(quali,q);}
};
class teacher : public education
{
protected:
char sub[100],publication[100];
public:
void set_details(char *s,char *p)
{
strcpy(sub,s);strcpy(publication,p);
}
void show()
{
cout<<" name "<<setw(8)<<"code"<<setw(15)
<<"subject"<<setw(22)<<"publication"
<<setw(25)<<"qualification"<<endl
<<name<<setw(8)<<code<<setw(25)
<<sub<<setw(18)<<publication<<setw(25)<<quali<<endl;
}
};
class officer:public education
{
char grade[100];
public:
void set_details(char *g)
{
strcpy(grade,g);
}
void show()
{
cout<<" name "<<setw(15)<<"code"<<setw(15)<<"Catagory "
<<setw(22)<<"Qualification"<<endl<<name<<setw(10)
<<code<<setw(15)<<grade<<setw(25)<<quali<<endl<<endl;
}
};
class typist: public staff
{
protected:
float speed;
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
100
101
102
103
104
105
106
107
108
109
110
111
112
113
114
115
116
public:
void set_speed(float s)
{
speed=s;
}
};
class regular:public typist
{
protected:
float wage;
public:
void set_wage(float w){wage=w;}
void show()
{
cout<<" name "<<setw(16)<<"code"<<setw(15)<<"speed"
<<setw(15)<<"wage"<<endl<<name<<setw(10)<<code
<<setw(15)<<speed<<setw(15)<<wage<<endl<<endl;
}
};
class causal:public typist
{
float wage;
public:
void set_wage(float w){wage=w;}
void show()
{
cout<<" name "<<setw(16)<<"code"<<setw(15)<<"speed"
<<setw(15)<<"wage"<<endl<<name<<setw(10)<<code
<<setw(15)<<speed<<setw(15)<<wage<<endl<<endl;
}
};
int main()
{
teacher t; t.set_info("Ataur",420);
t.set_details("programming with c++"," Tata McGraw Hill");
t.set_qualification("PHD from programming ");
officer o;
o.set_info("Md. Rashed",222);
o.set_details("First class");
o.set_qualification("2 years experienced");
regular rt;
rt.set_info("Robiul Awal",333);
rt.set_speed(85.5);
rt.set_wage(15000)
117
118
119
120
121
122
123
124
125
126
127
128
129
130
131
132
133
134
causal ct;
ct.set_info("Kawser Ahmed",333);
ct.set_speed(78.9);
ct.set_wage(10000);
cout<<" About teacher: "<<endl;
t.show();
cout<<" About officer:"<<endl;
o.show();
cout<<" About regular typist :"<<endl;
rt.show();
cout<<" About causal typist :"<<endl;
ct.show();
return 0;
}
output
About teacher:
name code subject publication qualification
Ataur 420 programming with c++ Tata McGraw Hill PHD from programmingAbout officer:
name code Catagory Qualification
Md. Rashed 222 First class 2 years experienced
About regular typist :
name code speed wage
Robiul Awal 333 85.5 15000
About causal typist :
name code speed wage
Kawser 333 78.900002 10000
8.5: Consider a class network of the following figure. The class master derives information 
from both account and admin classes which in turn derives information from the class 
person. Define all the four classes and write a program to create, update and display the 
information contained in master objects.
Solution:
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
#include<iostream.h>
#include<iomanip.h>
#include<string.h>
class staff
{
protected:
int code;
char name[100];
public:
void set_info(char *n,int c)
{
strcpy(name,n);
code=c;
}
};
class education:public staff
{
protected:
char quali[100];
public:
void set_qualification(char *q){strcpy(quali,q);}
};
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
class teacher : public education
{
protected:
char sub[100],publication[100];
public:
void set_details(char *s,char *p)
{
strcpy(sub,s);strcpy(publication,p);
}
void show()
{
cout<<"name"<<setw(8)<<"code"<<setw(15)<<"subject"<<setw(22)
<<"publication"<<setw(25)<<"qualification"<<endl<<name<<setw(8)
<<code<<setw(25)<<sub<<setw(18)<<publication<<setw(25)<<quail
<<endl;
}
};
class officer:public education
{
char grade[100];
public:
void set_details(char *g)
{
strcpy(grade,g);
}
void show()
{
cout<<"name"<<setw(15)<<"code"<<setw(15)<<"Catagory"
<<setw(22)<<"Qualification"<<endl<<name<<setw(10)
<<code<<setw(15)<<grade<<setw(25)<<quali<<endl<<endl;
}
};
class typist: public staff
{
protected:
float speed;
public:
void set_speed(float s)
{
speed=s;
}
};
class regular:public typist
{
protected:
float wage;
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
100
101
102
103
104
105
106
107
108
109
110
111
112
113
114
115
116
117
118
119
120
121
122
123
124
125
126
127
public:
void set_wage(float w){wage=w;}
void show()
{
cout<<"name"<<setw(16)<<"code"<<setw(15)<<"speed"<<setw(15)
<<"wage"<<endl<<name<<setw(10)<<code<<setw(15)<<speed
<<setw(15)<<wage<<endl<<endl;
}
};
class causal:public typist
{
float wage;
public:
void set_wage(float w){wage=w;}
void show()
{
cout<<"name"<<setw(16)<<"code"<<setw(15)<<"speed"<<setw(15)
<<"wage"<<endl<<name<<setw(10)<<code<<setw(15)<<speed
<<setw(15)<<wage<<endl<<endl;
}
};
int main()
{
teacher t;
t.set_info("Ataur",420);
t.set_details("programming with c++"," Tata McGraw Hill");
t.set_qualification("PHD from programming ");
officer o;
o.set_info("Md. Rashed",222);
o.set_details("First class");
o.set_qualification("2 years experienced");
regular rt;
rt.set_info("Robiul Awal",333);
rt.set_speed(85.5);
rt.set_wage(15000);
causal ct;
ct.set_info("Kawser Ahmed",333);
ct.set_speed(78.9);
ct.set_wage(10000);
cout<<" About teacher: "<<endl;
t.show();
cout<<" About officer:"<<endl;
o.show();
cout<<" About regular typist :"<<endl;
rt.show();
cout<<" About causal typist :"<<endl;
ct.show();
128
129
130
return 0;
}
output
name code Experience payment
Hasibul 111 3 years 1500tk
8.6: In exercise 8.3 the classes teacher, officer, and typist are derived from the class staff. As 
we know we can use container classes in place of inheritance in some situations. Redesign 
the program of exercise 8.3 such that the classes teacher, officer and typist contain the 
objects of staff.
Solution:
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
#include<iostream.h>
#include<iomanip.h>
#include<string.h>
class staff
{
public:
int code;
char name[100];
public:
void set_info(char *n,int c)
{
strcpy(name,n);
code=c;
}
};
class teacher : public staff
{
protected:
char sub[100],publication[100];
public:
void set_details(char *s,char *p)
{
strcpy(sub,s);strcpy(publication,p);
}
void show()
{
cout<<"name"<<setw(8)<<"code"<<setw(15)<<"subject"<<setw(25)
<<"publication"<<endl<<name<<setw(8)<<code<<setw(25)<<sub
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
<<setw(22)<<publication<<endl;
}
};
class officer:public staff
{
char grade[100];
public:
void set_details(char *g)
{
strcpy(grade,g);
}
void show()
{
cout<<" name "<<setw(15)<<"code"<<setw(15)<<"Catagory "<<endl
<<name<<setw(10)<<code<<setw(15)<<grade<<endl;
}
};
class typist: public staff
{
protected:
float speed;
public:
void set_speed(float s)
{
speed=s;
}
void show()
{
cout<<" name "<<setw(15)<<"code"<<setw(15)<<"speed"<<endl
<<name<<setw(10)<<code<<setw(15)<<speed<<endl<<endl;
}
};
int main()
{
teacher t;
t.set_info("Ataur",420);
t.set_details("programming with c++"," Tata McGraw Hill");
officer o;
o.set_info("Md. Rashed",222);
o.set_details("First class");
typist tp;
tp.set_info("Robiul Awal",333);
tp.set_speed(85.5);
cout<<" About teacher: "<<endl;
82
83
84
85
86
87
88
t.show();
cout<<" About officer:"<<endl;
o.show();
cout<<" About typist :"<<endl;
tp.show();
return 0;
}
output
About teacher:
name code subject publication
Ataur 420 programming with c++ Tata McGraw Hill
About officer:
name code Catagory
Md. Rashed 222 First class
About typist :
name code speed
Robiul Awal 333 85.5
8.7: We have learned that OOP is well suited for designing simulation programs. Using the 
techniques and tricks learned so far, design a program that would simulate a simple realworld system familiar to you
Solution:
1
2
3
4
5
6
7
8
9
10
11
12
#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<iomanip.h>
#include<conio.h>
char *sub[10]={"Bangla 1st paper","Bangla 2nd paper","English 1st paper",
"English 2nd paper","Mathematics","Religion",
"Physics","Chemistry","Sociology","Higher Mathematics"};
class student_info
{
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
public:
char name[40];
char roll[20];
public:
void set_info();
};
void student_info::set_info()
{
cout<<"Enter student name : ";
gets(name);
cout<<"Enter roll: ";
gets(roll);
}
class subject :public student_info
{
public:
float mark[10];
public:
void set_mark();
};
void subject::set_mark()
{
cout<<" marks of : \n";
for(int i=0;i<10;i++)
{
cout<<sub[i]<<" = ? ";
cin>>mark[i];
}
}
class conversion :public subject
{
float gpa[10];
char grade[20][20];
public:
void convert_to_gpa();
void show();
};
void conversion::convert_to_gpa()
{
for(int i=0;i<10;i++)
{
if(mark[i]>=80)
{
gpa[i]=5.00;
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
100
101
102
103
104
105
106
107
108
109
110
111
112
113
114
strcpy(grade[i],"A+");
}
else if(mark[i]>=70 && mark[i]<80)
{
gpa[i]=4.00;
strcpy(grade[i],"A");
}
else if(mark[i]>=60 && mark[i]<70)
{
gpa[i]=3.50;
strcpy(grade[i],"A-");
}
else if(mark[i]>=50 && mark[i]<60)
{
gpa[i]=3.00;
strcpy(grade[i],"B");
}
else if(mark[i]>=40 && mark[i]<50)
{
gpa[i]=2.00;
strcpy(grade[i],"C");
}
else if(mark[i]>=33 && mark[i]<40)
{
gpa[i]=1.00;
strcpy(grade[i],"D");
}
else
{
gpa[i]=0.00;
strcpy(grade[i],"Fail");
}
}
}
void conversion::show()
{
cout<<" result of \n";
cout<<"name :"<<name<<"\n";
cout<<"Roll : "<<roll<<"\n";
cout<<setw(25)<<"Subject"<<setw(17)<<"Marks"
<<setw(14)<<"GPA"<<setw(12)<<"Grade \n";
for(int i=0;i<10;i++)
{
cout<<setw(25)<<sub[i]<<setw(15)<<mark[i]
<<setw(15)<<gpa[i]<<setw(10)<<grade[i]<<"\n";
}
}
int main()
{
clrscr();
115
116
117
118
119
120
121
122
conversion A;
A.set_info();
A.set_mark();
A.convert_to_gpa();
A.show();
getch();
return 0;
}
output
Enter student name : santo
Enter roll: 156271
marks of :
Bangla 1st paper = ? 74
Bangla 2nd paper = ? 87
English 1st paper = ? 45
English 2nd paper = ? 56
Mathematics = ? 87
Religion = ? 59
Physics = ? 75
Chemistry = ? 65
Sociology = ? 39
Higher Mathematics = ? 86
result of
name :santo
Roll : 156271
Subject Marks GPA Grade
Bangla 1st paper 74 4 A
Bangla 2nd paper 87 5 A+
English 1st paper 45 2 C
English 2nd paper 56 3 B
Mathematics 87 5 A+
Religion 59 3 B
Physics 75 4 A
Chemistry 65 3.5 ASociology 39 1 D
Higher Mathematics 86 5 A+
//////////////////////////2//////////////////////
Create a base class called shape. Use this class to store two double type values that 
could be used to compute the area of figures. Derive two specific classes called triangle and 
rectangle from the base shape. Add to the base class, a member function get_data() to 
initialize base class data members and another member function display_area() to compute 
and display the area of figures. Make display_area() as a virtual function and redefine this 
function in the derived classes to suit their requirements.
Using these three classes, design a program that will accept dimensions of a triangle or a 
rectangle interactively, and display the area.
Remember the two values given as input will be treated as lengths of two sides in the case of 
rectangles and as base and height in the case of triangles, and used as follows:
Area of rectangle = x * y
Area of triangle = ½ * x * y
Solution:
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
#include<iostream.h>
#include<iomanip.h>
class shape
{
public:
double x,y;
public:
void get_data()
{
cin>>x>>y;
}
double get_x(){return x;}
double get_y(){return y;}
virtual void display_area(){}
};
class triangle:public shape
{
public:
void display_area()
{
double a;
a=(x*y)/2;
cout<<" Area of triangle = "<<a<<endl;
}
};
class rectangle:public shape
{
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
public:
void display_area()
{
double a;
a=x*y;
cout<<" Area of rectangle = "<<a<<endl;
}
};
int main()
{
shape *s[2];
triangle t;
s[0]=&t;
rectangle r;
s[1]=&r;
cout<<" Enter the value of x & y for triangle: ";
s[0]->get_data();
cout<<" Enter the value of x & y for rectangle: ";
s[1]->get_data();
s[0]->display_area();
s[1]->display_area();
return 0;
}
output
Enter the value of x & y for triangle: 12 26
Enter the value of x & y for rectangle: 24 14
Area of triangle = 156
Area of rectangle = 336
9.2: Extend the above program to display the area of circles. This requires addition of a 
new derived class ‘circle’ that computes the area of a circle. Remember, for a circle we need 
only one value, its radius, but the get_data() function in base class requires two values to be 
passed.(Hint: Make the second argument of get_data() function as a default one with zero 
value.)
Solution:
1
2
3
4
#include<iostream.h>
#include<iomanip.h>
#define pi 3.1416
class shape
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
{
public:
double x,y;
public:
void get_data(double a,double b)
{
x=a;
y=b;
}
double get_x(){return x;}
double get_y(){return y;}
virtual void display_area(){}
};
class triangle:public shape
{
public:
void display_area()
{
double a;
a=(x*y)/2;
cout<<" Area of triangle = "<<a<<endl;
}
};
class rectangle:public shape
{
public:
void display_area()
{
double a;
a=x*y;
cout<<" Area of rectangle = "<<a<<endl;
}
};
class circle:public shape
{
public:
void display_area()
{
double a;
a=pi*x*x;
cout<<" Area of circle = "<<a<<endl;
}
};
int main()
{
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
shape *s[3];
triangle t;
s[0]=&t;
rectangle r;
s[1]=&r;
circle c;
s[2]=&c;
double x,y;
cout<<" Enter the value of x & y for triangle: ";
cin>>x>>y;
s[0]->get_data(x,y);
cout<<" Enter the value of x & y for rectangle: ";
cin>>x>>y;
s[1]->get_data(x,y);
cout<<" Enter the radius of circle : ";
double rd;
cin>>rd;
s[2]->get_data(rd,0);
cout<<endl<<endl;
s[0]->display_area();
s[1]->display_area();
s[2]->display_area();
return 0;
}
output
Enter the value of x & y for triangle: 10 24
Enter the value of x & y for rectangle: 14 23
Enter the radius of circle : 12
Area of triangle = 120
Area of rectangle = 322
Area of circle = 452.3904
9.3: Run the program above with the following modifications:
(a) Remove the definition of display_area() from one of the derived
classes.
(b) In addition to the above change, declare the display_area() as
virtual in the base class shape.
Comment on the output in each case.
Solution:
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
#include<iostream.h>
#include<iomanip.h>
#define pi 3.1416
class shape
{
public:
double x,y;
public:
void get_data(double a,double b)
{
x=a;
y=b;
}
double get_x(){return x;}
double get_y(){return y;}
virtual void display_area(){}
};
class triangle:public shape
{
public:
void display_area()
{
double a;
a=(x*y)/2;
cout<<" Area of triangle = "<<a<<endl;
}
};
class rectangle:public shape
{
public:
void display_area()
{
double a;
a=x*y;
cout<<" Area of rectangle = "<<a<<endl;
}
};
class circle:public shape
{
public:
void display_area()
{
double a;
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
a=pi*x*x;
cout<<" Area of circle = "<<a<<endl;
}
};
int main()
{
shape *s[3];
triangle t;
s[0]=&t;
rectangle r;
s[1]=&r;
circle c;
s[2]=&c;
double x,y;
cout<<" Enter the value of x & y for triangle: ";
cin>>x>>y;
s[0]->get_data(x,y);
cout<<" Enter the value of x & y for rectangle: ";
cin>>x>>y;
s[1]->get_data(x,y);
cout<<" Enter the radius of circle : ";
double rd;
cin>>rd;
s[2]->get_data(rd,0);
cout<<endl<<endl;
s[0]->display_area();
s[1]->display_area();
s[2]->display_area();
return 0;
}
output
Enter the value of x & y for triangle: 28 32
Enter the value of x & y for rectangle: 25 36
Enter the radius of circle : 20
Area of triangle = 448
Area of rectangle = 900
Area of circle = 1256.64
///////////////////
Write a program to read a list containing item name, item code, and cost interactively 
and produce a three column output as shown below.
Name Code Cost
Turbo C++ 1001 250.95
C primer 905 95.70
……………… ………… ……………
……………… ………… ……………
Note that the name and code are left-justified and the cost is right justified with a precision of two 
digits. Trailing zeros are shown.
Solution:
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
#include<iostream.h>
#include<iomanip.h>
#include<string.h>
class item
{
char name[40];
int code;
float cost;
public:
void get_data(char *n,int c,float co)
{
strcpy(name,n);
code=c;
cost=co;
}
void display();
};
void item:: display()
{
cout.precision(2);
cout.setf(ios::fixed,ios::floatfield);
cout.setf(ios::showpoint);
cout.setf(ios::left,ios::adjustfield);
cout<<setw(40)<<name<<code;
cout.setf(ios::right,ios::adjustfield);
cout<<setw(15)<<cost<<endl;
}
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
int main()
{
item a[5];
a[0].get_data("Tarbo C++",1001,250.95);
a[1].get_data("C primer",905,95.7);
a[2].get_data("algorithm",1111,120.5);
a[3].get_data("principle of electronics",2220,150.85);
a[4].get_data("solution of balagurusamy",6666,145.00);
cout<<setw(10)<<"name"<<setw(34)<<"code"<<setw(15)<<"cost"<<endl;
for(int i=0;i<60;i++)
cout<<"-";
cout<<endl;
for(i=0;i<5;i++)
a[i].display();
return 0;
}
output
name code cost
—————————————————————————————-
Tarbo C++ 1001 250.95
C Primer 905 95.70
algorithm 1111 120.50
Principle of electronics 2220 150.85
Solution of balaguruswamy 6666 145.00
10.2: Modify the above program to fill the unused spaces with hyphens.
Solution:
1
2
3
4
5
6
7
8
9
10
#include<iostream.h>
#include<iomanip.h>
#include<string.h>
class item
{
char name[40];
int code;
float cost;
public:
void get_data(char *n,int c,float co)
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
{
strcpy(name,n);
code=c;
cost=co;
}
void display();
};
void item:: display()
{
cout.precision(2);
cout.fill('-');
cout.setf(ios::fixed,ios::floatfield);
cout.setf(ios::showpoint);
cout.setf(ios::left,ios::adjustfield);
cout<<setw(40)<<name<<code;
cout.setf(ios::right,ios::adjustfield);
cout<<setw(15)<<cost<<endl;
}
int main()
{
item a[5];
a[0].get_data("Tarbo C++",1001,250.95);
a[1].get_data("C primer",905,95.7);
a[2].get_data("algorithm",1111,120.5);
a[3].get_data("principle of electronics",2220,150.85);
a[4].get_data("solution of balagurusamy",6666,145.00);
cout<<setw(10)<<"name"<<setw(34)<<"code"<<setw(15)<<"cost"<<endl;
for(int i=0;i<60;i++)
cout<<"-";
cout<<endl;
for(i=0;i<5;i++)
a[i].display();
return 0;
}
output
name code cost
—————————————————————————————-
Tarbo C++ ——————– 1001———–250.95
C Primer ———————-905————-95.70
algorithm———————-1111————120.50
Principle of electronics——2220———–150.85
Solution of balaguruswamy–6666——— 145.00
10.3: Write a program which reads a text from the keyboard and displays the following 
information on the screen in two columns:
(a) Number of lines
(b) Number of words
(c) Number of characters
Strings should be left-justified and numbers should be right-justified in a suitable field width.
Solution:
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
#include<iostream.h>
#include<iomanip.h>
#include<string.h>
#include<stdio.h>
int main()
{
char line[1000];
char ch;
int c;
int word,lines,chr;
word=0;
lines=0;
chr=0;
int end=0;
cout<<" Enter text : \n";
while(end==0)
{
c=0;
while((ch=getchar())!='\n')
line1=ch;
line1='\0';
if(line[0]=='\0')
break;
else
{
word++;
for(int i=0;line[i]!='\0';i++)
if(line[i]==' ' || line[i]=='\t' || line[i]=='\n')
word++;
}
lines++;
chr+=strlen(line);
}
35
36
37
38
39
40
41
42
cout.setf(ios::left,ios::adjustfield);
cout<<setw(25)<<"Number of lines"<<setw(25)
<<"Number of words "<<"Number of characters "<<endl;
cout.setf(ios::right,ios::adjustfield);
cout<<setw(10)<<lines<<setw(24)<<word<<setw(25)<<chr<<endl<<endl;
return 0;
}
output
Enter text :
santo reads in class five.
He always speak the truth.
He respects his teachers.
He feels shy when I admire him.
I like his morality.
Number of lines Number of words Number of characters
5 25 128
Note: If you press the Enter button two times, the program will terminate