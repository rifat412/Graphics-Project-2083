#include <iostream>
#include<graphics.h>
using namespace std;
void myFunction();
void myFunction2();
void flag();
void dora();
void ques();
void varsity();
void arrow();
void emoji();
void minar();
void football();
void book();
void boat();

void myFunction1()
{
    cout << "\n-----------";
    cout << "\n| Context |";
    cout << "\n-----------"<<endl;
    cout << "\n1. National Flag"<<endl;
    cout << "\n2. Emoji"<<endl;
    cout << "\n3. Doremon"<<endl;
    cout << "\n4. Sonargaon University"<<endl;
    cout << "\n5. Running Arrow"<<endl;
    cout << "\n6. Shaheed Minar"<<endl;
    cout << "\n7. Football"<<endl;
    cout << "\n8. Book of Graphics"<<endl;
    cout << "\n9. Boat"<<endl;
    cout << "\n10. Sessional Final Question Answer"<<endl;
    cout << "\nNote: Enter 0 to terminate."<<endl;
}

int main()
{
    myFunction();
    int x;
    while(x!=0)
    {
        myFunction1();
        cout<<"\nInput: ";
        cin>>x;
        if(x!=0&&x!=1&&x!=2&&x!=3&&x!=4&&x!=5&&x!=6&&x!=7&&x!=8&&x!=9&&x!=10)
            cout<<"\nInvalid Input! Please enter the valid number."<<endl;
        else
            switch (x)
            {
            case 1:
                flag();
                break;
            case 2:
                emoji();
                break;
            case 3:
                dora();
                break;
            case 4:
                varsity();
                break;
            case 5:
                arrow();
                break;
            case 6:
                minar();
                break;
            case 7:
                football();
                break;
            case 8:
                book();
                break;
            case 9:
                boat();
                break;
            case 10:
                ques();
                break;
            case 0:
                myFunction2();
                break;
            }
    }
    return 0;
}

void myFunction()
{
    cout << "           Sonargaon University(SU)                  "<<endl;
    cout << "\n  Department of Computer Science and Engineering   "<<endl;
    cout << "\nB. Sc Engineering in Computer Science and Engineering"<<endl;
    cout << "\nCourse title: Computer Graphics   Course code: CSE413"<<endl;
    cout << "\nSection: 22A                       Session: Spring-24"<<endl;
}

void myFunction2()
{
    cout << "\nThank you for your patience.\n"<<endl;
    cout << "-------------------------------------------------"<<endl;
    cout << "| Presented to- "<<"         |    Presented by-     |"<<endl;
    cout << "| Nabila Anwar"<<"           |    Rifat             |"<<endl;
    cout << "| Designation: Lecturer"<<"  |    ID: CSE2101022083 |"<<endl;
    cout << "-------------------------------------------------"<<endl;
    cout << "Submission Date: March 21, 2024"<<endl;
}

void flag()
{
    initwindow(600,400,"National Flag of Bangladesh");
    setcolor(9);
    setfillstyle(1,9);
    line(0,150,600,100);
    floodfill(1,100,9);

    setcolor(10);
    setfillstyle(1,2);
    ellipse(200,100,0,180,50,10);
    ellipse(300,100,180,360,50,10);
    ellipse(200,200,0,180,50,10);
    ellipse(300,200,180,360,50,10);
    line(150,100,150,200);
    line(350,100,350,200);
    floodfill(151,101,10);

    setcolor(RED);
    setfillstyle(1,4);
    circle(250,150,35);
    floodfill(251,151,RED);

    setcolor(4);
    setfillstyle(1,4);
    rectangle(0,290,600,400);
    floodfill(10,325,4);

    setcolor(8);
    setfillstyle(1,8);
    rectangle(130,70,150,300);
    floodfill(131,71,8);

    setfillstyle(1,8);
    ellipse(140,66,0,360,19,5);
    floodfill(141,67,8);

    setfillstyle(1,8);
    ellipse(140,305,360,0,25,5);
    floodfill(141,301,8);

    setfillstyle(1,8);
    ellipse(140,312,0,360,30,5);
    floodfill(139,311,8);

    setfillstyle(1,8);
    ellipse(140,319,0,360,35,5);
    floodfill(141,320,8);
    int i;
    while(1)
    {
        for (i = 0; i < 600; i++)
        {
            outtextxy(0+i,340,"National Flag of Bangladesh ");
            delay(10);
        }
    }

    getch();
    closegraph();
}

void dora()
{
    initwindow(400,400,"Doremon");
    setcolor(BLUE);
    setfillstyle(1,LIGHTBLUE);
    ellipse(200,180,0,360,180,160);
    floodfill(200,100,BLUE);
    setcolor(WHITE);
    setfillstyle(1,WHITE);
    ellipse(200,230,0,360,135,110);
    floodfill(201,200,WHITE);
    setcolor(RED);
    setfillstyle(1,RED);
    ellipse(200,355,0,360,190,15);
    floodfill(200,355,RED);
    setcolor(YELLOW);
    setfillstyle(1,YELLOW);
    ellipse(200,385,0,360,15,15);
    floodfill(200,385,YELLOW);
    setcolor(BLACK);
    setfillstyle(1,WHITE);
    ellipse(229,120,0,360,30,50);
    floodfill(229,120,BLACK);
    setcolor(BLACK);
    setfillstyle(1,WHITE);
    ellipse(171,120,0,360,30,50);
    floodfill(171,120,BLACK);
    setcolor(BLACK);
    setfillstyle(1,BLACK);
    ellipse(225,150,0,360,10,15);
    floodfill(225,150,BLACK);
    setcolor(BLACK);
    setfillstyle(1,BLACK);
    ellipse(175,150,0,360,10,15);
    floodfill(175,150,BLACK);
    setcolor(RED);
    ellipse(200,240,180,360,70,40);
    setcolor(RED);
    setfillstyle(1,RED);
    ellipse(200,180,0,360,17,17);
    floodfill(200,180,RED);
    setcolor(RED);
    line(200,190,200,280);
    line(230,200,350,170);
    line(230,210,350,210);
    line(230,220,350,250);
    line(170,200,50,170);
    line(170,210,50,210);
    line(170,220,50,250);
    getch();
    closegraph();
}

void ques()
{
    initwindow(550,400,"Lab Final-Fish");

    setcolor(15);
    setfillstyle(1,1);
    ellipse(250,200,0,360,150,60);
    floodfill(251,201,15);

    setfillstyle(1,14);
    ellipse(350,200,90,270,70,45);
    floodfill(349,201,15);

    setfillstyle(1,4);
    ellipse(370,200,0,360,10,15);
    floodfill(371,201,15);

    circle(420,200,15);
    circle(470,200,9);
    ellipse(450,180,0,360,8,10);
    ellipse(450,215,0,360,5,7);

    setcolor(15);
    setfillstyle(1,4);
    line(290,142,180,50);
    line(240,140,180,50);
    floodfill(250,125,15);

    setcolor(15);
    setfillstyle(1,4);
    line(290,258,180,350);
    line(240,260,180,350);
    floodfill(250,265,15);

    setcolor(15);
    setfillstyle(1,4);
    line(108,180,60,170);
    line(60,170,75,200);
    line(108,220,60,230);
    line(60,230,75,200);
    floodfill(65,175,15);

    getch();
    closegraph();
}

void varsity()
{
    initwindow(600,400,"University");

    setcolor(15);
    rectangle(30,130,570,150);
    setfillstyle(1,7);
    floodfill(31,131,WHITE);

    rectangle(50,150,550,350);
    setfillstyle(1,4);
    floodfill(51,151,WHITE);

    setcolor(15);
    line(150,150,300,30);
    line(450,150,300,30);
    setfillstyle(1,WHITE);
    floodfill(155,147,15);
    floodfill(300,35,15);
    outtextxy(225,100," Sonargaon University ");
    rectangle(145,150,455,170);
    setfillstyle(1,0);
    floodfill(146,151,WHITE);

    rectangle(150,170,200,180);
    setfillstyle(1,15);
    floodfill(151,171,WHITE);
    rectangle(150,190,200,310);
    setfillstyle(1,15);
    floodfill(151,191,WHITE);
    rectangle(100,190,140,240);
    setfillstyle(1,0);
    floodfill(101,191,WHITE);
    rectangle(100,250,140,310);
    setfillstyle(1,0);
    floodfill(101,251,WHITE);
    rectangle(60,190,90,240);
    setfillstyle(1,0);
    floodfill(61,191,WHITE);
    rectangle(60,250,90,310);
    setfillstyle(1,0);
    floodfill(61,251,WHITE);

    rectangle(460,190,500,240);
    setfillstyle(1,0);
    floodfill(461,191,WHITE);
    rectangle(460,250,500,310);
    setfillstyle(1,0);
    floodfill(461,251,WHITE);
    rectangle(510,190,540,240);
    setfillstyle(1,0);
    floodfill(511,191,WHITE);
    rectangle(510,250,540,310);
    setfillstyle(1,0);
    floodfill(511,251,WHITE);

    rectangle(150,320,200,330);
    setfillstyle(1,15);
    floodfill(151,321,WHITE);
    rectangle(240,170,290,180);
    setfillstyle(1,15);
    floodfill(241,171,WHITE);
    rectangle(240,190,290,310);
    setfillstyle(1,15);
    floodfill(241,191,WHITE);
    rectangle(240,320,290,330);
    setfillstyle(1,15);
    floodfill(241,321,WHITE);
    rectangle(330,170,380,180);
    setfillstyle(1,15);
    floodfill(331,171,WHITE);
    rectangle(330,190,380,310);
    setfillstyle(1,15);
    floodfill(331,191,WHITE);
    rectangle(330,320,380,330);
    setfillstyle(1,15);
    floodfill(331,321,WHITE);
    rectangle(420,170,450,180);
    setfillstyle(1,15);
    floodfill(421,171,WHITE);
    rectangle(420,190,450,310);
    setfillstyle(1,15);
    floodfill(421,191,WHITE);
    rectangle(420,320,450,330);
    setfillstyle(1,15);
    floodfill(421,321,WHITE);
    rectangle(145,330,455,350);
    setfillstyle(1,0);
    floodfill(146,331,WHITE);

    rectangle(30,350,570,370);
    setfillstyle(1,7);
    floodfill(31,351,WHITE);

    getch();
    closegraph();
}
void arrow()
{
     initwindow(600,400,"Arrow");
    setcolor(15);
    int i;
    while(1)
    {
        for (i = 0; i < 400; i++)
        {
            ellipse(100,200,270,90,100,150);
            ellipse(150,200,90,270,120,130);

            line(30+i,200,250+i,200);
            line(30+i,200,20+i,180);
            line(30+i,200,20+i,220);
            line(250+i,200,220+i,170);
            line(250+i,200,220+i,230);

            circle(500,200,20);
            setfillstyle(1,RED);
            floodfill(501,201,15);
            circle(500,200,40);
            setfillstyle(1,YELLOW);
            floodfill(521,221,15);
            circle(500,200,60);
            setfillstyle(1,BLUE);
            floodfill(541,241,15);
            circle(500,200,80);
            circle(500,200,99);
            delay(10);
            cleardevice();
        }
    }
   getch();
    closegraph();
}

void emoji()
{
    initwindow(400,400,"Emoji");

    setcolor(15);
    setfillstyle(1,YELLOW);
    circle(90,90,80);//1
    floodfill(91,91,15);
    setcolor(15);
    ellipse(60,70,360,180,10,30);
    line(50,70,70,70);
    setfillstyle(1,RED);
    floodfill(62,69,15);
    ellipse(120,70,360,180,10,30);
    line(110,70,130,70);
    setfillstyle(1,RED);
    floodfill(122,69,15);
    circle(120,85,10);
    setfillstyle(1,9);
    floodfill(121,86,15);
    circle(120,105,5);
    setfillstyle(1,9);
    floodfill(121,106,15);
    ellipse(90,120,180,360,50,30);
    line(40,120,140,120);
    setfillstyle(1,RED);
    floodfill(91,121,15);

    circle(300,90,80);//2
    setfillstyle(1,YELLOW);
    floodfill(301,91,15);
    ellipse(270,70,360,180,10,30);
    line(260,70,280,70);
    setfillstyle(1,RED);
    floodfill(261,69,15);
    ellipse(330,70,360,180,10,30);
    line(320,70,340,70);
    setfillstyle(1,RED);
    floodfill(321,69,15);

    ellipse(300,120,360,180,50,30);
    ellipse(300,120,360,180,55,10);
    setfillstyle(1,RED);
    floodfill(301,109,15);

    circle(90,280,80);//3
    setfillstyle(1,YELLOW);
    floodfill(91,285,15);
    ellipse(90,280,180,360,60,50);
    line(30,280,150,280);
    line(35,300,145,300);
    setfillstyle(1,RED);
    floodfill(38,301,15);
    setfillstyle(1,WHITE);
    floodfill(38,285,15);

    setcolor(RED);
    setlinestyle(0, 0, 6);
    line(60,260,14,290);
    line(60,260,30,225);
    line(120,260,166,290);
    line(120,260,152,225);

    setcolor(15);
    setlinestyle(0, 0, 1);
    circle(300,280,80);//4
    setfillstyle(1,YELLOW);
    floodfill(301,285,15);
    ellipse(300,320,0,360,45,15);
    setfillstyle(1,0);
    floodfill(301,321,15);
    circle(260,280,15);
    setfillstyle(1,0);
    floodfill(261,285,15);
    circle(340,280,15);
    setfillstyle(1,0);
    floodfill(341,285,15);

    setcolor(0);
    setlinestyle(0, 0, 6);
    line(290,270,240,250);
    line(310,270,360,250);

    getch();
    closegraph();
}
void minar()
{
    initwindow(600,400,"Shaheed Minar");
    setlinestyle(0,0,6);

    setcolor(4);
    setfillstyle(1,WHITE);
    rectangle(0,370,600,400);
    floodfill(18,378,4);

    setfillstyle(1,WHITE);
    rectangle(20,340,580,370);
    floodfill(28,348,4);

    setfillstyle(1,WHITE);
    rectangle(40,310,560,340);
    floodfill(47,318,4);

    setcolor(RED);
    circle(300,163,85);
    setfillstyle(1,RED);
    floodfill(301,164,RED);

    setcolor(WHITE);
    setlinestyle(0,0,10);
    rectangle(400,80,550,305);//R
    rectangle(225,20,375,305);//M
    rectangle(50,80,200,305);//L

    line(450,80,450,305);
    line(500,80,500,305);
    line(275,20,275,305);
    line(325,20,325,305);
    line(100,80,100,305);
    line(150,80,150,305);


    getch();
    closegraph();
}

void football()
{
        initwindow(600,300,"Football");
    setcolor(15);
    rectangle(0,0,100,300);
    setfillstyle(1,GREEN);
    floodfill(1,1,15);
    rectangle(100,0,200,300);
    setfillstyle(1,LIGHTGREEN);
    floodfill(101,1,15);
    rectangle(200,0,300,300);
    setfillstyle(1,GREEN);
    floodfill(201,1,15);
    rectangle(300,0,400,300);
    setfillstyle(1,LIGHTGREEN);
    floodfill(301,1,15);
    rectangle(400,0,500,300);
    setfillstyle(1,GREEN);
    floodfill(401,1,15);
    rectangle(500,0,600,300);
    setfillstyle(1,LIGHTGREEN);
    floodfill(501,1,15);
    setcolor(0);
    rectangle(20,130,53,170);
    rectangle(53,110,70,190);
    rectangle(53,80,90,220);
    ellipse(90,150,270,90,20,20);

    rectangle(550,130,570,170);
    rectangle(530,110,550,190);
    rectangle(510,80,550,220);
    ellipse(510,150,90,270,20,20);


    setcolor(15);
    setlinestyle(1,1,10);
    line(301,0,305,300);
    line(50,0,56,300);
    line(550,0,556,300);
    setcolor(0);
    setlinestyle(1,1,5);
    circle(300,150,50);

    circle(200,150,25);
    setfillstyle(1,YELLOW);
    floodfill(201,151,0);


    getch();
    closegraph();
}
void book()
{
    initwindow(400,400,"Book");
    setcolor(1);
    setfillstyle(1,WHITE);
    floodfill(5,5,1);
    setcolor(0);
    line(100,50,300,70);
    line(300,70,280,270);
    line(100,50,80,250);
    line(280,270,80,250);

    line(80,249,80,281);

    line(80,280,300,300);

    line(300,300,330,80);

    line(300,300,280,270);

    line(300,70,330,80);

    line(120,49,100,252);
    setfillstyle(1,3);
    floodfill(101,51,0);

    setfillstyle(1,7);
    floodfill(81,251,0);

    setfillstyle(1,7);
    floodfill(301,71,0);

    setcolor(WHITE);
    outtextxy(150,120," Learn Graphics ");
    outtextxy(195,150," -by Rifat ");
    outtextxy(150,350," Figure: Book ");
    getch();
    closegraph();
}

void boat()
{
    initwindow(600,450,"Boat");
setcolor(15);
setfillstyle(1,15);
floodfill(1,1,15);
setcolor(0);
ellipse(300,221,180,360,251,30);
ellipse(300,251,180,360,246,30);
ellipse(300,221,180,360,250,130);
setfillstyle(1,RED);
floodfill(301,341,0);
setfillstyle(1,GREEN);
floodfill(301,252,0);
setcolor(LIGHTBLUE);
ellipse(100,350,360,180,100,50);
ellipse(300,350,180,360,100,50);
ellipse(500,350,360,180,100,50);
setfillstyle(1,LIGHTBLUE);
floodfill(501,351,LIGHTBLUE);
setcolor(15);
setcolor(0);
setlinestyle(0,0,5);
circle(50,50,50);
setfillstyle(1,YELLOW);
floodfill(51,51,0);
line(110,70,170,120);
line(110,60,160,50);
line(110,40,180,10);
line(90,90,120,130);
line(70,110,100,190);
line(40,110,50,190);
line(20,110,10,170);
setcolor(4);
setlinestyle(0,0,5);
ellipse(300,150,90,270,15,130);
ellipse(290,130,270,90,20,100);
ellipse(285,235,0,80,70,200);
ellipse(322,235,360,180,30,10);
    getch();
    closegraph();
}
