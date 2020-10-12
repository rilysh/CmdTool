/*
CmdTool Version-1.3 Created by MathInDOS
Copyright 2018-2020 MathInDOS

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the Software), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, andor sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions
The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 
 */


#define MAX_CHAR 1000
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    if(argv[1] == NULL)
    {
        HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(console, 14);
        printf("CmdTool Version-1.3 created by MathInDOS\n\n");
        SetConsoleTextAttribute(console, 15);
        printf("::Usage::\n");
        printf("CmdTool.exe a [ansi code]\n");
		printf("CmdTool.exe b [key word]\n");
        printf("CmdTool.exe c [color code] [string (optional)]\n");
        printf("CmdTool.exe d [file name] (This command permanently delete your file)\n");
        printf("CmdTool.exe f [File name] (To read a file. Recomended only: Text Files)\n");
        printf("CmdTool.exe g [x pos] [y pos] [string (optional)]\n");
        printf("CmdTool.exe h [1 = Hide, 0 = Show]\n");
        printf("CmdTool.exe k \n");
        printf("CmdTool.exe l [string] (To get a string lenth)\n");
        printf("CmdTool.exe n (To get a new line)\n");
		printf("CmdTool.exe p [string]\n");
        printf("CmdTool.exe r (To clear console window and console color)\n");
        printf("CmdTool.exe s [seconds]\n\n");
        SetConsoleTextAttribute(console, 11);
        printf("Copyright (C) 2018-2020 MathInDOS\n");
        SetConsoleTextAttribute(console, 7);
        return 0;

    }
    if(*argv[1] == 'c')
    {
        if(argv[2] == NULL)
        {
            HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(console, 12);
            printf("Error: Please use color code in hexadecimal.");
            SetConsoleTextAttribute(console, 7);
            return 1;
        }
    unsigned char bg,fg;
    int col = (int)strtol(argv[2],NULL,16);
    int input = atoi(argv[2]);
    if(!input < 255)
    {
        bg=col/16;
        fg=col%16;

    }
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console, fg | bg<<4);
    printf(argv[3]);
    return 0;
    }
    if(*argv[1] == 'k')
    {
        int _key = _getch();
        return(_key);
    }

    if(*argv[1] == 'g')
    {
        if(argv[2] == NULL || argv[3] == NULL)
        {
            HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(console, 12);
            printf("Error: Please use X coord and Y coord.");
            SetConsoleTextAttribute(console, 7);
            return 1;
        }
        HANDLE console_Pos = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD Pos;
        Pos.X = atoi(argv[2]);
        Pos.Y = atoi(argv[3]);
        SetConsoleCursorPosition(console_Pos, Pos);
        printf(argv[4]);
        return 0;
    }

     if(*argv[1] == 'b')
    {
        if(argv[2] == NULL)
        {
            HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(console, 12);
            printf("Error: Please use a key!");
            SetConsoleTextAttribute(console, 7);
            return 1;
        }
    	int length = strlen(argv[2]);
		int i;
		for(i=0; i < length; i++) {
	    		printf("%d ", argv[2][i]);
		}
		return 0;
    }

    if(*argv[1] == 's')
    {
        if(argv[2] == NULL)
        {
            HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(console, 12);
            printf("Error: Please give timer of sleep.");
            SetConsoleTextAttribute(console, 7);
            return 1;
        }
        int _wait = atoi(argv[2]);
        Sleep(_wait);
        return 0;
    }
    if(*argv[1] == 'h')
	{
        if(argv[2] == NULL)
        {
            HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(console, 12);
            printf("Error: Please give a code 1 = hide or 0 = show.");
            SetConsoleTextAttribute(console, 7);
            return 1;
        }
		HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_CURSOR_INFO info;
		info.dwSize = 22;
		if(*argv[2] == '1')
		{
			info.bVisible = FALSE;
			SetConsoleCursorInfo(console, &info);
			return 0;
		}
        if(*argv[2] == '0')
        {
			info.bVisible = TRUE;
			SetConsoleCursorInfo(console, &info);
			return 0;
        }
    }
    if(*argv[1] == 'a')
	{
        if(argv[2] == NULL)
        {
            HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(console, 12);
            printf("Error: Please use a ansi code like 987.");
            SetConsoleTextAttribute(console, 7);
            return 1;

        }
		int count = atoi(argv[2]);
		count <= 255;
        printf("%c", count, count);
		return 0;
	}
    if(*argv[1] == 'l')
	{
        if(argv[2] == NULL)
        {
            HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(console, 12);
            printf("Error: Please write a string to get the lenth.");
            SetConsoleTextAttribute(console, 7);
            return 1;
        }
		char len[MAX_CHAR];
		strcpy(len, argv[2]);
		int get = strlen(len);
		printf("%d", get);
		return 0;
	}
    if(*argv[1] == 'r')
	{
		system("cls");
		HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(console, 7);
		return 0;
	}
	if(*argv[1] == 'n')
	{
		printf("\n");
		return 0;
	}
    if(*argv[1] == 'f')
	{
        if(argv[2] == NULL)
        {
            HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(console, 12);
            printf("Error: Please write a file name which is readable like text files.");
            SetConsoleTextAttribute(console, 7);
            return 1;
        }
		FILE *fp;
		int num;
		char c;
		fp = fopen(argv[2], "r");
		c = fgetc(fp);
		while(c!=EOF)
		{
			printf("%c", c);
			c = fgetc(fp);
		}
		fclose(fp);
		
		return 0;
		
	}
    if(*argv[1] == 'd')
	{
        if(argv[2] == NULL)
        {
            HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(console, 12);
            printf("Error: Please write a file name which you want to delete. (WARNING: FILE WILL BE PERMANENTLY DELETED!)");
            SetConsoleTextAttribute(console, 7);
            return 1;
        }
		remove(argv[2]);
		return 0;
    }
	if(*argv[1] == 'p')
	{
        if(argv[2] == NULL)
        {
        HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(console, 12);
        printf("Error: Please write a output to see it.");
        SetConsoleTextAttribute(console, 7);
        return 1;
        }
		printf(argv[2]);
		return 0;
	}
	

}