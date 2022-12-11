#include <graphics.h>
#include <process.h>
#include <dos.h>
#include <conio.h>
void main()
{
    int SCORE[1];
    int x = 300, y = 415, flag = 0, left = 0;
    int i = 250, ch, gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    setbkcolor(BLUE);
phirse:
    outtextxy(220, 240, "DO YOU WANT TO PLAY THE GAME");
    ch = getch();
    if (ch == 89 || ch == 121)
        goto aage;
    if (ch == 27)
        return (0);
    if (ch == 110 || ch == 78)
        return (0);
    else
        goto phirse;
aage:
    i = 250;
    x = 300;
    y = 415;
    flag = 0;
    left = 0;
    while (1)
    {
        circle(x, y, 15);
        bar(i, 430, i + 100, 440);
        line(10, 20, getmaxx() - 10, 20);
        line(10, 20, 10, getmaxy() - 20);
        line(getmaxx() - 10, 20, getmaxx() - 10, getmaxy() - 20);
        line(10, getmaxy() - 20, getmaxx() - 10, getmaxy() - 20);
        outtextxy(10, 10, "Press Esc to Exit..");
        outtextxy(320, 467, "DEVELOPERS : D.S.TOMAR & ASHU UPADHYAY");
        if (x >= 614 || x <= 25)
            flag = !flag;
        if (flag)
            x = x - 1;
        else
            x = x + 1;
        if ((y >= 416 && x <= i + 100 && x >= i) || y <= 35)
            left = !left;
        if (left)
            y = y + 1;
        else
            y = y - 1;
        if (y == 415 && x <= i + 100 && x >= i)
            SCORE[0] = SCORE[0] + 1;
        moveto(600, 10);
        outtext(SCORE);
        if (y >= 444)
            goto lebel;
        if (kbhit())
        {
            ch = getch();
            if (ch == 75) //move left
            {
                if (i != 10)
                    i = i - 5;
            }
            if (ch == 77) //move right
            {
                if (i != 530)
                    i = i + 5;
            }
            if (ch == 27) //exit when esc pressed
                exit(0);
        }
        delay(10);
        cleardevice();
        ch = 0;
    }
lebel:
    outtextxy(280, 240, "GAME OVER");
    outtextxy(220, 260, "DO YOU WANT TO PLAY AGAIN");
    ch = getch();
    if (ch == 89 || ch == 121)
        goto aage;
    if (ch == 27)
        return (0);
    if (ch == 110 || ch == 78)
        return (0);
    else
    {
        cleardevice();
        goto phirse;
    }
}