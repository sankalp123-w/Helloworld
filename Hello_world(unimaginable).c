#include<windows.h>
#include<time.h>
#include<graphics.h>
#include<dos.h>
void SetColor(int ForgC)
{
	WORD wColor;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
	{
    	wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
    	SetConsoleTextAttribute(hStdOut, wColor);
	}
	return;
}
void delay(float number_of_seconds)
{
	float milli_seconds = 100 * number_of_seconds;
	clock_t start_time = clock();
	while (clock() < start_time + milli_seconds);
}
int main ()
{
    int a, b=0, c=10,count=0;
    char* bits ="TFy!QJu ROo TNn(ROo)SLq SLq ULo+UHs UJq TNn*RPn/QPbEWS_JSWQAIJO^NBELPeHBFHT}TnALVlBLOFAkHFOuFETpHCStHAUFAgcEAelclcn^r^r\\tZvYxXyT|S~Pn SPm SOn TNn ULo0ULo#ULo-WHq!WFs XDt!";
    a = bits[b];
    delay(20);
	SetColor(1); 
	settextstyle(2,0,2); 
	outtextxy(100,20*i,"Hello");
	SetColor(3);
	settextstyle(2,0,2); 
	outtextxy(100,20*i,"World");
	SetColor(5);
	settextstyle(2,0,2); 
	outtextxy(100,20*i,"!");
	printf("\n");
	delay(500);
    while (a != 0)
	{
        a = bits[b];
        b++;
        while (a > 64)
		{
            a--;
            if (++c == 'Z')
			{
                c /= 9;
                putchar(c);
            }
			else
			{
                putchar(33 ^ (b & 0x01));
            }
            count++;
            if(count<1278)
            {
            	SetColor(12);
			}
			else if(count>1227 && count<2455)
			{
				SetColor(15);
			}
			else if(count>2454)
			{
				SetColor(2);
			}
        }
        delay(1);
    }
    SetColor(0);
    return 0;
}
