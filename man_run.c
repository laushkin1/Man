#include <stdio.h>
#include <ncurses.h>
#include <time.h>

int main(){
    initscr();
    
    cbreak();
    noecho();
    curs_set(FALSE);

    int input;

    int x = COLS/2;
    int y = LINES/2;

    while ((input = getch()) != 27){
        clear();
        if(input == 'w' && y > 0) y--;
        else if(input == 's' && y < LINES-3) y++;
        else if(input == 'a' && x > 0){
            mvprintw(y, x, " o \n");
            mvprintw(y+1, x, "/|\\ \n");
            mvprintw(y+2, x, "/<  \n");
            refresh();
            napms(100);
            clear();

            mvprintw(y, x, " o \n");
            mvprintw(y+1, x, "/|\\ \n");
            mvprintw(y+2, x, "/|  \n");
            refresh();
            napms(100);
            clear();
            
            x--;
            mvprintw(y, x, " o \n");
            mvprintw(y+1, x, "/|\\ \n");
            mvprintw(y+2, x, "<|  \n");
            refresh();
            napms(100);
            clear();

            x--;
            refresh();
        }
        else if(input == 'd' && x < COLS-4){
            mvprintw(y, x, " o \n");
            mvprintw(y+1, x, "/|\\ \n");
            mvprintw(y+2, x, " >\\ \n");
            refresh();
            napms(100);
            clear();

            mvprintw(y, x, " o \n");
            mvprintw(y+1, x, "/|\\ \n");
            mvprintw(y+2, x, " |\\ \n");
            refresh();
            napms(100);
            clear();
            
            x++;
            mvprintw(y, x, " o \n");
            mvprintw(y+1, x, "/|\\ \n");
            mvprintw(y+2, x, " |> \n");
            refresh();
            napms(100);
            clear();

            x++;
            refresh();
        }
        else if(input == 'q'){
            mvprintw(y, x, "\\o \n");
            mvprintw(y+1, x, " |\\ \n");
            mvprintw(y+2, x, "/ \\ \n");
            refresh();
            napms(150);
            clear();
        } else if(input == 'e'){
            mvprintw(y, x, " o/\n");
            mvprintw(y+1, x, "/|  \n");
            mvprintw(y+2, x, "/ \\ \n");
            refresh();
            napms(150);
            clear();
        }
        else if(input == 'W' && y > 0) y-=2;
        else if(input == 'S' && y < LINES-3) y+=2;
        else if(input == 'A' && x > 0){
            mvprintw(y, x, " o \n");
            mvprintw(y+1, x, "/|\\ \n");
            mvprintw(y+2, x, "/<  \n");
            refresh();
            napms(100);
            clear();

            mvprintw(y, x, " o \n");
            mvprintw(y+1, x, "/|\\ \n");
            mvprintw(y+2, x, "/|  \n");
            refresh();
            napms(100);
            clear();
            
            x-=2;
            mvprintw(y, x, " o \n");
            mvprintw(y+1, x, "/|\\ \n");
            mvprintw(y+2, x, "<|  \n");
            refresh();
            napms(100);
            clear();

            x-=2;
            refresh();
        }
        else if(input == 'D' && x < COLS-4){
            mvprintw(y, x, " o \n");
            mvprintw(y+1, x, "/|\\ \n");
            mvprintw(y+2, x, " >\\ \n");
            refresh();
            napms(100);
            clear();

            mvprintw(y, x, " o \n");
            mvprintw(y+1, x, "/|\\ \n");
            mvprintw(y+2, x, " |\\ \n");
            refresh();
            napms(100);
            clear();
            
            x+=2;
            mvprintw(y, x, " o \n");
            mvprintw(y+1, x, "/|\\ \n");
            mvprintw(y+2, x, " |> \n");
            refresh();
            napms(100);
            clear();

            x+=2;
            refresh();
        }
        else if(input == 'Q'){
            mvprintw(y, x, "_o \n");
            mvprintw(y+1, x, " |\\ \n");
            mvprintw(y+2, x, "/ \\ \n");
            refresh();
            napms(150);
            clear();
        } else if(input == 'E'){
            mvprintw(y, x, " o_\n");
            mvprintw(y+1, x, "/|  \n");
            mvprintw(y+2, x, "/ \\ \n");
            refresh();
            napms(150);
            clear();
        }
        else if (input == 'l' && y>4 && x>21){
            mvprintw(y-2, x-21, "____________________");
            mvprintw(y-1, x-1, "v");
            mvprintw(y-5, x-21, "____________________");
            
            mvaddch(y-2, x-22, '|');
            mvaddch(y-3, x-22, '|');
            mvaddch(y-4, x-22, '|');
            
            mvaddch(y-2, x-1, '|');
            mvaddch(y-3, x-1, '|');
            mvaddch(y-4, x-1, '|');

            mvprintw(y-3, x-20, "MADE BY laushkin1!");
            
            mvprintw(y, x, "\\o \n");
            mvprintw(y+1, x, " |\\ \n");
            mvprintw(y+2, x, "/ \\ \n");
            refresh();
            napms(2250);
            clear();
        }

        mvprintw(y, x, " o \n");
        mvprintw(y+1, x, "/|\\ \n");
        mvprintw(y+2, x, "/ \\ \n");
        refresh();
    }
    endwin();
    return 0;
}

